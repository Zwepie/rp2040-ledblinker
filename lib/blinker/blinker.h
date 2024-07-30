#pragma once

enum Color
{
    RED,
    GREEN,
    BLUE
};

class Blinker
{
    public:

    Blinker(int pin);
    void initialize(Color theColor);
    
private:
    unsigned long lastTime = 0;
    unsigned long interval = 200;
    bool ledstate = false;
    int power = 0;
    int ledPin;
    Color color;
    void printColor();
};




