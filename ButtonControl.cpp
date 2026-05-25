#include "ColorSensor.h"
#include "Motor.h"
#include "ServoController.h"
#include "Display.h"
#include "ButtonControl.h"

// Objetos
ColorSensor sensor;

Motor motor1(22, 24, 44);
Motor motor2(26, 28, 45);

ServoController servos;

Display lcdDisplay(7, 6, 5, 4, 3, 2);

ButtonControl botones(32, 34);

void setup() {
    Serial.begin(9600);

    lcdDisplay.begin();

    botones.begin();

    motor1.begin();
    motor2.begin();

    servos.begin(12, 13);

    if(sensor.begin()) {
        Serial.println("Sensor OK");
    } else {
        Serial.println("Error Sensor");
        while(1);
    }
}

void loop() {

    botones.update();

    String color = sensor.readColor();

    if(botones.active) {
        motor1.forward(200);
        motor2.forward(200);
    } else {
        motor1.stop();
        motor2.stop();
    }

    servos.moveByColor(color);

    lcdDisplay.showColor(color);

    Serial.println(color);

    delay(200);
}