#include "AnalogIn.h"
#include <iostream>
using namespace std;

int main() {
    AnalogIn tempSensor(0);
    cout << "ADC Channel: " << tempSensor.getNumber() << endl;
    cout << "Value: " << tempSensor.readAdcSample() << endl;
    return 0;
}
