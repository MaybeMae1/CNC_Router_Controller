#include <Arduino.h>
#include <ArduinoBLE.h>


// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  if (!BLE.begin()) {
  Serial.println("starting Bluetooth® Low Energy module failed!");

  while (1);
  }
  while (BLE.connected()) {
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(200); 
  }
  digitalWrite(LED_BUILTIN, LOW); 
  delay(200);
}

// put function definitions here: