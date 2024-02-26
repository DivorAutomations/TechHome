#include <Adafruit_NeoPixel.h>

#define PIN 6 // Pin number your NeoPixels are connected to
#define NUMPIXELS 8 // Number of NeoPixels

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); 

void setup() { 
  pixels.begin(); // Initialize NeoPixel strip 
  pixels.show(); // Initialize all pixels to 'off' 
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(255, 0, 0)); // Red color     
    pixels.show(); // Update strip with new color
    delay(100); // Wait for a short period
  }
}