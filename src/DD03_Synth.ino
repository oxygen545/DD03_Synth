#include <Arduino.h>
#include <EEPROM.h>
#include <MIDIUSB.h>
#include <MozziGuts.h>
#include <Oscil.h> // oscillator
#include <ADSR.h>
#include <mozzi_midi.h>
#include <AKWFTables.h>

/************************************************
TODO:
Add fixed frequency to Oscillators
Add Randomization to all parameters
Add Clock functionality
Add Velocity Control variables for all parameters
Perform Performance tests for various control rates
Add features maybe delay or reverb? audio input??
add another envelope
add delay to envelopes
*************************************************/

#ifdef CONTROL_RATE
#undef CONTROL_RATE
#define CONTROL_RATE 256
#endif

//
//           DEFINES
//
// #define FIRST_INIT 1
// #define DEBUG_PRINT 1
// #define DEBUG_SAVE
// #define PRINT_VOICEINFO 1
// #define PRINT_CC 1
// #define PRINT_PC
// #define SEND_MIDI
// #define USE_SYSEX
// #define USE_AFTERTOUCH
// #define USE_CHANNEL_PRESSURE
// #define USE_SYSEX
// #define USE_UNHANDLED_MIDI

#define NUM_OSCILLATORS 3
#define APP_NAME F("DD-3")
#define ROM_MAJOR_NUM 3
#define ROM_MINOR_NUM 3
#define ROM_REVISION_NUM 1

// EEPROM Major Version Number
#define ROM_MAJOR_ADDR 0UL
// EEPROM Minor Version Number
#define ROM_MINOR_ADDR 1UL
// EEPROM Build Version Number
#define ROM_REVISION_ADDR 2UL
// 40 bytes reserved for the future
#define ROM_RESERVED_0 3UL
#define ROM_RESERVED_1 4UL
#define ROM_RESERVED_2 5UL
#define ROM_RESERVED_3 6UL
#define ROM_RESERVED_4 7UL
// Total number of Presets stored
#define ROM_NUM_PRESET_ADDR 8UL
// Address of the first Preset
#define ROM_FIRST_PRESET_ADDR 9UL

/*
/            CONSTANTS
*/
// static const uint8_t POT0_PIN = A0;
// static const uint8_t POT1_PIN = A1;
// static const uint8_t POT2_PIN = A2;
// static const uint8_t POT3_PIN = A3;
// static const uint8_t POT4_PIN = A6;
static const uint16_t EEPROM_SIZE = EEPROM.length();
/*
/            GLOBALS
*/
// RESEARCH NOTE  not sure how to send to All Channels via OMNI
// zero based 0-15
uint8_t midiReceiveChannel = 0;
uint8_t midiTransmitChannel = 1;
uint32_t MidiClock = 0;
bool clockRunning = false;
// unsigned long potData[5] = {0UL, 0UL, 0UL, 0UL, 0UL};
uint32_t MIN_ATTACK = 0UL;    // ADSR Envelope
uint32_t MAX_ATTACK = 127UL;  // ADSR Envelope
uint32_t MIN_DECAY = 0UL;     // ADSR Envelope
uint32_t MAX_DECAY = 127UL;   // ADSR Envelope
uint32_t MIN_SUSTAIN = 1UL;   // ADSR Envelope
uint32_t MAX_SUSTAIN = 127UL; // ADSR Envelope
uint32_t MIN_RELEASE = 1UL;
uint32_t MAX_RELEASE = 127UL;
bool keyDown[127];

// DO NOT CHANGE UNLESS YOU WANT TO LOSE ALL THE PRESETS
// DO NOT CHANGE UNLESS YOU WANT TO LOSE ALL THE PRESETS
// DO NOT CHANGE UNLESS YOU WANT TO LOSE ALL THE PRESETS
struct VoiceData
{
  uint8_t index = 0;
  uint8_t version[3]{ROM_MAJOR_NUM, ROM_MINOR_NUM, ROM_REVISION_NUM};
  uint8_t scale[3] = {0, 0, 0};
  int8_t tune[3] = {0, 0, 0};
  float coarse[3] = {1, 1, 1};
  float fine[3] = {0, 0, 0};
  int8_t transpose = 0; // 0-127 = -24 to 24 notes (2 octaves)
  uint8_t wave_shape[3] = {0, 0, 0};
  uint8_t algorithm = 0;
  bool hasRetrigger[3] = {false, false, false};
  uint8_t phase_shift[3] = {0, 0, 0};
  // Modulator
  byte mod_depth[3] = {0, 0, 0};

  // Envelope
  uint8_t attackScale[3] = {1, 1, 1};
  int16_t decayScale[3] = {1, 1, 1};
  int16_t sustainScale[3] = {1, 1, 1};
  int16_t releaseScale[3] = {1, 1, 1};

  unsigned int attackTime[3] = {0, 0, 0};
  unsigned int decayTime[3] = {0, 0, 0};
  unsigned long sustainTime[3] = {MAX_SUSTAIN, MAX_SUSTAIN, MAX_SUSTAIN};
  unsigned int releaseTime[3] = {0, 0, 0};
  byte attackLevel[3] = {127, 127, 127};
  byte decayLevel[3] = {127, 127, 127};
  byte sustainLevel[3] = {127, 127, 127};
  byte releaseLevel[3] = {0, 0, 0};
};

static const unsigned long presetSize = sizeof(VoiceData);

// ROM Defines
#define MAX_BANKS ((EEPROM.length() - ROM_FIRST_PRESET_ADDR) / presetSize)

