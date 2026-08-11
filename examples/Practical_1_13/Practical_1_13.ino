/*
  Practical: Ultrasonic Distance Measurement
  Board: Arduino Uno

  HC-SR04 Connections:
  --------------------
  VCC  -> 5V
  GND  -> GND
  TRIG -> Digital Pin 10
  ECHO -> Digital Pin 12
*/

// Define sensor pins
const int trigPin = 10;
const int echoPin = 12;

void setup()
{
  // Configure TRIG as Output
  pinMode(trigPin, OUTPUT);

  // Configure ECHO as Input
  pinMode(echoPin, INPUT);

  // Start Serial Communication
  Serial.begin(9600);

  Serial.println("HC-SR04 Ultrasonic Sensor");
  Serial.println("------------------------");
}

void loop()
{
  // Clear the TRIG pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10-microsecond pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the time taken for the echo to return
  long duration = pulseIn(echoPin, HIGH);

  // Calculate distance in centimeters
  long distance = duration * 0.034 / 2;

  // Display the distance on Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Wait before taking the next reading
  delay(200);
}