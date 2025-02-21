#include "device_control.h"
#include "lcd_display.h"

void setupDevices() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(fanPin, OUTPUT);
  pinMode(resetButtonPin, INPUT_PULLUP);
}

void resetDevices() {
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(fanPin, LOW);
  updateLCD();
}

void checkResetButton() {
  if (digitalRead(resetButtonPin) == LOW) {
    delay(200);
    resetDevices();
  }
}
