#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define NEOPIN 7

Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, NEOPIN, NEO_GRB + NEO_KHZ800);

void setup() {

  pinMode(4, INPUT);
  pinMode(5, INPUT);
  
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

  colorWipe(strip.Color(255, 0, 0), 50); // Red
  colorWipe(strip.Color(0, 255, 0), 50); // Green
  colorWipe(strip.Color(0, 0, 255), 50); // Blue

  rainbowCycle(10);

  colorWipe(strip.Color(0, 0, 0), 100); // TURN OFF
  
}

void loop() {
  
  if (digitalRead(4) == 0) pump();
  else if (digitalRead(5) == 0) measure();
  else stdby();
  delay(250);
}

// Fill the dots one after the other with a color
void stdby() {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    if (i<4 || i>5) strip.setPixelColor(i, strip.Color(0, 60, 0));
    else strip.setPixelColor(i, strip.Color(0, 40, 100));
  }
  strip.show();
}

// Fill the dots one after the other with a color
void pump() {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    if (i<4 || i>5) strip.setPixelColor(i, strip.Color(255, 0, 0));
    else strip.setPixelColor(i, strip.Color(0, 80, 255));
  }
  strip.show();
}

// Fill the dots one after the other with a color
void measure() {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    if (i<4 || i>5) strip.setPixelColor(i, strip.Color(128, 128, 0));
    else strip.setPixelColor(i, strip.Color(0, 80, 255));
  }
  strip.show();
}

/***************************************
 * LIB OF FUNTIONS FOR THE NEOPIXELS
 ***************************************/
// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

//Theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
