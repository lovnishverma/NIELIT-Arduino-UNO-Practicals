/*
  Practical 1.12
  Integrated LCD - Keypad - Buzzer Access Control

  Board : Arduino Uno

  ------------------------------
  I2C LCD Connections
  ------------------------------
  LCD VCC  -> Arduino 5V
  LCD GND  -> Arduino GND
  LCD SDA  -> Arduino A4
  LCD SCL  -> Arduino A5

  ------------------------------
  4x4 Keypad Connections
  ------------------------------
  Keypad R1 -> Arduino A0
  Keypad R2 -> Arduino A1
  Keypad R3 -> Arduino A2
  Keypad R4 -> Arduino A3

  Keypad C1 -> Arduino D2
  Keypad C2 -> Arduino D3
  Keypad C3 -> Arduino D12
  Keypad C4 -> Arduino D10

  ------------------------------
  Buzzer Connection
  ------------------------------
  Buzzer (+) -> Arduino D13
  Buzzer (-) -> Arduino GND
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

//-------------------------------------------------
// Create LCD object
// LCD Address = 0x27
// LCD Size = 16 Columns x 2 Rows
//-------------------------------------------------
LiquidCrystal_I2C lcd(0x27, 16, 2);

//-------------------------------------------------
// Keypad Configuration
//-------------------------------------------------
const byte ROWS = 4;
const byte COLS = 4;

// Layout of the 4x4 keypad
char keys[ROWS][COLS] =
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Arduino pins connected to keypad rows
byte rowPins[ROWS] = {A0, A1, A2, A3};

// Arduino pins connected to keypad columns
byte colPins[COLS] = {2, 3, 12, 10};

// Create keypad object
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

//-------------------------------------------------
// Buzzer Pin
//-------------------------------------------------
const byte buzzer = 13;

//-------------------------------------------------
// Correct Password
//-------------------------------------------------
String password = "1234";

// Stores the password entered by the user
String entered = "";

//-------------------------------------------------
// Function: Short Beep
// Called whenever a key is pressed
//-------------------------------------------------
void beep()
{
  digitalWrite(buzzer, HIGH);
  delay(50);
  digitalWrite(buzzer, LOW);
}

//-------------------------------------------------
// Function: Success Beep
// Called when the correct password is entered
//-------------------------------------------------
void successBeep()
{
  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(buzzer, LOW);
}

//-------------------------------------------------
// Function: Error Beep
// Called when the password is incorrect
//-------------------------------------------------
void errorBeep()
{
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(buzzer, HIGH);
    delay(100);

    digitalWrite(buzzer, LOW);
    delay(100);
  }
}

//-------------------------------------------------
// Setup Function
// Runs only once when Arduino starts
//-------------------------------------------------
void setup()
{
  // Configure buzzer as output
  pinMode(buzzer, OUTPUT);

  // Turn buzzer OFF initially
  digitalWrite(buzzer, LOW);

  // Initialize LCD
  lcd.init();

  // Turn ON LCD backlight
  lcd.backlight();

  // Display welcome message
  lcd.setCursor(0, 0);
  lcd.print("Enter Password");

  // Move cursor to second line
  lcd.setCursor(0, 1);
}

//-------------------------------------------------
// Main Program
// Repeats continuously
//-------------------------------------------------
void loop()
{
  // Read key pressed from keypad
  char key = keypad.getKey();

  // Execute only if a key is pressed
  if (key != NO_KEY)
  {
    // Play a short beep
    beep();

    // Display '*' instead of the actual key
    lcd.print("*");

    // Save the pressed key
    entered += key;

    // Check password after entering 4 digits
    if (entered.length() >= 4)
    {
      // Clear LCD
      lcd.clear();

      // Compare entered password with stored password
      if (entered == password)
      {
        lcd.print("Access Granted");

        // Play success beep
        successBeep();
      }
      else
      {
        lcd.print("Access Denied");

        // Play error beep
        errorBeep();
      }

      // Wait for 2 seconds
      delay(2000);

      // Clear entered password
      entered = "";

      // Reset LCD
      lcd.clear();
      lcd.print("Enter Password");
      lcd.setCursor(0, 1);
    }
  }
}