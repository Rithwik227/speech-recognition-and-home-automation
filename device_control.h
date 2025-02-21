#ifndef DEVICE_CONTROL_H
#define DEVICE_CONTROL_H

#include <Arduino.h>

const int ledPin1 = 5;
const int ledPin2 = 18;
const int fanPin = 19;
const int resetButtonPin = 4;

void setupDevices();
void resetDevices();
void checkResetButton();

#endif
