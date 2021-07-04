/**************************************************************************/
/*!
    @file     esp_Lamp_post_vs.cpp
    @author   riri
    @NodeMCU 1.0(ESP-12E Module)
*/
/**************************************************************************/

#define LAMP_POST 1 //ID du lamp_post

//#define DEBUG 1
//#define DEBUGDMX 1
//#define DEBUGDMXvalue 1
//#define DEBUGTOUCH 1
//#define DEBUGMP3 1
//#define DEBUGSTATE 1

/***************************** WIRE ********************/
#include <Arduino.h>
#include <Wire.h>
#define myWire Wire

/****************************** DMX ********************/
#include <LXESP8266UARTDMX.h>

#define DMX_DIRECTION_PIN D3
#define DMX_SERIAL_OUTPUT_PIN D4


/****************************** MP3 ********************/
#include <SoftwareSerial.h>
SoftwareSerial mp3(D7, D8);


/*************************** include *******************/
#include "variable.h"

#if (LAMP_POST == 1)
#include "Lampa_1.h"
#elif (LAMP_POST == 2)
#include "Lampa_2.h"
#elif (LAMP_POST == 3)
#include "Lampa_3.h"
#endif

#include "dmx.h"
#include "MP3.h"
#include "trig.h"
#include "play.h"
#include "fade.h"
#include "bingo.h"
#include "fade_to.h"

/**************************** SETUP ********************/
void setup()
{

#ifdef DEBUG
  Serial.begin(74880);      //74880 freq de l'esp8266 crash
  Serial.setDebugOutput(1); //use uart0 for debugging
  Serial.println("setup");
#endif

  mp3.begin(9600);
  delay(500);
  sendCommand(CMD_SEL_DEV, DEV_TF);
  delay(500);
  sendCommand(CMD_SET_VOLUME, MP3_Volume);
  delay(500);

  pinMode(trigPin, INPUT); // Sets the trigPin as an Input

  pinMode(DMX_DIRECTION_PIN, OUTPUT);
  digitalWrite(DMX_DIRECTION_PIN, HIGH);

  pinMode(DMX_SERIAL_OUTPUT_PIN, OUTPUT);
  ESP8266DMX.startOutput();

  //  myWire.begin(5, 4);
  //  myWire.begin();

  etat = 0;
  trig();

#ifdef DEBUG
  Serial.println("setup complete");
#endif
  delay(5000);
}

/***************************** LOOP ********************/
void loop()
{

  /************** mp3 ****************/
  //  check_mp3();

  /***************i2c****************/
  //  if (state != 1) {
  //    m++;
  //    if (m >= loop_time) {
  //      m = 0;
  //      I2C_request();
  //    }
  //  }

  /**************Prog****************/

  trig();

  if (distance <= presence && rnd == 0)
  {
    tir++;
    if (tir <= 9)
    {
      state = 1;
    }
    else if (tir >= 10)
    {
      tir = 0;
      state = 2;
    }

#ifdef DEBUGSTATE
    Serial.print("state de rnd :");
    Serial.print(state);
    Serial.print(" /rnd :");
    Serial.println(rnd);
#endif
    rnd = 1;
    distance = no_presence;
  }

  if (state == 0)
  {
    play_seq();
  }
  else if (state == 1)
  {
    fade_white();
  }

  else if (state == 2)
  {
    bingo_chase();
  }

  else if (state == 6)
  {
    fade_to();
  }

  else if (state == 9)
  {
#ifdef DEBUGSTATE
    Serial.print("state :");
    Serial.print(state);
    Serial.print(" /rnd :");
    Serial.println(rnd);
#endif
    part = 0;
    seq = 0;
    level = 0;
    state = 0;
    rnd = 0;
  }

  else if (state == 12)
  {
    fade_pink();
  }
  else if (state == 13)
  {
    fade_rouge();
  }
}
