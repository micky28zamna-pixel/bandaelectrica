#include "ServoController.h"

void ServoController::begin(int pin1, int pin2) {
    servo1.attach(pin1);
    servo2.attach(pin2);
}

void ServoController::moveByColor(String color) {

    if(color == "Rojo") {
        servo1.write(90);
        servo2.write(0);
    }
    else if(color == "Azul") {
        servo1.write(0);
        servo2.write(90);
    }
    else {
        servo1.write(0);
        servo2.write(0);
    }
}