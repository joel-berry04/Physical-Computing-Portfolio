// Pin definitions
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
const int ldrPin = A0;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);  // For debugging LDR values
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  // Map LDR value (0-1023) to brightness (0-255)
  // Invert the reading so darker room = brighter LED
  int brightness = map(ldrValue, 0, 1023, 255, 0);

  // Example: Adjust Red color brightness with ambient light
  // You can also mix colors depending on brightness or create effects

  analogWrite(redPin, brightness);
  analogWrite(greenPin, brightness / 2); // Less green for a warmer glow
  analogWrite(bluePin, brightness / 3);  // Even less blue

  delay(100);
}
