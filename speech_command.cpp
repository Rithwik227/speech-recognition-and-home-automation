#include "speech_command.h"
#include "device_control.h"
#include "lcd_display.h"
#include <HTTPClient.h>
#include <WiFi.h>

void checkSpeechCommand() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin("http://your-server-address/command");  
    int httpCode = http.GET();
    if (httpCode > 0) {
      String command = http.getString();
      handleSpeechCommand(command);
    }
    http.end();
  }
}

void handleSpeechCommand(String command) {
  command.trim();
  
  if (command == "Turn on LED 1") {
    digitalWrite(ledPin1, HIGH);
  } else if (command == "Turn off LED 1") {
    digitalWrite(ledPin1, LOW);
  } else if (command == "Turn on LED 2") {
    digitalWrite(ledPin2, HIGH);
  } else if (command == "Turn off LED 2") {
    digitalWrite(ledPin2, LOW);
  } else if (command == "Turn on Fan") {
    digitalWrite(fanPin, HIGH);
  } else if (command == "Turn off Fan") {
    digitalWrite(fanPin, LOW);
  } else {
    Serial.println("Unknown command: " + command);
  }
  
  updateLCD();
}
