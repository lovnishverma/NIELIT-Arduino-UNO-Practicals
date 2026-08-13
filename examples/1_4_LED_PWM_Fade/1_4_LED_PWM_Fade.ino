/*
  LED Fade using PWM
  Arduino Uno
  
  Note: The six hardware PWM pins on the UNO are:
  - Pin 3 (Timer2)
  - Pin 5 (Timer0)
  - Pin 6 (Timer0)
  - Pin 9 (Timer1)
  - Pin 10 (Timer1)
  - Pin 11 (Timer2)
*/

const byte LED_PIN = 5;
const byte STEP = 5;
const unsigned int DELAY_MS = 20;

void fade(int startValue, int endValue, int stepValue)
{
    if (stepValue > 0)
    {
        for (int value = startValue; value <= endValue; value += stepValue)
        {
            analogWrite(LED_PIN, value);
            delay(DELAY_MS);
        }
    }
    else
    {
        for (int value = startValue; value >= endValue; value += stepValue)
        {
            analogWrite(LED_PIN, value);
            delay(DELAY_MS);
        }
    }
}

void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    fade(0, 255, STEP);     // Fade In
    fade(255, 0, -STEP);    // Fade Out
}