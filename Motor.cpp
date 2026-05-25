#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>
#include <LiquidCrystal.h>

class Display {

private:
    LiquidCrystal lcd;

public:
    Display(int rs, int en, int d4, int d5, int d6, int d7);

    void begin();

    void showColor(String color);
};

#endif