// RGBW (Red Green Blue White Neo-Pixel starter code
// 16 LEDS with no loop inside of void loop()
// CW Coleman 170413

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 6
#define NUMPIXELS  64
#define BRIGHTNESS 50

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  Serial.begin(9600);
  pixels.setBrightness(BRIGHTNESS);
  pixels.begin();
  pixels.show(); // Initialize all pixels to 'off'
  #if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
}

// Initialize some variables for the void loop()
int led, red, green, blue, white;
int wait = 100;
void column (int cnum);
int i = 0, j = 0;

void loop() {

  led = 0; red = 255; green = 250; blue = 0; white = 5;

  delay(wait);
  pixels.show();

  led = 1; red = 0; green = 250; blue = 255; white = 5;

  delay(wait);
  pixels.show();

  led = 2; red = 0; green = 255; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 3; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 4; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 5; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 6; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 7; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 8; red = 255; green = 250; blue = 0; white = 10;

  delay(wait);
  pixels.show();

  led = 9; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 10; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 11; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 12; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 13; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 14; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 15; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 16; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 17; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 18; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 19; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 20; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 21; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 22; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 23; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 24; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 25; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 26; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 27; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 28; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 29; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 30; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 31; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 32; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 33; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 34; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 35; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 36; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 37; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 38; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 39; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 40; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 41; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 42; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 43; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 44; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 45; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 46; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 47; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 48; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 49; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 50; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 51; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 52; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 53; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 54; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 55; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 56; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 57; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 58; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 59; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 60; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 61; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 62; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();

  led = 63; red = 255; green = 16; blue = 8; white = 10;

  delay(wait);
  pixels.show();


}


