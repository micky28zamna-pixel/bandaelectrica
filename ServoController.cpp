#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

class Motor {

private:
    int in1;
    int in2;
    int en;

public:
    Motor(int i1, int i2, int enPin);

    void begin();

    void forward(int speed);

    void stop();
};

#endif