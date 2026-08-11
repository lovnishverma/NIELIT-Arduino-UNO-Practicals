/*
====================================================
Practical 1.19
Smart Bluetooth Home Automation System
====================================================

Aim
----
Control a relay using Bluetooth and Serial Monitor,
display the appliance status on a 16x2 I2C LCD,
and save the relay state in Arduino EEPROM.

----------------------------------------------------
Components Required
----------------------------------------------------

• Arduino Uno
• HC-05 / HC-06 Bluetooth Module
• 16x2 I2C LCD
• 5V Relay Module
• Jumper Wires

----------------------------------------------------
Bluetooth Connections
----------------------------------------------------

HC-05            Arduino Uno

VCC   ----------> 5V
GND   ----------> GND
TXD   ----------> D10
RXD   ----------> D11

Note:
Arduino D10 acts as RX
Arduino D11 acts as TX

Leave STATE and EN pins unconnected.

----------------------------------------------------
I2C LCD Connections
----------------------------------------------------

LCD              Arduino Uno

VCC   ----------> 5V
GND   ----------> GND
SDA   ----------> A4
SCL   ----------> A5

----------------------------------------------------
Relay Connections
----------------------------------------------------

Relay            Arduino Uno

VCC   ----------> 5V
GND   ----------> GND
IN    ----------> D6

----------------------------------------------------
Commands
----------------------------------------------------

Bluetooth Terminal

A or a  -> Relay ON
B or b  -> Relay OFF

Serial Monitor

A or a  -> Relay ON
B or b  -> Relay OFF

----------------------------------------------------
EEPROM
----------------------------------------------------

The last relay state is automatically saved in
Arduino EEPROM.

After power OFF and ON, the previous state is
restored automatically.

====================================================
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>
#include <EEPROM.h>

// LCD Configuration
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Bluetooth Module
// Arduino D10 <- HC-05 TX
// Arduino D11 -> HC-05 RX
SoftwareSerial BT(10, 11);

// Relay Pin
const int relayPin = 6;


// Change this according to your relay module
// true  -> Active LOW Relay (Most relay modules)
// false -> Active HIGH Relay
const bool ACTIVE_LOW_RELAY = true;

// EEPROM Address
const int relayAddress = 0;

// Relay State
byte relayState = LOW;

// Update Relay, LCD and Serial Monitor
void updateSystem()
{
  // Control Relay
  if (ACTIVE_LOW_RELAY)
    digitalWrite(relayPin, !relayState);
  else
    digitalWrite(relayPin, relayState);

  lcd.clear();

  if (relayState == HIGH)
    lcd.print("Appliance ON");
  else
    lcd.print("Appliance OFF");

  lcd.setCursor(0,1);
  lcd.print("Memory Saved");

  Serial.print("Relay State : ");

  if (relayState == HIGH)
    Serial.println("ON");
  else
    Serial.println("OFF");
}

// Process Bluetooth / Serial Commands
void processCommand(char command)
{
  // Ignore Enter/Newline
  if (command == '\n' || command == '\r')
    return;

  Serial.print("Received : ");
  Serial.println(command);

  // Relay ON
  if (command == 'A' || command == 'a')
  {
    relayState = HIGH;

    EEPROM.update(relayAddress, relayState);

    updateSystem();

    BT.println("Relay ON");
    Serial.println("Relay Turned ON");
  }

  // Relay OFF
  else if (command == 'B' || command == 'b')
  {
    relayState = LOW;

    EEPROM.update(relayAddress, relayState);

    updateSystem();

    BT.println("Relay OFF");
    Serial.println("Relay Turned OFF");
  }

  // Invalid Command
  else
  {
    Serial.println("Invalid Command!");

    BT.println("Invalid Command!");
    BT.println("Use A = ON");
    BT.println("Use B = OFF");

    lcd.clear();
    lcd.print("Invalid Cmd");

    delay(1000);

    updateSystem();
  }
}

// Setup
void setup()
{
  pinMode(relayPin, OUTPUT);

  Serial.begin(9600);
  BT.begin(9600);

  lcd.init();
  lcd.backlight();

  lcd.print("Raftaar Smart");
  lcd.setCursor(0, 1);
  lcd.print("Home Hub");

  delay(2000);

  relayState = EEPROM.read(relayAddress);

  // Safety Check
  if (relayState != LOW && relayState != HIGH)
  {
    relayState = LOW;
  }

  updateSystem();

  Serial.println();
  Serial.println("==============================");
  Serial.println("Raftaar Smart Home Hub");
  Serial.println("==============================");
  Serial.println("Bluetooth Ready");
  Serial.println();
  Serial.println("Commands");
  Serial.println("A -> Relay ON");
  Serial.println("B -> Relay OFF");
  Serial.println();

  BT.println("==============================");
  BT.println("Smart Home Hub Ready");
  BT.println("==============================");
  BT.println("A = Relay ON");
  BT.println("B = Relay OFF");
}

// Main Loop
void loop()
{
  // Bluetooth Input
  if (BT.available())
  {
    char command = BT.read();
    processCommand(command);
  }

  // Serial Monitor Input
  if (Serial.available())
  {
    char command = Serial.read();
    processCommand(command);
  }
}