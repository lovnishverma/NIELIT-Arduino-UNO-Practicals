/*
  Display a message on a 16x2 LCD
*/

#include <LiquidCrystal.h>

// RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(2, 3, A0, A1, A2, A3);

void setup() {

  lcd.begin(16, 2);       // Initialize LCD
  lcd.setCursor(0, 0);    // First row, first column
  lcd.print("....Raftaar....");

}

void loop() {

  // Nothing to do.
  // The message remains displayed on the LCD.

}