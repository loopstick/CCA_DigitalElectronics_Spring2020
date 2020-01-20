/*
Example Code - ST 12/16/2018

single RGB LED - common anode (negative)
using pins 9, 10, 11
simple test to fade 3 channels LED
*/

int brightness = 0;    // how bright the LED is
int redBrightness = 0;
int greenBrightness = 0;
int blueBrightness = 0;

int fadeAmount = 5;    // how many points to fade the LED by
int redFadeAmount = 1;    
int greenFadeAmount = 5;    
int blueFadeAmount = 3;    

//int LEDpin = 9;        //LED pin variable 
const int redLEDPin = 9;     // LED connected to digital pin 9
const int greenLEDPin = 10;    // LED connected to digital pin 10
const int blueLEDPin = 11;    // LED connected to digital pin 11

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 

  // set the digital pins as outputs
  pinMode(greenLEDPin,OUTPUT);
  pinMode(redLEDPin,OUTPUT);
  pinMode(blueLEDPin,OUTPUT);
}

void loop() {
  //TestEm();
  
// set the brightness of RED - pin 9:
  analogWrite(redLEDPin, redBrightness);  
  
  // change the brightness for next time through the loop:
  redBrightness = redBrightness + redFadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
    //range scaled just because: 0-255 changed to 0-100
  if (redBrightness == 0 || redBrightness == 200) {
    redFadeAmount = -redFadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30); 
 
 // set the brightness of Green - pin 10:
  analogWrite(greenLEDPin, greenBrightness);  
  
  // change the brightness for next time through the loop:
  greenBrightness = greenBrightness + greenFadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (greenBrightness == 0 || greenBrightness == 120) {
    greenFadeAmount = -greenFadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(10);   
  
  // set the brightness of BLUE - pin 11:
  analogWrite(blueLEDPin, blueBrightness);  
  
  // change the brightness for next time through the loop:
  blueBrightness = blueBrightness + blueFadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (blueBrightness == 0 || blueBrightness == 255) {
    blueFadeAmount = -blueFadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30); 


// Fade;
}

// ---------------------------------
void AllOff (){
  analogWrite(redLEDPin, 0);
  analogWrite(greenLEDPin, 0);
  analogWrite(blueLEDPin, 0);
}
// ---------------------------------

// ---------------------------------
void TestEm() {
  //Test the LED.
  analogWrite(redLEDPin, 100);
  delay(300);
  analogWrite(redLEDPin, 64);
  delay(300);
  analogWrite(greenLEDPin, 100);
  delay(300);
  analogWrite(greenLEDPin, 54);
  delay(300);
  analogWrite(blueLEDPin, 100);
  delay(300);
  analogWrite(blueLEDPin, 60);
  delay(300);
}
// ---------------------------------


/*
void Fade(){
  // set the brightness of pin 9:
  analogWrite(LEDPin, brightness);  
  
  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);  
} 
*/

