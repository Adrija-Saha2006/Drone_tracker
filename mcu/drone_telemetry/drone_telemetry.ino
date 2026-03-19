#include <Wire.h>

// Simulated or Real MPU6050 and GPS code
// For this MVP, we will simulate the data if sensors are not connected,
// ensuring the dashboard gets live JSON telemetry.

unsigned long lastTime = 0;
float pitch = 0.0;
float roll = 0.0;
float lat = 37.7749; // Starting coordinate (San Francisco)
float lng = -122.4194;
bool isArmed = false;

void setup() {
  Serial.begin(115200);
  while (!Serial) { delay(10); } // Wait for serial console to open
  
  // Initialize I2C and sensors here in a real scenario
}

void loop() {
  // Read incoming commands
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    command.trim();
    if (command.equalsIgnoreCase("ARM")) {
      isArmed = true;
      Serial.println("{\"msg\": \"SYSTEM ARMED\"}");
    } else if (command.equalsIgnoreCase("DISARM")) {
      isArmed = false;
      Serial.println("{\"msg\": \"SYSTEM DISARMED\"}");
    }
  }

  // Publish telemetry at 10Hz
  if (millis() - lastTime > 100) {
    lastTime = millis();
    
    // Simulate slight movement
    pitch = sin(millis() / 500.0) * 15.0; // Oscillate between -15 and 15
    roll = cos(millis() / 400.0) * 20.0;  // Oscillate between -20 and 20
    
    // Simulate GPS movement only if armed
    if (isArmed) {
      lat += 0.00001;
      lng += 0.00001;
    }

    // Build JSON payload
    // Architecture: {"pitch": value, "roll": value, "lat": value, "lng": value, "status": "ARMED/DISARMED"}
    String jsonPayload = "{";
    jsonPayload += "\"pitch\":" + String(pitch, 2) + ",";
    jsonPayload += "\"roll\":" + String(roll, 2) + ",";
    jsonPayload += "\"lat\":" + String(lat, 6) + ",";
    jsonPayload += "\"lng\":" + String(lng, 6) + ",";
    jsonPayload += "\"status\":\"" + String(isArmed ? "ARMED" : "DISARMED") + "\"";
    jsonPayload += "}";

    Serial.println(jsonPayload);
  }
}
