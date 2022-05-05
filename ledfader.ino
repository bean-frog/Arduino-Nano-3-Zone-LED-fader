/*
 * script for 3 LED zones
 * made by me
 * 
 * <for reference>
 * Common VCC5V
 * ZONE 1: D2, D3, D4
 * ZONE 2: D5, D6, D7
 * ZONE 3, D8, D9, D10
 */


const int red1 = 2;  //defining all used pins as constants
const int green1 = 3;
const int blue1 = 4;

const int red2 = 5;
const int green2 = 6;
const int blue2 = 7;

const int red3 = 8;
const int green3 = 9;
const int blue3 = 10;


#define fadeSpeed 100 //Fading delay in ms. changing this changes all delay() functions





void setup() {  //setting the previously defined variables as outputs
  pinMode(red1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(blue1, OUTPUT);

  pinMode(red2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(blue2, OUTPUT);

  pinMode(red3, OUTPUT);
  pinMode(green3, OUTPUT);
  pinMode(blue3, OUTPUT);
  
}
/**********************************/
void loop() {    //fading animation, using variable fadeSpeed as delay() parameter
int r, g, b;
 for (b = 0; b < 256; b++) { 
    analogWrite(blue1, b);
    analogWrite(blue2, b);
    delay(fadeSpeed);
  }
 for (g = 0; g < 256; g++) {
    analogWrite(green1, g);
    analogWrite(green3, g);
    delay(fadeSpeed);
  }
 for (
} 
 