const char *pitch_name(byte pitch);
int pitch_octave(byte pitch);
void noteOn(byte channel, byte pitch, byte velocity);
void noteOff(byte channel, byte pitch, byte velocity);
void controlChange(byte channel, byte control, byte value);
void pitchBend(byte channel, byte lsb, byte msb);
void handleMidi();
void PrintVoiceInfo();
void setWaveshape(uint8_t shape, uint8_t id);
// decare reset fucntion
void (*resetFunc)(void) = 0; // declare reset function at address 0

/**
 * @brief Synth Voice that Contains pretty much everything
 *
 */
class SynthVoice
{
public:
  Oscil<NUM_CELLS, AUDIO_RATE> *Osc[3];
  ADSR<CONTROL_RATE, AUDIO_RATE, unsigned long> *Envelope[3];

  VoiceData voiceData;
  uint8_t channel = 0;
  uint8_t pitch = 0;
  float freqs[3] = {0.f, 0.f, 0.f};
  uint8_t velocity = 0;

  SynthVoice()
  {
    Osc[0] = new Oscil<NUM_CELLS, AUDIO_RATE>(WAVE_DATA0);
    Osc[1] = new Oscil<NUM_CELLS, AUDIO_RATE>(WAVE_DATA0);
    Osc[2] = new Oscil<NUM_CELLS, AUDIO_RATE>(WAVE_DATA0);
    Envelope[0] = new ADSR<CONTROL_RATE, AUDIO_RATE, unsigned long>();
    Envelope[1] = new ADSR<CONTROL_RATE, AUDIO_RATE, unsigned long>();
    Envelope[2] = new ADSR<CONTROL_RATE, AUDIO_RATE, unsigned long>();

#ifdef FIRST_INIT
    FirstInit();
#else
    load();
#endif
  };

  ~SynthVoice()
  {
    delete Osc[0];
    delete Osc[1];
    delete Osc[2];
    delete Envelope[0];
    delete Envelope[1];
    delete Envelope[2];
  }

  void setFreqs(Q8n8 midi_note)
  {
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      switch (voiceData.scale[i])
      {
      case 0:
        freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * (voiceData.coarse[i] + voiceData.fine[i]);
        break;
      case 1:
        freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i]) / 10.f);
        break;
      case 2:
        freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i]) / 100.f);
        break;
      case 3:
        freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i] / 1000.f));
        break;
      case 4:
        freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i] / 10000.f));
        break;
      }
      Osc[i]->setFreq(freqs[i]);
    }
  }

  void start(byte c, byte p, byte v)
  {
    pitch = p;
    channel = c;
    velocity = v;
    setFreqs(pitch);
    for (int i = 0; i < NUM_OSCILLATORS; i++) // 3 Envelopes
    {
      Envelope[i]->setAttackLevel((voiceData.attackLevel[i] * velocity) >> 7);
      Envelope[i]->setDecayLevel((voiceData.decayLevel[i] * velocity) >> 7);
      Envelope[i]->setSustainLevel((voiceData.sustainLevel[i] * velocity) >> 7);
      Envelope[i]->setReleaseLevel((voiceData.releaseLevel[i] * velocity) >> 7);
      if (voiceData.hasRetrigger[i])
      {
        Envelope[i]->noteOn(true);
      }
      else
      {
        Envelope[i]->noteOn(false);
      }
    }
    keyDown[p] = true;
  };

  void stop(byte p)
  {
    pitch = 0;
    channel = 0;
    velocity = 0;

    if (keyDown[p])
    {
      Envelope[0]->noteOff();
      Envelope[1]->noteOff();
      Envelope[2]->noteOff();
      keyDown[p] = false;
    }
  };

  void setTimes()
  {
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      Envelope[i]->setTimes(voiceData.attackTime[i] * pow(10, voiceData.attackScale[i]), voiceData.decayTime[i] * pow(10, voiceData.decayScale[i]), voiceData.sustainTime[i] * pow(10, voiceData.sustainScale[i]), voiceData.releaseTime[i] * pow(10, voiceData.releaseScale[i]));
    }
  };

  void setLevels()
  {
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      if (velocity)
      {
        Envelope[i]->setLevels((voiceData.attackLevel[i] * velocity) >> 7, (voiceData.decayLevel[i] * velocity) >> 7, (voiceData.sustainLevel[i] * velocity) >> 7, (voiceData.releaseLevel[i] * velocity) >> 7);
      }
      else
      {
        Envelope[i]->setLevels(voiceData.attackLevel[i], voiceData.decayLevel[i], voiceData.sustainLevel[i], voiceData.releaseLevel[i]);
      }
    }
  };

  void FirstInit()
  {
#ifdef DEBUG_SAVE
    Serial.println("FirstInit");
#endif
    uint16_t l = EEPROM.length();
    // Checks ROM version
    if (EEPROM.read(ROM_MAJOR_ADDR) == ROM_MAJOR_NUM)
    {
      if (EEPROM.read(ROM_MINOR_ADDR) == ROM_MINOR_NUM)
      {
        if (EEPROM.read(ROM_REVISION_ADDR) == ROM_REVISION_NUM)
        {
          // Success load a preset and return
          load(0);
          return;
        }
      }
    }
    // failed ROM version check
    for (uint16_t i = 0; i < l; i++)
    { // erase eeprom
      EEPROM.write(i, 0);
    }
    // Set ROM version
    EEPROM.write(ROM_MAJOR_ADDR, ROM_MAJOR_NUM);
    EEPROM.write(ROM_MINOR_ADDR, ROM_MINOR_NUM);
    EEPROM.write(ROM_REVISION_ADDR, ROM_REVISION_NUM);
    EEPROM.write(ROM_NUM_PRESET_ADDR, MAX_BANKS);
    EEPROM.put(ROM_FIRST_PRESET_ADDR, voiceData);
  };

  bool load(uint8_t idx)
  {

    // uint8_t majVer = EEPROM.read(ROM_MAJOR_ADDR);    // get the version number for the preset for future versioning issues
    // uint8_t minVer = EEPROM.read(ROM_MINOR_ADDR);    // get the version number for the preset for future versioning issues
    // uint8_t revVer = EEPROM.read(ROM_REVISION_ADDR); // get the version number for the preset for future versioning issues
    int Addr = ROM_FIRST_PRESET_ADDR + (idx * presetSize); // the address we will use to store the data
    EEPROM.get(Addr, voiceData);
    setWaveshape(voiceData.wave_shape[0], 0);
    setWaveshape(voiceData.wave_shape[1], 1);
    setWaveshape(voiceData.wave_shape[2], 2);
    setFreqs(pitch);
    setTimes();
    setLevels();
    return true;
  };

  bool load()
  {
    return load(0);
  };

  bool save(uint8_t idx)
  {
#ifdef DEBUG_SAVE
    Serial.println("saveFcn");
#endif

    // uint8_t majver = EEPROM.read(ROM_MAJOR_ADDR);          // get the version number for the preset for future versioning issues
    // uint8_t minver = EEPROM.read(ROM_MINOR_ADDR);          // get the version number for the preset for future versioning issues
    // uint8_t revver = EEPROM.read(ROM_REVISION_ADDR);       // get the version number for the preset for future versioning issues
    int Addr = ROM_FIRST_PRESET_ADDR + (idx * presetSize); // the address we will use to store the data
    voiceData.index = idx;                                 // set this Prest to this index because we are saving this preset we will set the current voicedata index to this new one, saving makes it current
    voiceData.version[0] = ROM_MAJOR_NUM;
    voiceData.version[1] = ROM_MINOR_NUM;
    voiceData.version[2] = ROM_REVISION_NUM;
    EEPROM.put(Addr, voiceData); // Save the Preset
#ifdef DEBUG_SAVE
    Serial.print("svd:");
    Serial.println(idx);
    Serial.flush();
#endif
    return true;
  };

  bool save()
  {
    return save(voiceData.index);
  }
};

