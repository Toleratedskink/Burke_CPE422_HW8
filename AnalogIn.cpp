#include "AnalogIn.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

AnalogIn::AnalogIn() : number(0) {}
AnalogIn::AnalogIn(int n) : number(n) {}
AnalogIn::~AnalogIn() {}

int AnalogIn::getNumber() { 
    return number; 
}

void AnalogIn::setNumber(int n) { 
    number = n; 
}

int AnalogIn::readAdcSample() {
    string path = "/sys/bus/iio/devices/iio:device0/in_voltage" + to_string(number) + "_raw";
    ifstream fs(path);
    int value;
    fs >> value;
    return value;
}
