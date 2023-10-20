#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "Splash.h"

LiquidCrystal_I2C lcd(0x27, 16, 2); // Adjust the I2C address if necessary

Splash16x2 splash16x2(lcd);

void setup() {
    lcd.init();
    lcd.backlight();
    splash16x2.noCursor();
    splash16x2.display();
}

void loop() {
    lcd.clear();
    splash16x2.setCursor(0, 0); // Set cursor position manually
    lcd.print("Row 1 Text");
    splash16x2.displayCentered(1, "Ce"); // Display centered text on row 2
    delay(2000);
}