SynthVoice Voice;
const int8_t *waveTable[22];

void loop()
{
  audioHook();
}

void setup()
{
  Serial.begin(115200); // set up the Serial output so we can look at the debug stuff
  // pinMode(POT0_PIN, INPUT);
  // pinMode(POT1_PIN, INPUT);
  // pinMode(POT2_PIN, INPUT);
  // pinMode(POT3_PIN, INPUT);
  // pinMode(POT4_PIN, INPUT);
  for (uint8_t i = 0; i < 127; i++)
  {
    keyDown[i] = 0;
  }
#ifdef FIRST_INIT
  Voice.FirstInit();
#endif
  Voice.load(0);
  waveTable[0] = WAVE_DATA0;
  waveTable[1] = WAVE_DATA1;
  waveTable[2] = WAVE_DATA2;
  waveTable[3] = WAVE_DATA3;
  waveTable[4] = WAVE_DATA4;
  waveTable[5] = WAVE_DATA5;
  waveTable[6] = WAVE_DATA6;
  waveTable[7] = WAVE_DATA7;
  waveTable[8] = WAVE_DATA8;
  waveTable[9] = WAVE_DATA9;
  waveTable[10] = WAVE_DATA10;
  waveTable[11] = WAVE_DATA11;
  waveTable[12] = WAVE_DATA12;
  waveTable[13] = WAVE_DATA13;
  waveTable[14] = WAVE_DATA14;
  waveTable[15] = WAVE_DATA15;
  waveTable[16] = WAVE_DATA16;
  waveTable[17] = WAVE_DATA17;
  waveTable[18] = WAVE_DATA18;
  waveTable[19] = WAVE_DATA19;
  waveTable[20] = WAVE_DATA20;
  waveTable[21] = WAVE_DATA21;

  startMozzi(CONTROL_RATE);
}

/// @brief Update the User Inputs and other CONTROL_RATE stuff
void updateControl()
{
  handleMidi();
  Voice.Envelope[0]->update();
  Voice.Envelope[1]->update();
  Voice.Envelope[2]->update();
}

