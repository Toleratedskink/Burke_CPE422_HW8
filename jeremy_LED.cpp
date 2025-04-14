// jeremy_LED.cpp
#include "jeremy_LED.h"
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

using namespace std;

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

jeremy_LED::jeremy_LED(int number) {
    this->number = number;
    path = string(LED_PATH) + to_string(number) + "/";
}

void jeremy_LED::turnOn() {
    ofstream fs(path + "brightness");
    fs << "1";
    fs.close();
}

void jeremy_LED::turnOff() {
    ofstream fs(path + "brightness");
    fs << "0";
    fs.close();
}

jeremy_LED::~jeremy_LED() {
}
