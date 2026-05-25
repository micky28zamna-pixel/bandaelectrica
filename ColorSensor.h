#include "ColorSensor.h"

ColorSensor::ColorSensor()
: tcs(TCS34725_INTEGRATIONTIME_600MS,
      TCS34725_GAIN_1X)
{
}

bool ColorSensor::begin() {
    return tcs.begin();
}

String ColorSensor::readColor() {

    uint16_t r, g, b, c;

    tcs.getRawData(&r, &g, &b, &c);

    float sum = r + g + b;

    if(sum == 0)
        return "Indefinido";

    float nr = r / sum;
    float ng = g / sum;
    float nb = b / sum;

    if(nr > 0.45 && nr > ng && nr > nb)
        return "Rojo";

    if(nb > 0.45 && nb > nr && nb > ng)
        return "Azul";

    if(nr > 0.35 && ng > 0.35)
        return "Amarillo";

    return "Indefinido";
}