/// @brief Update AUDIO_RATE stuff and send out the audio
/// @return 16-bit Audio
int updateAudio()
{
  Q15n16 Signal[3] = {0, 0, 0};
  int final = 0;
  unsigned char env[NUM_OSCILLATORS] = {Voice.Envelope[0]->next(), Voice.Envelope[1]->next(), Voice.Envelope[2]->next()};
  // ******************************************** PHASE STUFF ********************************************
  for(uint8_t i = 0;i<NUM_OSCILLATORS;i++)
  {
      Voice.Osc[i]->setPhaseFractional(Voice.Osc[i]->getPhaseFractional() + (Voice.voiceData.phase_shift[i] * (NUM_CELLS/127)));
  }
  
   // ******************************************** ALGORITHM STUFF ********************************************
  switch (Voice.voiceData.algorithm)
  {
  case 0: // (Osc0 + Osc1 + Osc2) / 3
    Signal[2] = Voice.Osc[2]->next() * ((env[2] * Voice.voiceData.mod_depth[2]) >> 7);
    Signal[1] = Voice.Osc[1]->next() * ((env[1] * Voice.voiceData.mod_depth[1]) >> 7);
    Signal[0] = Voice.Osc[0]->next() * ((env[0] * Voice.voiceData.mod_depth[0]) >> 7);
    final = (int)((Signal[2] + Signal[1] + Signal[0]));
    break;

  case 1: // (Osc2->Osc1 + Osc0) / 2
    Signal[2] = Voice.Osc[2]->next() * ((env[2] * Voice.voiceData.mod_depth[2]) >> 7);
    Signal[1] = Voice.Osc[1]->phMod(Signal[2]) * ((env[1] * Voice.voiceData.mod_depth[1]) >> 7);
    Signal[0] = Voice.Osc[0]->next() * ((env[0] * Voice.voiceData.mod_depth[0]) >> 7);
    final = (int)((Signal[0] + Signal[1]));
    break;

  case 2: // Osc2->Osc1 + Osc2->Osc0
    Signal[2] = Voice.Osc[2]->next() * ((env[2] * Voice.voiceData.mod_depth[2]) >> 7);
    Signal[1] = Voice.Osc[1]->phMod(Signal[2]) * ((env[1] * Voice.voiceData.mod_depth[1]) >> 7);
    Signal[0] = Voice.Osc[0]->phMod(Signal[2]) * ((env[0] * Voice.voiceData.mod_depth[0]) >> 7);
    final = (int)((Signal[1] + Signal[0]));
    break;

  case 3: // Osc2->Osc1->Osc0 + Osc2->Osc1 + Osc2
    Signal[2] = Voice.Osc[2]->next() * ((env[2] * Voice.voiceData.mod_depth[2]) >> 7);
    Signal[1] = Voice.Osc[1]->phMod(Signal[2]) * ((env[1] * Voice.voiceData.mod_depth[1]) >> 7);
    Signal[0] = Voice.Osc[0]->phMod(Signal[1]) * ((env[0] * Voice.voiceData.mod_depth[0]) >> 7);
    final = (int)((Signal[2] + Signal[1] + Signal[0]));
    break;

  case 4: // Osc2->Osc1->Osc0 + Osc2
    Signal[2] = Voice.Osc[2]->next() * ((env[2] * Voice.voiceData.mod_depth[2]) >> 7);
    Signal[1] = Voice.Osc[1]->phMod(Signal[2]) * ((env[1] * Voice.voiceData.mod_depth[1]) >> 7);
    Signal[0] = Voice.Osc[0]->phMod(Signal[1]) * ((env[2] * Voice.voiceData.mod_depth[0]) >> 7);
    final = (int)((Signal[2] + Signal[0]));
    break;

  case 5: // Osc2->Osc1->Osc0
    Signal[2] = Voice.Osc[2]->next() * ((env[2] * Voice.voiceData.mod_depth[2]) >> 7);
    Signal[1] = Voice.Osc[1]->phMod(Signal[2]) * ((env[1] * Voice.voiceData.mod_depth[1]) >> 7);
    Signal[0] = Voice.Osc[0]->phMod(Signal[1]) * ((env[0] * Voice.voiceData.mod_depth[0]) >> 7);
    final = (int)(Signal[0]);
    break;

  default:
    Signal[2] = Voice.Osc[2]->next() * ((env[2] * Voice.voiceData.mod_depth[2]) >> 7);
    Signal[1] = Voice.Osc[1]->next() * ((env[1] * Voice.voiceData.mod_depth[1]) >> 7);
    Signal[0] = Voice.Osc[0]->next() * ((env[0] * Voice.voiceData.mod_depth[0]) >> 7);
    final = (int)((Signal[2] + Signal[1] + Signal[0]));
    break;
  }
  //final = 0;
  return MonoOutput::from16Bit(final);
}

// WAVESHAPE
void setWaveshape(uint8_t shape, uint8_t id)
{
  if (shape < NUM_WAVETABLES)
  {
    Voice.voiceData.wave_shape[id] = shape;
    Voice.Osc[id]->setTable(waveTable[shape]);
  }
}

/**
 * @brief returns the Pitch Name
 * @c
 * @param pitch
 * @return const char*
const char *pitch_name(byte pitch)
{
  static const char *names[] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
  return names[pitch % 12];
}
*/

/**
 * @brief returns the Pitch octave
 * @c
 * @param pitch
 * @return int
int pitch_octave(byte pitch)
{
  return (pitch / 12) - 1;
}
*/

/// @brief Not On Command
/// @param channel 0-15
/// @param pitch  0-127
/// @param velocity 0-127
void noteOn(byte channel, byte pitch, byte velocity)
{
#ifdef DEBUG_PRINT
  Serial.print("Note On");
#endif
#ifdef SEND_MIDI
  midiEventPacket_t noteOn = {0x09, 0x90 | midiTransmitChannel, pitch, velocity};
  MidiUSB.sendMIDI(noteOn); // transmit the midi noteOn to the rest of the System on the Prescribed Channel
  MidiUSB.flush();
#endif
  if (channel != midiReceiveChannel)
  {
#ifdef DEBUG_PRINT
    Serial.println(channel);
    Serial.flush();
#endif
    return;
  }
  if (velocity == 0)
  {
    noteOff(channel, pitch, 64);
    return;
  }
  Voice.start(channel, pitch, velocity);
  PrintVoiceInfo();
}

void noteOff(byte channel, byte pitch, byte velocity)
{

#ifdef SEND_MIDI
  midiEventPacket_t noteOff = {0x08, 0x80 | midiTransmitChannel, pitch, velocity};
  MidiUSB.sendMIDI(noteOff);
  MidiUSB.flush();
#endif
  if (channel != midiReceiveChannel)
  {
    return;
  }
  if (Voice.channel == channel && Voice.pitch == pitch)
  {
    Voice.stop(pitch);
  }
}

