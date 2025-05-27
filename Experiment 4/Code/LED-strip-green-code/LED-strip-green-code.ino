
#include <Adafruit_NeoPixel.h>




#define LED_PIN    6


#define NUM_PIXELS 124 


Adafruit_NeoPixel pixels(NUM_PIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);


#define BRIGHTNESS 100 


void setup() {

  pixels.begin();

  pixels.setBrightness(BRIGHTNESS);


  pixels.show();
}


void loop() {
  // --- Set all pixels to white ---

  pixels.fill(pixels.Color(0, 255, 0));

  pixels.show();

}
