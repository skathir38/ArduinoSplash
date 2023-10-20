#include "Splash.h"

Splash16x2::Splash16x2(LiquidCrystal_I2C &lcd) {
  _lcd_i2c = &lcd;
  isI2C = true;
}

Splash16x2::Splash16x2(LiquidCrystal &lcd) {
  _lcd_4bit = &lcd;
  isI2C = false;
}

void Splash16x2::displayCentered(int row, String text) {
  if (isI2C) {

    int strLen = text.length();
    int lcdLen = 16;
    int padding = (lcdLen - strLen) / 2;
    _lcd_i2c->setCursor(padding, row);
    _lcd_i2c->print(text);
  } else {
    int strLen = text.length();
    int lcdLen = 16;
    int padding = (lcdLen - strLen) / 2;
    _lcd_4bit->setCursor(padding, row);
    _lcd_4bit->print(text);
  }
}

void Splash16x2::setCursor(int col, int row) {
  if (isI2C) {
    _lcd_i2c->setCursor(col, row);
  } else {
    _lcd_4bit->setCursor(col, row);
  }
}

void Splash16x2::noDisplay() {
  if (isI2C) {
    _lcd_i2c->noDisplay();
  } else {
    _lcd_4bit->noDisplay();
  }
}

void Splash16x2::display() {
  if (isI2C) {
    _lcd_i2c->display();
  } else {
    _lcd_4bit->display();
  }
}

void Splash16x2::noCursor() {
  if (isI2C) {
    _lcd_i2c->noCursor();
  } else {
    _lcd_4bit->noCursor();
  }
}

void Splash16x2::cursor() {
  if (isI2C) {
    _lcd_i2c->cursor();
  } else {
    _lcd_4bit->cursor();
  }
}

Splash20x4::Splash20x4(LiquidCrystal_I2C &lcd) {
  _lcd_i2c = &lcd;
  isI2C = true;
}

Splash20x4::Splash20x4(LiquidCrystal &lcd) {
  _lcd_4bit = &lcd;
  isI2C = false;
}

void Splash20x4::displayCentered(int row, String text) {
  if (isI2C) {

    int strLen = text.length();
    int lcdLen = 20;
    int padding = (lcdLen - strLen) / 2;
    _lcd_i2c->setCursor(padding, row);
    _lcd_i2c->print(text);
  } else {
    int strLen = text.length();
    int lcdLen = 20;
    int padding = (lcdLen - strLen) / 2;
    _lcd_4bit->setCursor(padding, row);
    _lcd_4bit->print(text);
  }
}

void Splash20x4::setCursor(int col, int row) {
  if (isI2C) {
    _lcd_i2c->setCursor(col, row);
  } else {
    _lcd_4bit->setCursor(col, row);
  }
}

void Splash20x4::noDisplay() {
  if (isI2C) {
    _lcd_i2c->noDisplay();
  } else {
    _lcd_4bit->noDisplay();
  }
}

void Splash20x4::display() {
  if (isI2C) {
    _lcd_i2c->display();
  } else {
    _lcd_4bit->display();
  }
}

void Splash20x4::noCursor() {
  if (isI2C) {
    _lcd_i2c->noCursor();
  } else {
    _lcd_4bit->noCursor();
  }
}

void Splash20x4::cursor() {
  if (isI2C) {
    _lcd_i2c->cursor();
  } else {
    _lcd_4bit->cursor();
  }
}
