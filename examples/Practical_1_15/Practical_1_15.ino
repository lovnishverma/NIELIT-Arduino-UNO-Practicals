/*
  Practical 1.15
  Environmental Telemetry using DHT11 and I2C LCD

  DHT11 Connections
  -----------------
  VCC  -> 5V
  DATA -> Digital Pin 3
  GND  -> GND

  I2C LCD Connections
  -------------------
  VCC -> 5V
  GND -> GND
  SDA -> A4
  SCL -> A5
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// Create LCD object (I2C Address 0x27)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// DHT Sensor Configuration
#define DHTPIN 3
#define DHTTYPE DHT11

// Create DHT object
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  // Initialize LCD
  lcd.init();
  lcd.backlight();

  // Initialize DHT11 Sensor
  dht.begin();

  // Welcome Message
  lcd.setCursor(0, 0);
  lcd.print("DHT11 Sensor");
  lcd.setCursor(0, 1);
  lcd.print("Initializing");

  delay(2000);
  lcd.clear();
}

void loop()
{
  // Read Humidity
  float humidity = dht.readHumidity();

  // Read Temperature
  float temperature = dht.readTemperature();

  // Check if sensor reading failed
  if (isnan(humidity) || isnan(temperature))
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error!");
    delay(2000);
    return;
  }

  // Display Temperature
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print((char)223);   // Degree Symbol
  lcd.print("C");

  // Display Humidity
  lcd.setCursor(0, 1);
  lcd.print("Humidity:");
  lcd.print(humidity);
  lcd.print("%");

  // Update every 2 seconds
  delay(2000);
}