/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink

  some code found here: http://www.gammon.com.au/power
  combined by Jeremy S. Cook
  modified to use a red, yellow, and white LED randomly flickering
  -may use some sort of routine to make sure the light intensity doesn't change too dramatically
  in too short of a time
  
*/

#include <avr/sleep.h>
int pauseTime = 5;
int randomSpan = 40;
int minColor = 80;
int maxColor = 255;
int colorValue1 = 127;
int colorValue2 = 127;
int colorValue3 = 127;
int cycles = 10000; //max of 2,147,483,647 - time on calculated by cycles * pauseTime

// the setup function runs once when you press reset or power the board
void setup() {
  //Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT); 

for(int i = 0; i < cycles; i++){
  randomSeed(analogRead(A0));
  int randomA1 = random(-randomSpan, randomSpan);
  int randomA2 = random(-randomSpan, randomSpan);
  int randomA3 = random(-randomSpan, randomSpan);

  //Serial.print(randomA1); Serial.print(" RA2 "); Serial.print(randomA2); Serial.print(" RA3 "); Serial.println(randomA3);

  colorValue1 += randomA1;
  colorValue2 += randomA2;
  colorValue3 += randomA3;

  if(colorValue1 <minColor) colorValue1 += 2*randomSpan;
  if(colorValue1 >maxColor) colorValue1 -= 2*randomSpan;
  if(colorValue2 <minColor) colorValue2 += 2*randomSpan;
  if(colorValue2 >maxColor) colorValue2 -= 2*randomSpan;
  if(colorValue3 <minColor) colorValue3 += 2*randomSpan;
  if(colorValue3 >maxColor) colorValue3 -= 2*randomSpan;

  //Serial.print(colorValue1); Serial.print(" CV2 "); Serial.print(colorValue2); Serial.print(" CV3 "); Serial.println(colorValue3); 

  //need a way to integrate the start value and add/subtract from it
  
  analogWrite(A1, colorValue1);
  analogWrite(A2, colorValue2);
  analogWrite(A3, colorValue3);
  
  delay(pauseTime);
}

  set_sleep_mode (SLEEP_MODE_PWR_DOWN);  
  sleep_enable();
  sleep_cpu ();  //end of setup, start code to run once
}

// the loop function runs over and over again forever
void loop() {}
