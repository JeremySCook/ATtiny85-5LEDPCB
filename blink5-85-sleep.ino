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
*/

#include <avr/sleep.h>
int pauseTime = 100;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
for(int i = 0; i < 5; i++){
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(pauseTime);                       // wait for a second
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(pauseTime);
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(pauseTime);                       // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(pauseTime);       // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(pauseTime);       // wait for a second
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  delay(pauseTime);                       // wait for a second
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
  delay(pauseTime);                       // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(pauseTime);                       // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(pauseTime);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(pauseTime);   // wait for a second
  }
  set_sleep_mode (SLEEP_MODE_PWR_DOWN);  
  sleep_enable();
  sleep_cpu ();  //end of setup, start code to run once
}

// the loop function runs over and over again forever
void loop() {}
