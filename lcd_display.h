#ifndef LCD_DISPLAY_H
#define LCD_DISPLAY_H

#include <LiquidCrystal_I2C.h>

extern LiquidCrystal_I2C lcd;
extern int displayPage;

void setupLCD();
void updateLCD();
void changeDisplayPage();

#endif