void programChange(byte channel, byte program, byte value)
{

#ifdef SEND_MIDI
  midiEventPacket_t event = {0x0B, 0xB0 | midiTransmitChannel, program, value};
  MidiUSB.sendMIDI(event);
  MidiUSB.flush();
#endif
  if (channel != midiReceiveChannel)
  {
    return;
  }
#ifdef PRINT_PC
  Serial.print("PC:");
  Serial.print(program);
  Serial.print(", ch:");
  Serial.print(channel);
  Serial.print(", val:");
  Serial.println(value);
#endif
  Voice.load(program);
}

void controlChange(byte channel, byte control, byte value)
{

#ifdef SEND_MIDI
  midiEventPacket_t event = {0x0B, 0xB0 | midiTransmitChannel, control, value};
  MidiUSB.sendMIDI(event);
  MidiUSB.flush();
#endif
  if (channel != midiReceiveChannel)
  {
    return;
  }
#ifdef PRINT_CC
  Serial.print("CC:");
  Serial.print(control);
  Serial.print(", ch:");
  Serial.print(channel);
  Serial.print(", val:");
  Serial.println(value);
#endif
  switch (control)
  {
  case 0:              // Bank Select for Presets
    Voice.load(value); // Changes Presets
    break;
  case 1:
    // Modulation Wheel
    break;
  case 2: // Breath Controller
    break;
  case 4: // Foot Pedal
    break;
  case 5: // Portomento Time
    break;
  case 7: // Default Volume
    break;
  case 8: // Balance
    break;
  case 9:
    break;
  case 10: // Pan
    break;
  case 11: // Expression
    break;
  case 12: // Save a preset
    Voice.save(value);
    break;
  case 13: // FX 1 (Carrier Shape)
    setWaveshape(value, 0);
    break;
  case 14: // FX 2 (Modulator 0 Shape)
    setWaveshape(value, 1);
    break;
  case 15: // Modulator 1 Shape
    setWaveshape(value, 2);
    break;
    /*********************************
     *    Envelope Parameters
     **********************************/
    // Envelope 0
  case 16: // Envelope 0 Attack Scaling
    Voice.voiceData.attackScale[0] = value;
    Voice.Envelope[0]->setAttackTime(Voice.voiceData.attackTime[0] * pow(10, value));
    break;
  case 17: // Envelope 0 Attack Time
    Voice.voiceData.attackTime[0] = value;
    Voice.Envelope[0]->setAttackTime(Voice.voiceData.attackTime[0] * pow(10, Voice.voiceData.attackScale[0]));
    break;
  case 18: // Envelope 0 Attack Level
    Voice.voiceData.attackLevel[0] = value;
    Voice.Envelope[0]->setAttackLevel(value);
    break;
  case 19: // Envelope 0 Decay Scaling
    Voice.voiceData.decayScale[0] = value;
    Voice.Envelope[0]->setDecayTime(Voice.voiceData.decayTime[0] * pow(10, value));
    break;
  case 20: // Main Envelope Decay Time
    Voice.voiceData.decayTime[0] = value;
    Voice.Envelope[0]->setDecayTime(Voice.voiceData.decayTime[0] * pow(10, Voice.voiceData.decayScale[0]));
    break;
  case 21: // Envelope 0 Decay Level
    Voice.voiceData.decayLevel[0] = value;
    Voice.Envelope[0]->setDecayLevel(value);
    break;
  case 22: // Envelope 0 Sustain Scaling
    Voice.voiceData.sustainScale[0] = value;
    Voice.Envelope[0]->setSustainTime(Voice.voiceData.sustainTime[0] * pow(10, value));
    break;
  case 23: // Main Envelope Sustain Time
    Voice.voiceData.sustainTime[0] = value;
    Voice.Envelope[0]->setSustainTime(Voice.voiceData.sustainTime[0] * pow(10, Voice.voiceData.sustainScale[0]));
    break;
  case 24: // Envelope 0 Sustain Level
    Voice.voiceData.sustainLevel[0] = value;
    Voice.Envelope[0]->setSustainLevel(value);
    break;
  case 25: // Envelope 0 Release Scaling
    Voice.voiceData.releaseScale[0] = value;
    Voice.Envelope[0]->setReleaseTime(Voice.voiceData.releaseTime[0] * pow(10, value));
    break;
  case 26: // Envelope 0 Main Envelope Release Time
    Voice.voiceData.releaseTime[0] = value;
    Voice.Envelope[0]->setReleaseTime(Voice.voiceData.releaseTime[0] * pow(10, Voice.voiceData.releaseScale[0]));
    break;
  case 27: // Envelope 0 Release Level
    Voice.voiceData.releaseLevel[0] = value;
    Voice.Envelope[0]->setReleaseLevel(value);
    break;
  case 28: // Envelope 1 Attack Scaling
    Voice.voiceData.attackScale[1] = value;
    Voice.Envelope[1]->setAttackTime(Voice.voiceData.attackTime[1] * pow(10, value));
    break;
  case 29: // Envelope 1 Attack Time
    Voice.voiceData.attackTime[1] = value;
    Voice.Envelope[1]->setAttackTime(Voice.voiceData.attackTime[1] * pow(10, Voice.voiceData.attackScale[1]));
    break;
  case 30: // Envelope 1 Attack Level
    Voice.voiceData.attackLevel[1] = value;
    Voice.Envelope[1]->setAttackLevel(value);
    break;
  case 31: // Envelope 1 Decay Scaling
    Voice.voiceData.decayScale[1] = value;
    Voice.Envelope[1]->setDecayTime(Voice.voiceData.decayTime[1] * pow(10, value));
    break;
  case 32: // Envelope 1 Decay Time
    Voice.voiceData.decayTime[1] = value;
    Voice.Envelope[1]->setDecayTime(Voice.voiceData.decayTime[1] * pow(10, Voice.voiceData.decayScale[1]));
    break;
  case 33: // Envelope 1 Decay Level
    Voice.voiceData.decayLevel[1] = value;
    Voice.Envelope[1]->setDecayLevel(value);
    break;
  case 34: // Envelope 1 Sustain Scaling
    Voice.voiceData.sustainScale[1] = value;
    Voice.Envelope[1]->setSustainTime(Voice.voiceData.sustainTime[1] * pow(10, value));
    break;
  case 35: // Envelope 1 Sustain Time
    Voice.voiceData.sustainTime[1] = value;
    Voice.Envelope[1]->setSustainTime(Voice.voiceData.sustainTime[1] * pow(10, Voice.voiceData.sustainScale[1]));
    break;
  case 36: // Envelope 1 Sustain Level
    Voice.voiceData.sustainLevel[1] = value;
    Voice.Envelope[1]->setSustainLevel(value);
    break;
  case 37: // Envelope 1 Release Scaling
    Voice.voiceData.releaseScale[1] = value;
    Voice.Envelope[1]->setReleaseTime(Voice.voiceData.releaseTime[1] * pow(10, value));
    break;
  case 38: // Envelope 1 Release Time
    Voice.voiceData.releaseTime[1] = value;
    Voice.Envelope[1]->setReleaseTime(Voice.voiceData.releaseTime[1] * pow(10, Voice.voiceData.releaseScale[1]));
    break;
  case 39: // Envelope 1 Release Level
    Voice.voiceData.releaseLevel[1] = value;
    Voice.Envelope[1]->setReleaseLevel(value);
    break;
  case 40: // Envelope 2 Attack Scaling
    Voice.voiceData.attackScale[2] = value;
    Voice.Envelope[2]->setAttackTime(Voice.voiceData.attackTime[2] * pow(10, value));
    break;
  case 41: // Envelope 2 Attack Time
    Voice.voiceData.attackTime[2] = value;
    Voice.Envelope[2]->setAttackTime(Voice.voiceData.attackTime[2] * pow(10, Voice.voiceData.attackScale[2]));
    break;
  case 42: // Envelope 2 Attack Level
    Voice.voiceData.attackLevel[2] = value;
    Voice.Envelope[2]->setAttackLevel(value);
    break;
  case 43: // Envelope 2 Decay Scaling
    Voice.voiceData.decayScale[2] = value;
    Voice.Envelope[2]->setDecayTime(Voice.voiceData.decayTime[2] * pow(10, value));
    break;
  case 44: // Envelope 2 Decay Time
    Voice.voiceData.decayTime[2] = value;
    Voice.Envelope[2]->setDecayTime(Voice.voiceData.decayTime[2] * pow(10, Voice.voiceData.decayScale[2]));
    break;
  case 45: // Envelope 2 Decay Level
    Voice.voiceData.decayLevel[2] = value;
    Voice.Envelope[2]->setDecayLevel(value);
    break;
  case 46: // Envelope 2 Sustain Scaling
    Voice.voiceData.sustainScale[2] = value;
    Voice.Envelope[2]->setSustainTime(Voice.voiceData.sustainTime[2] * pow(10, value));
    break;
  case 47: // Envelope 2 Sustain Time
    Voice.voiceData.sustainTime[2] = value;
    Voice.Envelope[2]->setSustainTime(Voice.voiceData.sustainTime[2] * pow(10, Voice.voiceData.sustainScale[2]));
    break;
  case 48: // Envelope 2 Sustain Level
    Voice.voiceData.sustainLevel[2] = value;
    Voice.Envelope[2]->setSustainLevel(value);
    break;
  case 49: // Envelope 2 Release Scaling
    Voice.voiceData.releaseScale[2] = value;
    Voice.Envelope[2]->setReleaseTime(Voice.voiceData.releaseTime[2] * pow(10, value));
    break;
  case 50: // Envelope 2 Release Time
    Voice.voiceData.releaseTime[2] = value;
    Voice.Envelope[2]->setReleaseTime(Voice.voiceData.releaseTime[2] * pow(10, Voice.voiceData.releaseScale[2]));
    break;
  case 51: // Envelope 2 Release Level
    Voice.voiceData.releaseLevel[2] = value;
    Voice.Envelope[2]->setReleaseLevel(value);
    break;
  case 52: // Oscillator 0 Depth
    Voice.voiceData.mod_depth[0] = value;
    break;
  case 53: // Oscillator 1 Depth
    Voice.voiceData.mod_depth[1] = value;
    break;
  case 54: // Oscillator 2 Depth
    Voice.voiceData.mod_depth[2] = value;
    break;
  case 55: // Oscillator 0 Tune
    Voice.voiceData.tune[0] = (int8_t)map(value, 0, 127, -7, 7);
    Voice.setFreqs(Voice.pitch);
    break;
  case 56: // Oscillator 1 Tune
    Voice.voiceData.tune[1] = (int8_t)map(value, 0, 127, -7, 7);
    Voice.setFreqs(Voice.pitch);
    break;
  case 57: // Oscillator 2 Tune
    Voice.voiceData.tune[2] = (int8_t)map(value, 0, 127, -7, 7);
    Voice.setFreqs(Voice.pitch);
    break;
  case 58: // Oscillator 0 Coarse
    Voice.voiceData.coarse[0] = map(value, 0, 127, 0, 32);
    if (Voice.voiceData.coarse[0] == 0)
    {
      Voice.voiceData.coarse[0] = .5;
    }
    Voice.setFreqs(Voice.pitch);
    break;
  case 59: // Oscillator 1 Coarse
    Voice.voiceData.coarse[1] = map(value, 0, 127, 0, 32);
    if (Voice.voiceData.coarse[1] == 0)
    {
      Voice.voiceData.coarse[1] = .5;
    }
    Voice.setFreqs(Voice.pitch);
    break;
  case 60: // Oscillator 2 Coarse
    Voice.voiceData.coarse[2] = map(value, 0, 127, 0, 32);
    if (Voice.voiceData.coarse[2] == 0)
    {
      Voice.voiceData.coarse[2] = .5;
    }
    Voice.setFreqs(Voice.pitch);
    break;
  case 61: // Oscillator 0 fine
    Voice.voiceData.fine[0] = ((float)map(value, 0, 127, 0, 99) / 100.f);
    Voice.setFreqs(Voice.pitch);
    break;
  case 62: // Oscillator 1 fine
    Voice.voiceData.fine[1] = ((float)map(value, 0, 127, 0, 99) / 100.f);
    Voice.setFreqs(Voice.pitch);
    break;
  case 63: // Oscillator 2 fine
    Voice.voiceData.fine[2] = ((float)map(value, 0, 127, 0, 99) / 100.f);
    Voice.setFreqs(Voice.pitch);
    break;
  case 64: // Oscillator 0 Coarse Scale
    Voice.voiceData.scale[0] = value;
    Voice.setFreqs(Voice.pitch);
    break;
  case 65: // Oscillator 1 Coarse Scale
    Voice.voiceData.scale[1] = value;
    Voice.setFreqs(Voice.pitch);
    break;
  case 66: // Oscillator 2 Coarse Scale
    Voice.voiceData.scale[2] = value;
    Voice.setFreqs(Voice.pitch);
    break;
  case 67: // Audio Output Algorithm
    Voice.voiceData.algorithm = value;
    break;
  case 68: // dump EEPROM to the debug console
#ifdef USE_SYSEX
    Serial.print("ROM[");
    Serial.print(EEPROM_SIZE);
    Serial.print("]\tBks:[");
    Serial.print(MAX_BANKS, DEC);
    Serial.println("]");
    for (uint8_t preset = 0; preset < MAX_BANKS; preset++)
    {
      long addr = ROM_FIRST_PRESET_ADDR + (preset * presetSize);
      Serial.print("Add[");
      Serial.print(addr);
      Serial.print("]:");
      for (long x = 0; x < presetSize; x++)
      {
        Serial.print(EEPROM.read(addr + x), HEX);
        Serial.print(",");
      }
      Serial.println();
    }
    Serial.flush();
#endif
    break;
  case 69:
    PrintVoiceInfo();
    break;
  case 70: // replay Note
    Voice.start(Voice.channel, Voice.pitch, Voice.velocity);
    break;
  case 71:
    Voice.voiceData.hasRetrigger[0] = map(value, 0, 1, false, true);
    break;
  case 72:
    Voice.voiceData.hasRetrigger[1] = map(value, 0, 1, false, true);
    break;
  case 73:
    Voice.voiceData.hasRetrigger[2] = map(value, 0, 1, false, true);
    break;
  case 74:
    Voice.voiceData.phase_shift[0] = value;
    break;
  case 75:
    Voice.voiceData.phase_shift[1] = value;
    break;
  case 76:
    Voice.voiceData.phase_shift[2] = value;
    break;
  case 77:
    Voice.voiceData.transpose = map(value, 0, 127, -24, 24);
    break;
  case 78: // set Receive Channel
#ifdef DEBUG_PRINT
    Serial.print("oldRx:");
    Serial.print(midiReceiveChannel);
    Serial.print(" newRx:");
#endif
    if (value > 15)
    {
      midiReceiveChannel = 0;
      break;
    }
    midiReceiveChannel = value;
#ifdef DEBUG_PRINT
    Serial.println(midiReceiveChannel);
#endif
    break;

  case 119: // reset
    resetFunc();
    break;
  case 120: // all notes Off
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      Voice.Envelope[i]->setReleaseTime(0);
      Voice.Envelope[i]->noteOff();
    }
    Voice.setTimes();
    break;

  default:
    break;
  }

