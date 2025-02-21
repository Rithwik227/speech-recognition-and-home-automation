#ifndef CONFIG_H
#define CONFIG_H

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

const char* ssid = "*";  
const char* pass = "*";  
const char auth[] = "*";

void setupWiFi() {
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
}

void setupBlynk() {
  Blynk.begin(auth, ssid, pass);
}

#endif
