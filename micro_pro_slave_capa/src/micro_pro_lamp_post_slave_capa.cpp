/**************************************************************************/
/*!
    @file     micro_pro_lamp_post_slave_capa.cpp
    @author   riri
    @arduino leonardo (micro_pro_MEGA32U4)
*/
/**************************************************************************/

//#define DEBUG 1

/************************** Include ********************/
#include <Arduino.h>
#include <Wire.h>
#include <CapacitiveSensor.h>
#include "variable.h"
#include "requestevent.h"

/*************************** Touch **********************/
CapacitiveSensor cs_8_9 = CapacitiveSensor(8, 9);
CapacitiveSensor cs_8_6 = CapacitiveSensor(8, 6);

/**************************** SETUP ********************/
void setup()
{
#ifdef DEBUG
  Serial.begin(9600); // start serial for output
  Serial.println("\nSlave");
#endif

  Wire.begin(4);                // join i2c bus as slave with address #4
  Wire.onRequest(requestEvent); // interrupt handler for when data is requested by i2c
}

/***************************** LOOP ********************/
void loop()
{
  valaniv_h = analogRead(A0);
  valaniv_b = analogRead(A1);
  valdniv_h = analogRead(A2);
  valdniv_b = analogRead(A3);

  aniv_h = map(valaniv_h, 0, 1023, 0, 4000);
  aniv_b = map(valaniv_b, 0, 1023, 0, 4000);
  dniv_h = map(valdniv_h, 0, 1023, 0, 4000);
  dniv_b = map(valdniv_b, 0, 1023, 0, 4000);

  a_t = cs_8_6.capacitiveSensor(30);
  d_t = cs_8_9.capacitiveSensor(30);
  a_a[z] = a_t;
  d_d[z] = d_t;
  z++;
  if (z > 9)
    z = 0;

  for (int i = 0; i < taille; i++)
  {
    a = a + a_a[i];
    d = d + d_d[i];
  }

  a = a / taille;
  d = d / taille;

  b = map(c, aniv_b, aniv_h, 0, 255);
  e = map(f, dniv_b, dniv_h, 0, 255);
  if (b < 0)
    b = 0;
  if (b > 255)
    b = 255;
  if (e < 0)
    e = 0;
  if (e > 255)
    e = 255;

  if (a < aniv_b)
    c = aniv_b;
  else if (a > aniv_h)
    c = aniv_h;
  else
    c = a;

  if (d < dniv_b)
    f = dniv_b;
  else if (d > dniv_h)
    f = dniv_h;
  else
    f = d;

#ifdef DEBUG
  Serial.print(" /aniv_h : ");
  Serial.print(aniv_h);
  Serial.print(" /aniv_b : ");
  Serial.print(aniv_b);
  Serial.print(" /dniv_h : ");
  Serial.print(dniv_h);
  Serial.print(" /dniv_b : ");
  Serial.print(dniv_b);
  Serial.print(" /a : ");
  Serial.print(a);
  Serial.print(" /b : ");
  Serial.print(b);
  Serial.print("/ d : ");
  Serial.print(d);
  Serial.print(" /e : ");
  Serial.println(e);
#endif
}
