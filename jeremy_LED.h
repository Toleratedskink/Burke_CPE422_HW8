// jeremy_LED.h
#include <string>
using std::string;

class jeremy_LED {
  private:
    int number;
    string path;
  public:
    jeremy_LED(int number);
    void turnOn();
    void turnOff();
    void displayState();
    ~jeremy_LED();
};
