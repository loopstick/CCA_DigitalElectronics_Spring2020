/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

  int red = 9;
  int green = 10;
  int blue = 11;

//int led = 9;           // the PWM pin the LED is attached to
int redBrightness = 0;    // how bright the LED is
int greenBrightness = 0;    // how bright the LED is
int blueBrightness = 0;    // how bright the LED is
int redFadeAmount = 7;    // how many points to fade the LED by
int greenFadeAmount = 11; 
int blueFadeAmount = 17; 

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // RED +++++++++++++++++++++++++++++++
  // set the brightness of pin 9:
  analogWrite(red, 255-redBrightness);

  // change the brightness for next time through the loop:
  redBrightness = redBrightness + redFadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (redBrightness <= 0 || redBrightness >= 255) {
    redFadeAmount = -redFadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
  //+++++++++++++++++++++++++++++++

  // GREEN +++++++++++++++++++++++++++++++
  // set the brightness of pin 9:
  analogWrite(green, 255-greenBrightness);

  // change the brightness for next time through the loop:
  greenBrightness = greenBrightness + greenFadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (greenBrightness <= 0 || greenBrightness >= 255) {
    greenFadeAmount = -greenFadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
  //+++++++++++++++++++++++++++++++

  // BLUE +++++++++++++++++++++++++++++++
  // set the brightness of pin 9:
  analogWrite(blue, 255-blueBrightness);

  // change the brightness for next time through the loop:
  blueBrightness = blueBrightness + blueFadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (blueBrightness <= 0 || blueBrightness >= 255) {
    blueFadeAmount = -blueFadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
  //+++++++++++++++++++++++++++++++

}
