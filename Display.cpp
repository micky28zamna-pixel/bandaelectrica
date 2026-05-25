#ifndef COLOR_SENSOR_H
#define COLOR_SENSOR_H

#include <Arduino.h>
#include <Wire.h>
#include "Adafruit_TCS34725.h"

class ColorSensor {

private:
    Adafruit_TCS34725 tcs;

public:
    ColorSensor();

    bool begin();

    String readColor();
};

#endif