#ifdef PRINT_CC
  {
    Serial.flush();
  }
#endif
}

void pitchBend(byte channel, byte lsb, byte msb)
{
  float value = (msb << 8) + lsb;
  float freqs[3] = {0, 0, 0};
  if (channel != midiReceiveChannel)
  {
    return;
  }
// Pitch Down
// 0-8191

// Pitch Up
// 8193 -> 16383
#ifdef DEBUG_PRINT
  Serial.print("PitchBend[");
  Serial.print(channel);
  Serial.print("] msb:");
  Serial.print(msb);
  Serial.print(" lsb:");
  Serial.print(lsb);
  Serial.print(", value:");
  Serial.println(value);
#endif
  if (Voice.Envelope[0]->playing())
  {
    if (value == 16384)
    {
      freqs[0] = Voice.freqs[0];
      freqs[1] = Voice.freqs[1];
      freqs[2] = Voice.freqs[2];
    }
    else if (value < 16384)
    {
      freqs[0] = Voice.freqs[0] / ((float)map(value, 16383, 0, 10000, 20000) / 10000.f);
      freqs[1] = Voice.freqs[1] / ((float)map(value, 16383, 0, 10000, 20000) / 10000.f);
      freqs[2] = Voice.freqs[2] / ((float)map(value, 16383, 0, 10000, 20000) / 10000.f);
    }
    else
    {
      freqs[0] = Voice.freqs[0] * ((float)map(value, 16385, 32164, 10000, 20000) / 10000.f);
      freqs[1] = Voice.freqs[1] * ((float)map(value, 16385, 32164, 10000, 20000) / 10000.f);
      freqs[2] = Voice.freqs[2] * ((float)map(value, 16385, 32164, 10000, 20000) / 10000.f);
    }
    Voice.Osc[0]->setFreq(freqs[0]);
    Voice.Osc[1]->setFreq(freqs[1]);
    Voice.Osc[2]->setFreq(freqs[2]);

#ifdef DEBUG_PRINT
    Serial.print("old");
    Serial.print(Voice.carrier_freq);
    Serial.print("hz\tnew:");
    Serial.print(new_freq[0]);
    Serial.println("hz");
    Serial.flush();
#endif
  }
}

