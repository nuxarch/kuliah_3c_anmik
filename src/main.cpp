#include <Arduino.h>
#include "pwm.h"

void setup() {
  atur_freq(1000);
  atur_duty(127+64, 255, 512);
}

void loop() {
}
