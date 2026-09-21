#include <Arduino.h>
#include <TimerOne.h>
#include <TimerTwo.h>
// pembagian channels timer ke pin PWM
/*
channel 0 -> pin 5
channel 0 -> pin 6
channel 1 -> pin 9
channel 1 -> pin 10
channel 2 -> pin 3
channel 2 -> pin 11
*/
#define PINEN 
#define INPUT1  TimerTwo::PWM_PIN_3 // channel 2
#define INPUT2  9 // channel 1
#define INPUT3  10 // channel 1


void setup() {
  
  // freq 1000Hz,T = 1ms/1000us
  Timer1.initialize(1000);
  // duty cycle 25%
  Timer1.pwm(INPUT2, 255);
  // duty cycle 50%
  Timer1.pwm(INPUT3, 512);


  Timer2.init(1000u);
  Timer2.start();
  // duty cycle 75% on pin 3 (channel 2)
  Timer2.enablePwm(INPUT1, 127+64);
  // set duty cycle 50%
}

void loop() {
}
