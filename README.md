# Smart Home Control with ESP32 & Blynk

This repository contains code for an ESP32-based smart home automation system, integrating Blynk, an LCD display, and speech command handling.

## Features
- Control LEDs and a fan via Blynk app
- Receive speech commands via HTTP
- Display device status on an LCD screen
- Reset button to turn off all devices

## File Structure
- `main.ino`: Main program logic
- `config.h`: WiFi and Blynk credentials
- `device_control.h/.cpp`: Device control functions
- `lcd_display.h/.cpp`: LCD handling
- `speech_command.h/.cpp`: Speech recognition

## Setup
1. Install the required libraries:
2. Flash the code to your ESP32.

## Usage
- Control devices via Blynk
- Send HTTP GET requests to control LEDs and fan
- Monitor status on LCD
Benefits of This Structure
 Modularity – Each function is well-organized
 Scalability – Easier to add more devices and features
 Readability – Clean separation of concerns

Now, you can push this to your GitHub repository! 🚀 Let me know if you need help setting that up. 
