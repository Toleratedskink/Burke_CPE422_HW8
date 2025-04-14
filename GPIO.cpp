#include "GPIO.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <unistd.h>
using namespace std;

#define GPIO_PATH "/sys/class/gpio/gpio"

GPIO::GPIO(int number) {
    this->number = number;
    ostringstream s;
    s << number;
    this->name = "gpio" + s.str();
    this->path = "/sys/class/gpio/" + this->name + "/";
    ofstream exportFile("/sys/class/gpio/export");
    exportFile << s.str();
    exportFile.close();
    usleep(100000);
}

int GPIO::setDirection(string dir) {
    ofstream fs(path + "direction");
    if (!fs) return -1;
    fs << dir;
    fs.close();
    return 0;
}

int GPIO::setValue(int value) {
    ofstream fs(path + "value");
    if (!fs) return -1;
    fs << value;
    fs.close();
    return 0;
}

int GPIO::getValue() {
    ifstream fs(path + "value");
    if (!fs) return -1;
    int value;
    fs >> value;
    fs.close();
    return value;
}

GPIO::~GPIO() {}
