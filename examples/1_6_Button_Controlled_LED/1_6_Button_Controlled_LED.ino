int led1 = 7 ;  // or 4, 5, 6 on provided kit
int button1 = 11 ; // or 8, 9 on provided kit

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(button1, INPUT );
}
void loop()
{
  if (digitalRead(button1)== 1)// we are checking the button press
  {         digitalWrite(led1, HIGH);
  }else{    digitalWrite(led1, LOW); 
  }
}
