/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.
*/

void setup() {
  pinMode(13, OUTPUT); // Initialize digital pin 13 as an output
}

void loop() {
  digitalWrite(13, HIGH); // Turn the LED on
  delay(1000);            // Wait for one second
  digitalWrite(13, LOW);  // Turn the LED off
  delay(1000);            // Wait for one second
}
