/*
Burn bootloader at 1 MHz

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
for(int i = 0; i < 18000; i++){
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(pauseTime);                       // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(pauseTime);
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3*pauseTime);                       // wait for a second
  digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(0, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(pauseTime);                       // wait for a second
  digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(pauseTime);                       // wait for a second
  digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(3*pauseTime);   
  }
  set_sleep_mode (SLEEP_MODE_PWR_DOWN);  
  sleep_enable();
  sleep_cpu ();  //end of setup, start code to run once
}

// the loop function runs over and over again forever
void loop() {}
