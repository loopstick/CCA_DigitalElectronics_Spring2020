/* AnalogInputWithoutDelay

 Reads an analog sensor on analog pin 0 (A0) and turn on and off a 
 light emitting diode(LED) connected to digital pin 13 without 
 using delay().
 
 The amount of time the LED will be on and off depends on the 
 value obtained by analogRead().

 Based on the built-in example BlinkWithoutDelay by David A. Mellis 
 and the built-in example AnalogInput example by David Cuartielles

 The difference between this and the original AnalogInput example is 
 that the blink rate of the LED should respond immediately to a changing 
 light condition, compared to the original which had to wait until after 
 the two delays finished.  

 The only changes to the AnalogInput example were:
 1. Remove the keyword "const" from the declaration of the "interval" variable
    so that it can be changed
 2. Call analogRead() and assign the result to a new variable called "sensorValue"
 3. Copy the value in "sensorValue" to the variable "interval"

 Pin Usage:

 A0 - analog sensor of some sort, e.g. a potentiometer or light sensor
 13 - LED

 Created 26 January 2017 by Michael Shiloh 

 This example code is in the public domain.

 */

// constants won't change. Used here to set a pin number :
const int ledPin =  LED_BUILTIN;// the number of the LED pin

// Variables will change :
int ledState = LOW;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// in BlinkWithoutDelay this is a constant, but we need to change it:
long interval = 1000;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

  // Could have skipped sensorValue and put the result of analogRead()
  // directly into interval, but do it this way to more closely resemble
  // the AnalogInput example
  int sensorValue = analogRead(A0);
  interval = sensorValue;

  // check to see if it's time to blink the LED; that is, if the
  // difference between the current time and last time you blinked
  // the LED is bigger than the interval at which you want to
  // blink the LED.
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}

