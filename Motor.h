#include "Motor.h"

Motor::Motor(int i1, int i2, int enPin) {
    in1 = i1;
    in2 = i2;
    en = enPin;
}

void Motor::begin() {
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(en, OUTPUT);
}

void Motor::forward(int speed) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    analogWrite(en, speed);
}

void Motor::stop() {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    analogWrite(en, 0);
}