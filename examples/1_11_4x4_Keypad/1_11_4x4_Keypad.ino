#include <Keypad.h>

// Number of rows and columns in the keypad
const byte ROWS = 4;
const byte COLS = 4;

// Key layout of the 4x4 keypad
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

/*
   Keypad Connections

   Row Pins:
   R1 -> A0
   R2 -> A1
   R3 -> A2
   R4 -> A3

   Column Pins:
   C1 -> A4
   C2 -> A5
   C3 -> Digital Pin 2
   C4 -> Digital Pin 3
*/

// Arduino pins connected to the keypad rows
byte rowPins[ROWS] = {A0, A1, A2, A3};

// Arduino pins connected to the keypad columns
byte colPins[COLS] = {A4, A5, 2, 3};

// Create a keypad object
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {

  // Start Serial Communication
  Serial.begin(9600);

  Serial.println("4x4 Matrix Keypad Ready");
  Serial.println("Press any key...");
}

void loop() {

  // Read the pressed key
  char key = keypad.getKey();

  // If a key is pressed, display it on the Serial Monitor
  if (key != NO_KEY) {
    Serial.print("Key Pressed: ");
    Serial.println(key);
  }
}