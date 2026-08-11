#include <SoftwareSerial.h>

// HC-05 Connections
// Arduino D10 <- HC-05 TX
// Arduino D11 -> HC-05 RX
SoftwareSerial BT(10, 11);

// LED Pins
const int LED1 = 7;
const int LED2 = 6;
const int LED3 = 5;
const int LED4 = 4;

void processCommand(char cmd)
{
  switch (cmd)
  {
    // LED1
    case '1':
      digitalWrite(LED1, HIGH);
      Serial.println("LED1 ON");
      BT.println("LED1 ON");
      break;

    case '0':
      digitalWrite(LED1, LOW);
      Serial.println("LED1 OFF");
      BT.println("LED1 OFF");
      break;

    // LED2
    case '2':
      digitalWrite(LED2, HIGH);
      Serial.println("LED2 ON");
      BT.println("LED2 ON");
      break;

    case '3':
      digitalWrite(LED2, LOW);
      Serial.println("LED2 OFF");
      BT.println("LED2 OFF");
      break;

    // LED3
    case '4':
      digitalWrite(LED3, HIGH);
      Serial.println("LED3 ON");
      BT.println("LED3 ON");
      break;

    case '5':
      digitalWrite(LED3, LOW);
      Serial.println("LED3 OFF");
      BT.println("LED3 OFF");
      break;

    // LED4
    case '6':
      digitalWrite(LED4, HIGH);
      Serial.println("LED4 ON");
      BT.println("LED4 ON");
      break;

    case '7':
      digitalWrite(LED4, LOW);
      Serial.println("LED4 OFF");
      BT.println("LED4 OFF");
      break;

    default:
      Serial.println("Invalid Command");
      BT.println("Invalid Command");
  }
}

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);

  Serial.begin(9600);
  BT.begin(9600);

  Serial.println("======================================");
  Serial.println("4 LED Bluetooth Controller");
  Serial.println("======================================");
  Serial.println("Commands:");
  Serial.println("1 -> LED1 ON   (D7)");
  Serial.println("0 -> LED1 OFF");
  Serial.println("2 -> LED2 ON   (D6)");
  Serial.println("3 -> LED2 OFF");
  Serial.println("4 -> LED3 ON   (D5)");
  Serial.println("5 -> LED3 OFF");
  Serial.println("6 -> LED4 ON   (D4)");
  Serial.println("7 -> LED4 OFF");
  Serial.println();

  BT.println("Bluetooth 4 LED Controller Ready");
}

void loop()
{
  // Bluetooth Commands
  if (BT.available())
  {
    char cmd = BT.read();

    if (cmd != '\n' && cmd != '\r')
    {
      Serial.print("Bluetooth: ");
      Serial.println(cmd);
      processCommand(cmd);
    }
  }

  // Serial Monitor Commands
  if (Serial.available())
  {
    char cmd = Serial.read();

    if (cmd != '\n' && cmd != '\r')
    {
      Serial.print("Serial: ");
      Serial.println(cmd);
      processCommand(cmd);
    }
  }
}