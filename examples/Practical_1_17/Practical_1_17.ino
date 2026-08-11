int relayInwardPin = 3;

void setup() {
  pinMode(relayInwardPin, OUTPUT);
}

void loop() {
  digitalWrite(relayInwardPin, HIGH); // Shift relay contacts closed (Turn load ON)
  delay(3000);
  digitalWrite(relayInwardPin, LOW);  // Shift relay contacts open (Turn load OFF)
  delay(3000);
}

