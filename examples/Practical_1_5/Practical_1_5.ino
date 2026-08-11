int buttonPin = 11;

void setup() {
  pinMode(buttonPin, INPUT); // Configure pin as an Input
  Serial.begin(9600);        // Initialize Serial Monitor at 9600 baud rate
}

void loop() {
  int buttonState = digitalRead(buttonPin); // Read the binary input value
  Serial.println(buttonState);              // Log values to computer screen
  delay(100);
}

