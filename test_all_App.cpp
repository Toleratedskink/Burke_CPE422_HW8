#include "derek_LED.h"
#include "AnalogIn.h"
#include "GPIO.h"
#include <iostream>
using namespace std;

int main() {
    derek_LED led1(1), led3(3), led2(2);
    led1.turnOn();
    led3.turnOn();
    led2.blink(2);

    AnalogIn tempSensor(0);
    cout << "Temperature ADC: " << tempSensor.readAdcSample() << endl;

    GPIO button(46); // P8.16
    button.setDirection("in");
    GPIO led(60); // P9.12
    led.setDirection("out");

    if (button.getValue() == 0) led.setValue(1);

    return 0;
}
