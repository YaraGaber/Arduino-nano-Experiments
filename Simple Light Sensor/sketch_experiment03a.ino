void setup() {
  // Start the serial communication
  Serial.begin(9600);
  while (!Serial); // Wait for the Serial Monitor to connect
}

void loop() {
  // Read the light sensor value
  int lightValue = analogRead(A2);  // Read the onboard light sensor (A2 pin)

  // Print the light value to the Serial Monitor
  Serial.print("Light level: ");
  Serial.println(lightValue);

  // Add a delay of 1 second for readability
  delay(1000);
}
