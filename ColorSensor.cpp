#ifndef BUTTON_CONTROL_H
#define BUTTON_CONTROL_H

#include <Arduino.h>

class ButtonControl {

private:
    int onPin;
    int offPin;

public:
    bool active;

    ButtonControl(int onP, int offP);

    void begin();

    void update();
};

#endif