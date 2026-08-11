const byte LED = 6;
const byte BUZZER = 13;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {

  // Fade LED in while buzzer is ON
  digitalWrite(BUZZER, HIGH);

  for (int i = 0; i <= 255; i += 5) {
    analogWrite(LED, i);
    delay(30);
  }

  // Fade LED out while buzzer is OFF
  digitalWrite(BUZZER, LOW);

  for (int i = 255; i >= 0; i -= 5) {
    analogWrite(LED, i);
    delay(30);
  }
}