void sysex(byte channel, byte lsb, byte msb)
{
  if (channel != midiReceiveChannel)
  {
    return;
  }
#ifdef DEBUG_PRINT
  // handle Sysex Message here
  Serial.print("Sysx:");
  Serial.print("chan:");
  Serial.print(channel, DEC);
  Serial.print(" msb:");
  Serial.print(msb, HEX);
  Serial.print(" lsb:");
  Serial.println(lsb, HEX);
#endif
};

void handleMidi()
{
  midiEventPacket_t rx = MidiUSB.read();
  switch (rx.header)
  {
  case 0:
    break; // No pending events

  case 0x8:
    noteOff(
        rx.byte1 & 0xF, // channel
        rx.byte2,       // pitch
        rx.byte3        // velocity
    );
    break;

  case 0x9:
    noteOn(
        rx.byte1 & 0xF, // channel
        rx.byte2,       // pitch
        rx.byte3        // velocity
    );
    break;

  case 0xA:
// AfterTouch
#ifdef USE_AFTERTOUCH
    Serial.print("Channel Pressure: Channel");
    Serial.print(rx.byte1 & 0xF);
    Serial.print(", byte2:");
    Serial.print(rx.byte2, HEX);
    Serial.print(", byte3:");
    Serial.println(rx.byte3, HEX);
    Serial.flush();
#endif
    break;

  case 0xB:
    controlChange(
        rx.byte1 & 0xF, // channel
        rx.byte2,       // control
        rx.byte3        // value
    );
    break;

  case 0xC:
    // Program Change
    programChange(
        rx.byte1 & 0xF, // channel
        rx.byte2,       // control
        rx.byte3        // value
    );
    break;

  case 0xD:
// Channel Pressure
#ifdef USE_CHANNEL_PRESSURE
    Serial.print("Channel Pressure: Channel");
    Serial.print(rx.byte1 & 0xF);
    Serial.print(", byte2:");
    Serial.print(rx.byte2, HEX);
    Serial.print(", byte3:");
    Serial.println(rx.byte3, HEX);
    Serial.flush();
#endif
    break;

  case 0xE:
    pitchBend(
        rx.byte1 & 0xF, // channel
        rx.byte2,       // lsb
        rx.byte3        // msb
    );
    break;

  case 0xF:
#ifdef USE_SYSEX
    // Sysex Message
    if (rx.byte1 == 0xFF)
    {
#ifdef DEBUG_PRINT
      Serial.println("Got an FF");
#endif }
      else if (rx.byte1 == 0xF8)
      {
        // Clock Signal
        if (clockRunning)
        {
          MidiClock++;
        }
        return;
      }
      else if (rx.byte1 == 0xFA)
      {
        // Clock Start
        MidiClock = 0;
        clockRunning = true;
      }
      else if (rx.byte1 == 0xFB)
      {
        // Clock Continue/ Pause
        if (clockRunning)
        {
          clockRunning = false;
        }
        else
        {
          clockRunning = true;
        }
      }
      else if (rx.byte1 == 0xFC)
      {
        // Clock Stopped
        clockRunning = false;
      }
      else
      {
#ifdef DEBUG_PRINT
        Serial.print("SX:");
        Serial.print(rx.header, HEX);
        Serial.print(F(","));
        Serial.print(rx.byte1, HEX);
        Serial.print(F(","));
        Serial.print(rx.byte2, HEX);
        Serial.print(F(","));
        Serial.println(rx.byte3, HEX);
#endif
      }
#ifdef DEBUG_PRINT
      Serial.flush();
#endif
      sysex(
          rx.byte1 & 0xF, // channel
          rx.byte2,       // control
          rx.byte3        // value
      );
#endif
      break;

    default:
#ifdef USE_UNHANDLED_MIDI
      Serial.print("Unhandled MIDI message: ");
      Serial.print(rx.header, HEX);
      Serial.print("-");
      Serial.print(rx.byte1, HEX);
      Serial.print("-");
      Serial.print(rx.byte2, HEX);
      Serial.print("-");
      Serial.println(rx.byte3, HEX);
      Serial.flush();
#endif
      break;
    }
  }

  void PrintVoiceInfo()
  {
#ifdef PRINT_VOICEINFO

    {
      Serial.println(APP_NAME);
      Serial.print(Voice.voiceData.index);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.version[0]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.version[1]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.version[2]);
      Serial.print(F(","));
      Serial.print(F(","));
      Serial.print(Voice.voiceData.algorithm);
      Serial.print(F(","));
      for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
      {
        Serial.print(Voice.voiceData.wave_shape[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.mod_depth[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.tune[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.scale[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.coarse[i], 2);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.fine[i], 2);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.hasRetrigger[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.velocityDepth[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.attackScale[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.attackTime[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.attackLevel[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.decayScale[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.decayTime[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.decayLevel[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.sustainScale[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.sustainTime[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.sustainLevel[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.releaseScale[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.releaseTime[i]);
        Serial.print(F(","));
        Serial.print(Voice.voiceData.releaseLevel[i]);
        if (i != 2)
        {
          Serial.print(F(","));
        }
      }
      Serial.println();
      Serial.flush();
    }
#endif
  }