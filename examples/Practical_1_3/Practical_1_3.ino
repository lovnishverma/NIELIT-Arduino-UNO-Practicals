int ledPins[ ] = {4,5,6,7}; // Array defining the pins

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT); // Set all array pins as output
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on current LED
    delay(500);
    digitalWrite(ledPins[i], LOW);  // Turn off current LED
    delay(500);
  }
}
