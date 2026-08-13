/*
  Practical 1.16
  Using Arduino Uno Internal EEPROM

  Components:
  • Arduino Uno
  • Push Button
  • LED

  Connections
  --------------------------
  Push Button -> D11
  LED         -> D7
*/

#include <EEPROM.h>

// Pin Definitions
const int buttonPin = 11;
const int ledPin = 7;

// EEPROM Memory Address
const int ledAddr = 10;

// Variable to store LED state
int ledState = 0;

void setup()
{
  // Configure Pins
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

  // Read the last saved LED state from EEPROM
  ledState = EEPROM.read(ledAddr);

  // Set LED according to stored state
  digitalWrite(ledPin, ledState);

  Serial.begin(9600);
  Serial.println("Arduino Internal EEPROM Demo");
}

void loop()
{
  // Check if button is pressed
  if (digitalRead(buttonPin) == HIGH)
  {
    // Toggle LED state
    ledState = !ledState;

    // Save new state into EEPROM
    EEPROM.write(ledAddr, ledState);

    // Update LED
    digitalWrite(ledPin, ledState);

    Serial.print("LED State Saved: ");
    Serial.println(ledState);

    // Wait until button is released
    while (digitalRead(buttonPin) == HIGH);

    delay(50);   // Simple debounce
  }
}