#include "lcd_display.h"
#include "device_control.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);
int displayPage = 0;

void setupLCD() {
  lcd.init();
  lcd.backlight();
}

void updateLCD() {
  lcd.clear();
  if (displayPage == 0) {
    lcd.setCursor(0, 0);
    lcd.print("LED1: ");
    lcd.print(digitalRead(ledPin1) == HIGH ? "ON" : "OFF");
    lcd.setCursor(0, 1);
    lcd.print("LED2: ");
    lcd.print(digitalRead(ledPin2) == HIGH ? "ON" : "OFF");
  } else {
    lcd.setCursor(0, 0);
    lcd.print("Fan: ");
    lcd.print(digitalRead(fanPin) == HIGH ? "ON" : "OFF");
  }
}

void changeDisplayPage() {
  displayPage = (displayPage + 1) % 2;
  updateLCD();
}
