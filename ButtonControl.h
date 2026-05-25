#include "ButtonControl.h"

ButtonControl::ButtonControl(int onP, int offP) {
    onPin = onP;
    offPin = offP;

    active = false;
}

void ButtonControl::begin() {

    pinMode(onPin, INPUT_PULLUP);

    pinMode(offPin, INPUT_PULLUP);
}

void ButtonControl::update() {

    if(digitalRead(onPin) == LOW)
        active = true;

    if(digitalRead(offPin) == LOW)
        active = false;
}