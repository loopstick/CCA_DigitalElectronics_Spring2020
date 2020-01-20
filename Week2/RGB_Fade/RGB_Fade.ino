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

int Rled = 9;           // the PWM pin the LED is attached to
int Gled = 10; 
int Bled = 11; 
int Rbrightness = 0;    // how bright the LED is
int Gbrightness = 0; 
int Bbrightness = 0; 
int RfadeAmount = 5;    // how many points to fade the LED by
int GfadeAmount = 4;
int BfadeAmount = 3;

// the setup routine runs once when you press reset:
void setup() {
  // declare output pins
  pinMode(Rled, OUTPUT);
  pinMode(Gled, OUTPUT);
  pinMode(Bled, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the Red brightness:
  analogWrite(Rled, Rbrightness);

//+++++RED++++++++++++++++++++++++++
  // change the brightness for next time through the loop:
  Rbrightness = Rbrightness + RfadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (Rbrightness <= 0 || Rbrightness >= 255) {
    RfadeAmount = -RfadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
  
//++++++Green++++++++++++++++++++++
    // set the green brightness:
  analogWrite(Gled, Gbrightness);

  // change the brightness for next time through the loop:
  Gbrightness = Gbrightness + GfadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (Gbrightness <= 0 || Gbrightness >= 255) {
    GfadeAmount = -GfadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
  
  //++++++Blue++++++++++++++++++++++
    // set the green brightness:
  analogWrite(Bled, Bbrightness);

  // change the brightness for next time through the loop:
  Bbrightness = Bbrightness + BfadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (Bbrightness <= 0 || Bbrightness >= 255) {
    BfadeAmount = -BfadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
