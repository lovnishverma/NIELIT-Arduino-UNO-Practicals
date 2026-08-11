/*
  Practical 1.14
  Environmental Telemetry using DHT11

  DHT11 Connections
  -----------------
  VCC  -> 5V
  DATA -> Digital Pin 3
  GND  -> GND
*/

#include <DHT.h>

// DHT Sensor Configuration
#define DHTPIN 3          // DATA pin connected to Arduino Pin 3
#define DHTTYPE DHT11     // DHT11 Sensor

// Create DHT object
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  // Start Serial Communication
  Serial.begin(9600);

  // Initialize DHT11 Sensor
  dht.begin();

  Serial.println("================================");
  Serial.println(" DHT11 Temperature & Humidity");
  Serial.println("================================");
}

void loop()
{
  // Read Humidity
  float humidity = dht.readHumidity();

  // Read Temperature (in Celsius)
  float temperature = dht.readTemperature();

  // Check if sensor reading failed
  if (isnan(humidity) || isnan(temperature))
  {
    Serial.println("Sensor Error! Unable to read DHT11.");
    Serial.println();
    delay(2000);
    return;
  }

  // Display Temperature
  Serial.print("Temperature : ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Display Humidity
  Serial.print("Humidity    : ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.println("--------------------------------");

  // Update every 2 seconds
  delay(2000);
}