#include <Arduino.h>
#include "pwm.h"
#define PIN_BATERAI A0
uint16_t data_adc;
float teg_baterai;
void setup() {
  // atur_freq(1000);
  // atur_duty(127+64, 255, 512);
  Serial.begin(9600);
}

void loop() {
  // konversi bat = 0-50v -> vin 0-5v ke 0-1023
  data_adc = analogRead(PIN_BATERAI);
  teg_baterai = ((data_adc/1023.0)*5);
  Serial.println(">data adc:"+String(data_adc)+",teg_baterai:"+String(teg_baterai));
  delay(10);
} 
