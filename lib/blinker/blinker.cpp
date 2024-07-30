
#include "blinker.h"
#include <Arduino.h>

Blinker::Blinker(int pin)
{
    ledPin = pin;
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, HIGH);
}

void Blinker::initialize(Color theColor)
{
    color = theColor;
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, HIGH);
    Serial.println("-OK");
}

void Blinker::printColor()
{
    switch(color)
    {
        case RED:
            Serial.println("RED");
            break;
        case GREEN:
            Serial.println("GREEN");
            break;
        case BLUE:
            Serial.println("BLUE");
            break;
        default:
            Serial.println("unknown");
            break; 
    }
}