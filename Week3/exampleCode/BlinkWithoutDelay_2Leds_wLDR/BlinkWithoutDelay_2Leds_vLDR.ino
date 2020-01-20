

/*
  Blink without Delay

  Turns on and off a light emitting diode (LED) connected to a digital pin,
  without using the delay() function. This means that other code can run at the
  same time without being interrupted by the LED code.

  The circuit:
  - Use the onboard LED.
  - Note: Most Arduinos have an on-board LED you can control. On the UNO, MEGA
    and ZERO it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN
    is set to the correct LED pin independent of which board is used.
    If you want to know what pin the on-board LED is connected to on your
    Arduino model, check the Technical Specs of your board at:
    https://www.arduino.cc/en/Main/Products

  created 2005
  by David A. Mellis
  modified 8 Feb 2010
  by Paul Stoffregen
  modified 11 Nov 2013
  by Scott Fitzgerald
  modified 9 Jan 2017
  by Arturo Guadalupi

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
*/

// constants won't change. Used here to set a pin number:
const int led1Pin =  7;// the number of the LED pin
const int led2Pin =  8;// the number of the LED pin

// Variables will change:
int led1State = LOW;             // ledState used to set the LED
int led2State = LOW;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis1 = 0;        // will store last time LED was updated
unsigned long previousMillis2 = 0;        // will store last time LED was updated

// constants won't change:
long interval1 = 200;           // interval at which to blink (milliseconds)
long interval2 = 210;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.
  // read the analog in value:
  int ldrValue = analogRead(1);
  // print the results to the Serial Monitor:
  Serial.print("LDR = ");
  Serial.println(ldrValue);
 int ldrMap = map(ldrValue, 450, 1000, 50, 500);
  Serial.print("LDR mapped = ");
  Serial.println(ldrMap);
  // set interval of LED 4 to LDR value
  interval1 = ldrMap;
  interval2 = ldrMap;
  
  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMillis = millis();

// #1 instance ++++++++++++++++++++++++++++++++++++
  if (currentMillis - previousMillis1 >= interval1) {
    // save the last time you blinked the LED
    previousMillis1 = currentMillis;
    //Serial.print("previous Millis 1 - ");
    //Serial.println(previousMillis1);

    // if the LED is off turn it on and vice-versa:
    if (led1State == LOW) {
      led1State = HIGH;
    } else {
      led1State = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(led1Pin, led1State);
  }
//++++++++++++++++++++++++++++++++++++++++++++++++++++

// #2 instance ++++++++++++++++++++++++++++++++++++
  if (currentMillis - previousMillis2 >= interval2) {
    // save the last time you blinked the LED
    previousMillis2 = currentMillis;
    //Serial.print("previous Millis 2 - ");
    //Serial.println(previousMillis2);

    // if the LED is off turn it on and vice-versa:
    if (led2State == LOW) {
      led2State = HIGH;
    } else {
      led2State = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(led2Pin, led2State);
  }
//++++++++++++++++++++++++++++++++++++++++++++++++++++
  
  //Serial.println(currentMillis);
}
