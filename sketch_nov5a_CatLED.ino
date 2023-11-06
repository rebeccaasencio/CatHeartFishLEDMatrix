//Code sampled from Basic LED Matrix code provided on Slack
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_IS31FL3731.h>

// create and instance of the library
Adafruit_IS31FL3731 matrix = Adafruit_IS31FL3731();

void setup() {

  Serial.begin(9600);
  if (!matrix.begin()) {
    Serial.println("IS31 not found");
    while (1)
      ;
  }
  Serial.println("let's gooooooo");
}


void loop() {
  //Clear all pixels
  matrix.clear();

  //cat drawing
  matrix.drawPixel(2,3,255);
  matrix.drawPixel(2,4,255);
  matrix.drawPixel(2,5,255);

  matrix.drawPixel(3,2,255);
  matrix.drawPixel(3,6,255);

  matrix.drawPixel(4,7,255);
  matrix.drawPixel(4,8,255);

  matrix.drawPixel(5,2,255);
  matrix.drawPixel(5,4,255);
  matrix.drawPixel(5,7,255);  
  matrix.drawPixel(5,8,255);

  matrix.drawPixel(6,3,255);
  matrix.drawPixel(6,7,255);
  matrix.drawPixel(6,8,255);

  matrix.drawPixel(7,0,255);
  matrix.drawPixel(7,1,255);
  matrix.drawPixel(7,2,255);
  matrix.drawPixel(7,3,255);
  matrix.drawPixel(7,4,255);
  matrix.drawPixel(7,5,255);
  matrix.drawPixel(7,6,255);
  matrix.drawPixel(7,7,255);
  matrix.drawPixel(7,8,255);

  matrix.drawPixel(8,0,255);
  matrix.drawPixel(8,1,172);
  matrix.drawPixel(8,2,255);
  matrix.drawPixel(8,3,255);
  matrix.drawPixel(8,4,255);
  matrix.drawPixel(8,5,172);
  matrix.drawPixel(8,6,255);
  matrix.drawPixel(8,7,255);
  matrix.drawPixel(8,8,255); 

  matrix.drawPixel(9,1,255);
  matrix.drawPixel(9,2,255);
  matrix.drawPixel(9,4,255);
  matrix.drawPixel(9,5,172);
  matrix.drawPixel(9,6,172);
  matrix.drawPixel(9,7,255);
  matrix.drawPixel(9,8,255);

  matrix.drawPixel(10,1,255);
  matrix.drawPixel(10,2,255);
  matrix.drawPixel(10,3,255);
  matrix.drawPixel(10,4,255);
  matrix.drawPixel(10,5,172);
  matrix.drawPixel(10,6,172);
  matrix.drawPixel(10,7,255);
  matrix.drawPixel(10,8,255);

  matrix.drawPixel(11,1,255);
  matrix.drawPixel(11,2,255);
  matrix.drawPixel(11,4,255);
  //added lower brightness to add dimension to cat
  matrix.drawPixel(11,5,172);
  matrix.drawPixel(11,6,172);
  matrix.drawPixel(11,7,255);
  matrix.drawPixel(11,8,255);

  matrix.drawPixel(12,0,255);
  matrix.drawPixel(12,1,172);
  matrix.drawPixel(12,2,255);
  matrix.drawPixel(12,3,255);
  matrix.drawPixel(12,4,255);
  matrix.drawPixel(12,8,172);

  matrix.drawPixel(13,3,255);

  matrix.drawPixel(14,2,255);
  matrix.drawPixel(14,4,255);
  // delay
  delay(500);

  //clear pixels again
  matrix.clear();

  //Heart Drawing
  matrix.drawPixel(5, 2, 255);
  matrix.drawPixel(5, 3, 255);
  matrix.drawPixel(5, 4, 255);

  matrix.drawPixel(6, 1, 255);
  matrix.drawPixel(6, 2, 255);
  matrix.drawPixel(6, 3, 255);
  matrix.drawPixel(6, 4, 255);
  matrix.drawPixel(6, 5, 255);

  matrix.drawPixel(7, 2, 255);
  matrix.drawPixel(7, 3, 255);
  matrix.drawPixel(7, 4, 255);
  matrix.drawPixel(7, 5, 255);
  matrix.drawPixel(7, 6, 255);

  matrix.drawPixel(8, 3, 255);
  matrix.drawPixel(8, 4, 255);
  matrix.drawPixel(8, 5, 255);
  matrix.drawPixel(8, 6, 255);
  matrix.drawPixel(8, 7, 255);

  matrix.drawPixel(9, 2, 255);
  matrix.drawPixel(9, 3, 255);
  matrix.drawPixel(9, 4, 255);
  matrix.drawPixel(9, 5, 255);
  matrix.drawPixel(9, 6, 255);

  matrix.drawPixel(10, 1, 255);
  matrix.drawPixel(10, 2, 255);
  matrix.drawPixel(10, 3, 255);
  matrix.drawPixel(10, 4, 255);
  matrix.drawPixel(10, 5, 255);

  matrix.drawPixel(11, 2, 255);
  matrix.drawPixel(11, 3, 255);
  matrix.drawPixel(11, 4, 255);
  //delay
  delay(500);

  //clear pixels
  matrix.clear();

  //Fish drawing
  matrix.drawPixel(3, 2, 255);
  matrix.drawPixel(3, 3, 255);
  matrix.drawPixel(3, 5, 255);
  matrix.drawPixel(3, 6, 255);

  matrix.drawPixel(4, 3, 255);
  matrix.drawPixel(4, 5, 255);

  matrix.drawPixel(5, 4, 255);


  matrix.drawPixel(6, 3, 255);
  matrix.drawPixel(6, 4, 255);
  matrix.drawPixel(6, 5, 255);

  matrix.drawPixel(7, 2, 255);
  matrix.drawPixel(7, 3, 255);
  matrix.drawPixel(7, 4, 255);
  matrix.drawPixel(7, 5, 255);
  matrix.drawPixel(7, 6, 255);

  matrix.drawPixel(8, 2, 255);
  matrix.drawPixel(8, 3, 255);
  matrix.drawPixel(8, 4, 255);
  matrix.drawPixel(8, 5, 255);
  matrix.drawPixel(8, 6, 255);

  matrix.drawPixel(9, 2, 255);
  matrix.drawPixel(9, 3, 255);
  matrix.drawPixel(9, 4, 255);
  matrix.drawPixel(9, 5, 255);
  matrix.drawPixel(9, 6, 255);
  
  matrix.drawPixel(10, 2, 255);
  matrix.drawPixel(10, 3, 255);
  matrix.drawPixel(10, 4, 255);
  matrix.drawPixel(10, 5, 255);
  matrix.drawPixel(10, 6, 255);

  matrix.drawPixel(11, 2, 255);
  matrix.drawPixel(11, 3, 255);
  matrix.drawPixel(11, 5, 255);
  matrix.drawPixel(11, 6, 255);

  matrix.drawPixel(12, 3, 255);
  matrix.drawPixel(12, 4, 255);
  matrix.drawPixel(12, 5, 255);
  //delay
  delay(500);

}