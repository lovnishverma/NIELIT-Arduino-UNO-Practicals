# NIELIT Arduino UNO Practicals

A structured Arduino library containing the **NIELIT Arduino UNO Practical Series (1.2–1.19)**.

The library provides classroom-ready Arduino UNO practical programs covering GPIO, digital and analog interfacing, PWM, displays, sensors, EEPROM, Bluetooth, relay control, and home automation.

---

<img width="718" height="578" alt="Screenshot" src="https://github.com/user-attachments/assets/12c79667-26a8-4632-b167-5e24df027432" />



## Features

- 18 complete Arduino UNO practical programs
- Direct access through the Arduino IDE **Examples** menu
- Designed for classroom and laboratory training
- Beginner-friendly hardware interfacing programs
- Digital input/output
- PWM
- LCD and keypad interfacing
- Ultrasonic distance measurement
- Temperature and humidity sensing
- EEPROM data storage
- Relay control
- Bluetooth communication
- Home automation
- Reusable NIELIT library utilities

---

# Installation

## Method 1 — Arduino Library Manager

This is the recommended installation method.

1. Open **Arduino IDE**.
2. Go to:

   **Tools → Manage Libraries**

3. Search for:

 ```text
   NIELIT Arduino UNO Practicals
```

4. Select the library and click **Install**.

After installation, open:

**File → Examples → NIELIT Arduino UNO Practicals**

and select the required practical.

---

## Method 2 — ZIP Installation

You can also install the library manually using the ZIP package.

1. Download the library ZIP.

2. Open Arduino IDE.

3. Go to:

   **Sketch → Include Library → Add .ZIP Library...**

4. Select the ZIP file.

5. Restart Arduino IDE if necessary.

After installation, open:

**File → Examples → NIELIT Arduino UNO Practicals**

---

# Practical List

| Practical | Title                                        |
| --------- | -------------------------------------------- |
| **1.2**   | Basic LED Output                             |
| **1.3**   | LED Array                                    |
| **1.4**   | LED PWM Fade                                 |
| **1.5**   | Digital Button Input                         |
| **1.6**   | Button Controlled LED                        |
| **1.7**   | Two-Button LED Control                       |
| **1.8**   | Buzzer                                       |
| **1.9**   | LED and Buzzer PWM                           |
| **1.10**  | 16x2 LCD                                     |
| **1.11**  | 4x4 Keypad                                   |
| **1.12**  | LCD + Keypad + Buzzer Access Control         |
| **1.13**  | HC-SR04 Ultrasonic Distance                  |
| **1.14**  | DHT11 Telemetry                              |
| **1.15**  | DHT11 + I2C LCD                              |
| **1.16**  | Internal EEPROM                              |
| **1.17**  | Relay                                        |
| **1.18**  | Bluetooth LED Control                        |
| **1.19**  | Bluetooth Home Automation + EEPROM + I2C LCD |


| Practical | Simulation Link(s) |
|---|---
| 1.1 Laboratory Safety, Tool Handling & Instrument Calibration | https://www.tinkercad.com/things/9JulLm4PUxr-rdo-led-power |
| 1.2 Digital Output – Interfacing a Single LED | https://www.tinkercad.com/things/egMHbG0Dwl5-led-blinking |
| 1.3 Array Structures – Interfacing Multiple LEDs | https://www.tinkercad.com/things/bUARFFkwWXJ-led-pattern |
| 1.4 Analog Output Simulation – LED Fading via PWM | https://www.tinkercad.com/things/5RrwE5zdO2X-pwm-with-led |
| 1.5 Digital Input – Push-Button Interfacing | https://www.tinkercad.com/things/ixWSHLo1QdM-push-button-interfacing |
| 1.6 Input-Output Coupling – LED Control via Switch Logic | https://www.tinkercad.com/things/kO5menc2Pev-led-button-interfacing |
| 1.7 Foundational Capstone – Multi-Switch Control | https://www.tinkercad.com/things/2xzqqbB4pdv-4leds-2-buttons |
| 1.8 Frequency Generation – Piezoelectric Buzzer Interfacing | https://www.tinkercad.com/things/lk1jTQc7BeA-piezoelectric-buzzer-interfacing |
| 1.9 Intermediate Capstone – High-Current Acoustic-Visual Indicator | https://www.tinkercad.com/things/k6jryo2aaLV-piezoelectric-buzzer-led-interfacing |
| 1.10 Character Display – LCD Interfacing | https://www.tinkercad.com/things/9Qrg0005zZ9-lcd-interfacing |
| 1.11 Matrix Keyboards – Keypad Interfacing & Serial Logging | https://www.tinkercad.com/things/a0OBZ3WDVSQ-matrix-keyboards-keypad-interfacing-amp-serial-logging |
| 1.12 Sub-System Capstone – Integrated LCD-Buzzer-Keypad Access Control | https://www.tinkercad.com/things/lO18KCORf5w-integrated-lcd-buzzer-keypad-access-control |
| 1.13 Time-of-Flight Calculus – Interfacing Ultrasonic Sensors | https://www.tinkercad.com/things/kC2uVszYSSa-ultrasonic-sensor |
| 1.14 Environmental Telemetry – Interfacing DHT | https://www.tinkercad.com/things/8EZBzNslWfi-interfacing-dht-and-light-module |
| 1.15 Environmental Monitoring Capstone – Intelligent Telemetry Terminal | https://www.tinkercad.com/things/lBTnwebvK57-intelligent-telemetry-terminal<br>https://wokwi.com/projects/471049364498828289 |
| 1.16 Serial Bus Architectures – Interfacing I2C Internal EEPROM | *(no simulation link)* |
| 1.17 High-Voltage Safety Segregation – Interfacing a Relay Module | https://www.tinkercad.com/things/3mGW49W5Bni-interfacing-relay-and-led |
| 1.18 Wireless Serial Transceivers – Interfacing Bluetooth Modules | https://wokwi.com/projects/470149153762709505 |
| 1.19 Comprehensive Capstone – Home Automation System (Smart Bluetooth) | https://wokwi.com/projects/470247005263111169 |

