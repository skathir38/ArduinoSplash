#ifndef SPLASH_H
#define SPLASH_H

#include <Arduino.h>
#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>

class Splash16x2 {
public:
    Splash16x2(LiquidCrystal_I2C &lcd);
    Splash16x2(LiquidCrystal &lcd);
    void displayCentered(int row, String text);
    void setCursor(int col, int row);
    void noDisplay();
    void display();
    void noCursor();
    void cursor();

private:
    LiquidCrystal_I2C* _lcd_i2c;
    LiquidCrystal* _lcd_4bit;
    bool isI2C;
};

class Splash20x4 {
public:
    Splash20x4(LiquidCrystal_I2C &lcd);
    Splash20x4(LiquidCrystal &lcd);
    void displayCentered(int row, String text);
    void setCursor(int col, int row);
    void noDisplay();
    void display();
    void noCursor();
    void cursor();

private:
    LiquidCrystal_I2C* _lcd_i2c;
    LiquidCrystal* _lcd_4bit;
    bool isI2C;
};

#endif
