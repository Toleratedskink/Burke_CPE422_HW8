#!/bin/bash
echo 60 > /sys/class/gpio/export
echo 46 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio60/direction
echo in > /sys/class/gpio/gpio46/direction
g++ -o test_all_App derek_LED.cpp AnalogIn.cpp GPIO.cpp test_all_App.cpp
