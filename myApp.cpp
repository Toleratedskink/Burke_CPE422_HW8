// myApp.cpp
#include "jeremy_LED.h"
#include <iostream>

int main(int argc, char* argv[]) {
    jeremy_LED led(0);
    led.turnOn();
    sleep(1);
    led.turnOff();
    return 0;
}