---

# Recommended Student Workflow

Students only need to install the library once.

### Step 1 — Install the Arduino UNO Board Package

Arduino UNO uses the AVR Arduino core supplied through the Arduino IDE.

Select:

**Tools → Board → Arduino AVR Boards → Arduino Uno**

### Step 2 — Install NIELIT Arduino UNO Practicals

Open:

**Tools → Manage Libraries**

Search:

```text
NIELIT Arduino UNO Practicals
```

Click **Install**.

### Step 3 — Install Practical Dependencies

Some practicals require additional libraries.

Install the required dependencies through:

**Tools → Manage Libraries**

### Step 4 — Open the Practical

Go to:

**File → Examples → NIELIT Arduino UNO Practicals**

Select the required practical.

### Step 5 — Check the Hardware Connections

Follow the circuit and pin configuration specified in the practical.

### Step 6 — Select the Board and Port

Select:

* **Arduino Uno**
* Correct COM/serial port

### Step 7 — Verify and Upload

Click **Verify** first.

If compilation succeeds, click **Upload**.

---

# Third-Party Dependencies

Some practicals require additional Arduino libraries.

Install them through:

**Tools → Manage Libraries**

| Practical | Dependency                                                    |
| --------- | ------------------------------------------------------------- |
| **1.10**  | LiquidCrystal / LiquidCrystal_I2C as specified by the example |
| **1.11**  | Keypad                                                        |
| **1.12**  | Keypad, LiquidCrystal / LiquidCrystal_I2C as specified        |
| **1.14**  | DHT sensor library                                            |
| **1.15**  | DHT sensor library, LiquidCrystal_I2C                         |
| **1.18**  | SoftwareSerial / Bluetooth interface as specified             |
| **1.19**  | SoftwareSerial, LiquidCrystal_I2C                             |

> **Note:** `SoftwareSerial` is normally provided with the AVR Arduino core and does not generally need to be installed separately.

Always refer to the individual practical before installing dependencies.

---

# Hardware

The practical series uses common Arduino UNO laboratory components, including:

* Arduino UNO
* LEDs
* Push buttons
* Resistors
* Buzzer
* 16x2 LCD
* I2C LCD
* 4x4 keypad
* HC-SR04 ultrasonic sensor
* DHT11 temperature/humidity sensor
* Relay module
* HC-05 / HC-06 Bluetooth module
* Jumper wires
* Breadboard

Refer to the individual practical for the exact components and wiring.

---

# GPIO / Pin Configuration

The practicals use Arduino UNO digital and analog pins according to the individual circuit requirements.

Always verify the pin definitions in the example before connecting hardware.

For example:

```cpp
const int ledPin = 7;
const int buttonPin = 11;
```

Do not assume that the same pin configuration applies to every practical.

---

# EEPROM

Practical **1.16** introduces the Arduino UNO's internal EEPROM.

Practical **1.19** extends this concept to a Bluetooth-controlled home automation system with persistent relay-state storage.

EEPROM allows selected data to remain stored even after the Arduino is powered off or reset.

Avoid unnecessary EEPROM writes in applications that repeatedly update the same address.

---

# Bluetooth

