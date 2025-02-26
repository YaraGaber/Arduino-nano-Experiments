#include <Arduino_HTS221.h>  // For temperature and humidity
#include <Arduino_LPS22HB.h> // For pressure

void setup() {
  Serial.begin(9600);
  while (!Serial);

  // Initialize temperature and humidity sensor
  if (!HTS.begin()) {
    Serial.println("Failed to initialize temperature and humidity sensor!");
    while (1);
  }

  // Initialize pressure sensor
  if (!BARO.begin()) {
    Serial.println("Failed to initialize pressure sensor!");
    while (1);
  }

  Serial.println("Sensors initialized. Reading data...");
}

void loop() {
  // Read temperature and humidity
  float temperature = HTS.readTemperature();
  float humidity = HTS.readHumidity();

  // Read pressure
  float pressure = BARO.readPressure();

  // Print sensor data
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Pressure: ");
  Serial.print(pressure);
  Serial.println(" hPa");

  Serial.println("-----------------------------");
  delay(1000); // Update every second
}
