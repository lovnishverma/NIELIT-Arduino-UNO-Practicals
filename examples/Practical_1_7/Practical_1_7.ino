void setup() {
  pinMode(7, INPUT); pinMode(8, INPUT);
  for(int i=4; i<=7; i++) pinMode(i, OUTPUT);
}

void loop() {
  int btn1 = digitalRead(11);
  int btn2 = digitalRead(9);
  
  if (btn1 == HIGH && btn2 == LOW) {
    // Action pattern 1: Turn on all LEDs
    for(int i=4; i<=7; i++) 
      digitalWrite(i, HIGH);
  } else if (btn1 == LOW && btn2 == HIGH) {
    // Action pattern 2: Clear all LEDs
    for(int i=4; i<=7; i++) 
      digitalWrite(i, LOW);
  }
}
    
          
          