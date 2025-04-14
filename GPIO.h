#include <string>
using std::string;

class GPIO {
private:
    int number;
    string name, path;
public:
    GPIO(int number);
    virtual int setDirection(string dir);
    virtual int setValue(int value);
    virtual int getValue();
    virtual ~GPIO();
};
