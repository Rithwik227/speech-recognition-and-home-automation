#include "config.h"
#include "device_control.h"
#include "lcd_display.h"
#include "speech_command.h"

BlynkTimer timer;

void setup() {
  Serial.begin(115200);
  setupWiFi();
  setupBlynk();
  setupDevices();
  setupLCD();
  timer.setInterval(2000L, changeDisplayPage);
}

void loop() {
  Blynk.run();
  timer.run();
  checkSpeechCommand();
  checkResetButton();
}
