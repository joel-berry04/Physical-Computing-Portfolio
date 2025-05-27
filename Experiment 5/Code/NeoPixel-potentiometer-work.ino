#include <Adafruit_NeoPixel.h>

// NeoPixel strip definitions 
#define LED_PIN    6        // Arduino pin connected to NeoPixel data input
#define NUM_PIXELS 124      // Total number of NeoPixels in strip
#define BRIGHTNESS 100     

// Potentiometer connection
#define POT_PIN    A0       

// Create NeoPixel object
Adafruit_NeoPixel pixels(NUM_PIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();           // Initialize NeoPixel library
  pixels.setBrightness(BRIGHTNESS); // Set overall brightness
  pixels.show();            // Turn all pixels off initially
}

void loop() {
  // Read the analog value from the potentiometer (0-1023)
  int potValue = analogRead(POT_PIN);

 
  int selectedPixel = map(potValue, 0, 1023, 0, NUM_PIXELS - 1);
  selectedPixel = constrain(selectedPixel, 0, NUM_PIXELS - 1);


  pixels.clear();

  // Set the color of the selected pixel 
  pixels.setPixelColor(selectedPixel, pixels.Color(0, 255, 0); // (Red, Green, Blue)

  // Send the updated pixel colors to the hardware
  pixels.show();

}
