int buzzerPin = 13;
void setup() {
  pinMode(buzzerPin, OUTPUT);
}
void loop() {
  digitalWrite(buzzerPin, HIGH); // Send a 1KHz sound signal
  delay(1000);
  digitalWrite (buzzerPin, LOW);     // Stop the sound signal
  delay(1000);
}