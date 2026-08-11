# NIELIT Arduino UNO Practicals Library

Version: 1.0.0

This Arduino library packages the NIELIT Arduino UNO practical programs as
installable Arduino Examples.

## Installation

1. Open Arduino IDE.
2. Select **Sketch -> Include Library -> Add .ZIP Library...**
3. Select `NIELIT_Arduino_UNO_Practicals_Library_v1.0.0.zip`.
4. Restart Arduino IDE if the Examples menu does not refresh.

## Open a practical

Go to:

**File -> Examples -> NIELIT Arduino UNO Practicals**

Then select the required practical.

## Included practicals

- Practical 1.2 - Basic LED Output
- Practical 1.3 - LED Array
- Practical 1.4 - LED PWM Fade
- Practical 1.5 - Digital Button Input
- Practical 1.6 - Button Controlled LED
- Practical 1.7 - Two-Button LED Control
- Practical 1.8 - Buzzer
- Practical 1.9 - LED and Buzzer PWM
- Practical 1.10 - 16x2 LCD
- Practical 1.11 - 4x4 Keypad
- Practical 1.12 - LCD + Keypad + Buzzer Access Control
- Practical 1.13 - HC-SR04 Ultrasonic Distance
- Practical 1.14 - DHT11 Telemetry
- Practical 1.15 - DHT11 + I2C LCD
- Practical 1.16 - Internal EEPROM
- Practical 1.17 - Relay
- Practical 1.18 - Bluetooth LED Control
- Practical 1.19 - Bluetooth Home Automation + EEPROM + I2C LCD

## Third-party dependencies

Some examples require external Arduino libraries. Install them from
**Tools -> Manage Libraries...** before compiling the relevant practical.

Common dependencies include:

- LiquidCrystal
- Keypad
- DHT sensor library
- LiquidCrystal_I2C
- SoftwareSerial (normally included with AVR Arduino core)

## Notes

The practicals are distributed as Arduino Examples rather than forcing all
practical implementations into one compiled library. This is the recommended
Arduino structure for teaching material: students install one ZIP and then
open each practical directly from the Examples menu.

The library itself also exposes a small version API:

```cpp
#include <NIELIT_Arduino_UNO_Practicals.h>

void setup() {
  Serial.begin(9600);
  Serial.println(NIELIT::UNO::version());
}

void loop() {}
```
