﻿// UserConfiguation.h
//
//
//*========================================================================================
//*========================================================================================
//*============  START USER CONFIGURATION FOR THE I/O   ===================================
//*========================================================================================
//*========================================================================================
//
// Define all used pins for the application.
//
// The range of digitals is commenly used. First to define the inputs,outputs and ultrasonics.
// The analog out en servo pins are in the PWN range of the board.
//
//%STARTGENERATION Generation directive, dont remove!
const byte NoInputPins  = 3;
const byte NoOutputPins = 5;
const byte NoUltrasonic = 2;
const byte NoAnaInPins  = 1;
const byte NoAnaOutPins = 3;
const byte NoServos     = 3;
const byte NoTemp       = 2;
const byte NoMarkers    = 0;
String DummyTags[]      = { "" };
String InputTags[]      = { "S1","S2","S3" };
String InputPins[]      = { "D40","D23","D44" };
String OutputTags[]     = { "LED1","LED2","LED3","LED4","LED5" };
String OutputPins[]     = { "D22","D25","D30","D31","D50" };
String AnaInTags[]      = { "ANAIN1" };
String AnaInPins[]      = { "AI00" };
String AnaOutTags[]     = { "BLUE","GREEN","RED" };
String AnaOutPins[]     = { "PWM08","PWM09","PWM10" };
String ServoTags[]      = { "SERVO1","SERVO2","SERVO3" };
String ServoPins[]      = { "PWM02","PWM04","PWM03" };
String UltraTags[]      = { "D1","DISTANCE2" };
String UltraPins[]      = { "D47","D48","D23","D24" };
String TempTags[]       = { "BUITEN","BINNEN" };
String TempPins[]       = { "PWM12" };
const byte OneWireChannel = 12;
String MarkerTags[]     = { "" };
//%ENDGENERATION Generation directive dont remove!
//
// Declaration of all used states in the FSM.
// The first and last state "START"and "END" are obligatory and may not be removed, the rest is up to you
//
//
String PossibleFSMStates[] = { "START",
                               "TASK2",
                               "TASK3",
                               "TASK4",
                               "MULTITASK",
                               "END" };
//
// Start defining User timers don't use predefined timers (stay out of range 200-300)
//
const byte timTask1 = 1;
const byte timTask2 = 2;
const byte timTask3 = 3;
const byte timTask4 = 4;
const byte timADC = 5;
const byte timLED1 = 6;
//
// End defining user tinmers
//
// START USER SPECIFIC DECLARATIONS
//
// Start User varaibles:
//
boolean AanUitTask1;
boolean AanUitTask2;
boolean AanUitTask3;
boolean AanUitTask4;
boolean EntryEvent = false;
int ADConverter1 = 0;
int ADConverter2 = 0;
int ADConverter3 = 0;
int kleur = 1;
// End User varaibles:
//
// use of the extra MEGA board for the messages, use MessageI2C and/or UseHMISerial, do not remove, only set true or false
//
boolean UseI2C = false;
boolean UseHMISerial = true;
boolean UseGPS = false;
boolean UseIntercard = false;
//
//*========================================================================================
//*========================================================================================
//*==============  END USER CONFIGURATION =================================================
//*========================================================================================
//*========================================================================================
