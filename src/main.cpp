/*
#include <Arduino.h>

// delay(1000);  // DELAY NOOIT gebruiken, hij stopt alles

#define LED_PIN 26  // wordt niet bewaardt in geheugen, werkt voor eenderwelk arduino apparaat
int ledState = LOW;

// function declaration
void breatheNonBlocking();

void setup()
{
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
}

void loop()
{
  // analogWrite(LED_PIN, LOW);  // PWM pulse with modulation, int waard → veranderd aantal keren dat het aan en uit gaat sorta
  breatheNonBlocking();
}

unsigned long lastTime = 0;
unsigned long interval = 100;

// non blocking led blink
// void blinkLed()
// {
//   if (millis() - lastTime >= 1000)
//   {
//     ledState != ledState;
//     digitalWrite(LED_PIN, ledState);
//   }
// }

int power = 0;
int increment = 5;

void breatheNonBlocking()
{
  if (millis() - lastTime >= interval)
  {
    lastTime = millis();
    power += increment;
    Serial.println(power);
    if (power >= 255 || power <= 0)
    {
      increment = -increment;
    }
    analogWrite(LED_PIN, power);
  }
}*/


#include <Arduino.h>
#include "blinker.h"
#include "logging.h"

#define RED_PIN 26
#define GREEN_PIN 27
#define BLUE_PIN 28

uLog theLog;

Blinker redLed(RED_PIN);
Blinker greenLed(GREEN_PIN);
Blinker bleuLEd(BLUE_PIN);

void setup()
{
  Serial.begin(115200);
  Serial.println("initializing RED");
  redLed.initialize(Color::RED);
  Serial.println("initializing GREEN");
  greenLed.initialize(Color::GREEN);
  Serial.println("initializing BLUE");
  bleuLEd.initialize(Color::BLUE);
}

void loop()
{

}
