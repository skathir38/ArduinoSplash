#include <LiquidCrystal.h>
#include "Splash.h"

LiquidCrystal lcd(13,12,11,10,9,8); // Adjust the pin numbers as per your wiring

Splash16x2 splash16x2(lcd);

void setup() {
    lcd.begin(16, 2);

    splash16x2.display();
}

void loop() {
    lcd.clear();
    splash16x2.setCursor(0, 0); // Set cursor position manually
    lcd.print("Row 1 Text");
    splash16x2.displayCentered(1, "Centered Text"); // Display centered text on row 2
    delay(2000);
}