Practicals **1.18** and **1.19** use a Bluetooth serial module such as:

* HC-05
* HC-06

Typical applications include:

* Wireless LED control
* Relay control
* Home automation
* Serial command processing

Check the practical-specific wiring before connecting the Bluetooth module.

> **Important:** Verify voltage levels for the Bluetooth module's RX/TX interface. Do not blindly connect signals without checking the module's electrical requirements.

---

# Relay and Home Automation Safety

Practical **1.17** and Practical **1.19** demonstrate relay-based control.

The Arduino should control an appropriately rated **relay module or driver circuit**.

Do not connect mains voltage directly to Arduino GPIO pins.

For mains-powered loads:

```text
Arduino UNO
     │
     ▼
Relay / Driver Module
     │
     ▼
Electrical Load
```

Use appropriate isolation, protection, enclosure, wiring, and qualified supervision when working with mains electricity.

---

# DHT11 Sensor

Practical **1.14** demonstrates temperature and humidity acquisition using a DHT11 sensor.

Practical **1.15** extends the application by displaying sensor readings on an I2C LCD.

Depending on the sensor/module being used, a pull-up resistor may be required on the data line.

---

# Ultrasonic Sensor

Practical **1.13** uses the HC-SR04 ultrasonic sensor for distance measurement.

Follow the practical-specific wiring carefully.

For applications using hardware with voltage levels incompatible with Arduino GPIO, use an appropriate level-shifting interface.

---

# Library Usage

This project is primarily an **educational practical library**.

The practical programs are distributed as Arduino Examples rather than forcing all practical implementations into one compiled library.

This allows students to open, study, modify, compile, and upload each practical independently.

After installation:

```text
File
 └── Examples
      └── NIELIT Arduino UNO Practicals
           ├── Practical_1_2
           ├── Practical_1_3
           ├── Practical_1_4
           ├── ...
           └── Practical_1_19
```

---

# NIELIT Library API

The package also exposes a small library API.

Example:

```cpp
#include <NIELIT_Arduino_UNO_Practicals.h>

void setup() {
    Serial.begin(9600);

    Serial.println(NIELIT::UNO::version());
}

void loop() {
}
```

This API provides the library version and course-related utility functionality.

---

# Package Structure

```text
NIELIT_Arduino_UNO_Practicals/
│
├── library.properties
├── keywords.txt
├── README.md
├── LICENSE
│
├── src/
│   ├── NIELIT_Arduino_UNO_Practicals.h
│   └── NIELIT_Arduino_UNO_Practicals.cpp
│
├── examples/
│   ├── Practical_1_2/
│   ├── Practical_1_3/
│   ├── Practical_1_4/
│   ├── Practical_1_5/
│   ├── Practical_1_6/
│   ├── Practical_1_7/
│   ├── Practical_1_8/
│   ├── Practical_1_9/
│   ├── Practical_1_10/
│   ├── Practical_1_11/
│   ├── Practical_1_12/
│   ├── Practical_1_13/
│   ├── Practical_1_14/
│   ├── Practical_1_15/
│   ├── Practical_1_16/
│   ├── Practical_1_17/
│   ├── Practical_1_18/
│   └── Practical_1_19/
│
└── extras/
```

---

# Troubleshooting

### Library does not appear in Arduino IDE

Make sure you have:

1. Installed the library through **Library Manager**.
2. Restarted Arduino IDE.
3. Searched for the exact library name:

```text
NIELIT Arduino UNO Practicals
```

Then check:

**File → Examples**

---

### Compilation error: library not found

For example:

```text
fatal error: DHT.h: No such file or directory
```

Install the corresponding dependency through:

**Tools → Manage Libraries**

Then compile the practical again.

---

### Arduino UNO not detected

Check:

* USB cable
* COM/serial port
* Board selection
* USB driver where applicable

Use:

**Tools → Board → Arduino AVR Boards → Arduino Uno**

---

### Practical works in simulation but not on hardware

Verify:

* Pin numbers
* GND connections
* Component polarity
* Resistor values
* Power supply
* Sensor wiring
* Module voltage requirements

---

# Version

Current release:

```text
v1.0.0
```

---

# Educational Purpose

This library is intended for educational, laboratory, and training purposes.

It supports practical learning in:

* Arduino Programming
* Embedded Systems
* Digital Electronics
* Hardware Interfacing
* Sensors
* Actuators
* PWM
* Display Interfaces
* EEPROM
* Bluetooth Communication
* Home Automation

---

# Author

**Lovnish Verma**

NIELIT / Embedded Systems & AI/IoT Training

---

# License

This project is distributed under the license included in the repository.

See:

```text
MIT LICENSE
```
