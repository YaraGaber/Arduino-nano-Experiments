#include <Arduino_LSM9DS1.h>

// Define thresholds
#define SHAKE_THRESHOLD 2.5   // Threshold for shake gesture detection
#define STILL_THRESHOLD 0.2    // Threshold for detecting "still" position
#define TILT_THRESHOLD 0.5      // Threshold for tilt detection

// Gesture detection functions
bool isShake(float x, float y, float z);
bool isStill(float x, float y, float z);
bool isTilt(float x, float y, float z);

void setup() {
  Serial.begin(9600);  // Start serial communication
  while (!Serial);       // Wait until serial is ready

  if (!IMU.begin()) {
    Serial.println("IMU initialization failed!");
    while (1);  // Halt the program if IMU is not found
  }

  Serial.println("IMU initialized. Ready for gesture detection.");
}

void loop() {
  float x, y, z;

  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(x, y, z);  // Read acceleration data

    // Print raw data for debugging
    Serial.print("X: ");
    Serial.print(x);
    Serial.print(", Y: ");
    Serial.print(y);
    Serial.print(", Z: ");
    Serial.println(z);

    // Detect gestures
    if (isShake(x, y, z)) {
      Serial.println("Shake detected!");
    } else if (isStill(x, y, z)) {
      Serial.println("Still position detected!");
    } else if (isTilt(x, y, z)) {
      Serial.println("Tilt detected!");
    }
  }

  delay(100);  // Sample rate (100ms)
}

// Function to detect shake gesture
bool isShake(float x, float y, float z) {
  return (fabs(x) > SHAKE_THRESHOLD || fabs(y) > SHAKE_THRESHOLD || fabs(z) > SHAKE_THRESHOLD);
}

// Function to detect still position
bool isStill(float x, float y, float z) {
  return (fabs(x) < STILL_THRESHOLD && fabs(y) < STILL_THRESHOLD && fabs(z - 1) < STILL_THRESHOLD);
   Serial.println(z-9.8);
}

// Function to detect tilt gesture
bool isTilt(float x, float y, float z) {
  return ((fabs(x) > TILT_THRESHOLD || fabs(y) > TILT_THRESHOLD) && fabs(z) > STILL_THRESHOLD);
}


