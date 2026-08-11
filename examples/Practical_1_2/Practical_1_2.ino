int led1 = 4; // or pin 5, 6, 7 on provided kit
void setup() {
    pinMode(led1, OUTPUT); // Configure Pin   as an Output
}

void loop() {
  digitalWrite(led1, HIGH); // Turn the LED on
  delay(1000);           // Wait for 1 second
  digitalWrite(led1, LOW);  // Turn the LED off
  delay(1000);           // Wait for 1 second
}

