// myBlink.cpp
#include "derek_LED.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
  
    string cmd = argv[1];
    int ledNum = stoi(argv[2]);
    int count = stoi(argv[3]);

    jeremy_LED led(ledNum);
    if (cmd == "on") led.turnOn();
    else if (cmd == "off") led.turnOff();
    else if (cmd == "blink") led.blink(count);
    else cout << "Invalid command." << endl;
    return 0;
}
