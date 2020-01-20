

/*
  code adapted from Blink without Delay: 
  http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
  
  Turns on and off a light emitting diode (LED) connected to a digital pin,
  without using the delay() function. This means that other code can run at the
  same time without being interrupted by the LED code.

*/

// constants won't change. Used here to set a pin number:
const int led1 =  5;// the number of the LED pin
const int led2 =  6;// the number of the LED pin
const int led3 =  7;// the number of the LED pin
const int led4 =  8;// the number of the LED pin

// Variables will change:
int led1State = LOW;             // ledState used to set the LED
int led2State = LOW;             // ledState used to set the LED
int led3State = LOW;             // ledState used to set the LED
int led4State = LOW;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis1 = 0;        // will store last time LED was updated
unsigned long previousMillis2 = 0;        // will store last time LED was updated
unsigned long previousMillis3 = 0; 
unsigned long previousMillis4 = 0; 

// constants won't change:
long interval1 = 1000;           // interval at which to blink (milliseconds)
long interval2 = 1000;           // interval at which to blink (milliseconds)
long interval3 = 1000;           // interval at which to blink (milliseconds)
long interval4 = 1000;           // interval at which to blink (milliseconds)

// values for breakpoints
const int ldrLow = 500;
const int ldrMed = 600;
const int ldrHigh = 700;



void setup() {
  Serial.begin(9600);
  // For later, when we've forgotten what code was downloaded to our board
  Serial.print("test code: BlinkWithoutDelay example - 4 LEDs and LDR");
  // set the digital pin as output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  blinkEm();
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

// +++++++AnalogRead++++++++++  
  // read the analog in value:
  int ldrValue = analogRead(1);
  // print the results to the Serial Monitor:
  Serial.print("LDR = ");
  Serial.println(ldrValue);
  // set interval of LED 4 to LDR value
  interval4 = ldrValue;
  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  // we need for of these becasue we are going to create 4 instances of blink without delay
  unsigned long currentMillis1 = millis();
  unsigned long currentMillis2 = millis();
  unsigned long currentMillis3 = millis();
  unsigned long currentMillis4 = millis();

if(ldrValue <= ldrHigh){
// #1 Instance
  if (currentMillis1 - previousMillis1 >= interval4) {
    // save the last time you blinked the LED
    previousMillis1 = currentMillis1;

    // if the LED is off turn it on and vice-versa:
    if (led1State == LOW) {
      led1State = HIGH;
    } else {
      led1State = LOW;
    }

    // set the LED with the ledState of the variable:
    //blinkEm();
    digitalWrite(led1, led1State);
  }
} else { 
  digitalWrite(led1, LOW);
}

  if(ldrValue <= ldrMed){
 // #2 Instance 
  if (currentMillis2 - previousMillis2 >= interval4) {
    // save the last time you blinked the LED
    previousMillis2 = currentMillis2;

    // if the LED is off turn it on and vice-versa:
    if (led2State == LOW) {
      led2State = HIGH;
    } else {
      led2State = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(led2, led2State);
  }
  } else {
      digitalWrite(led2, LOW);
  }
    
 if(ldrValue <= ldrLow){
 // #3 Instance 
  if (currentMillis3 - previousMillis3 >= interval4) {
    // save the last time you blinked the LED
    previousMillis3 = currentMillis3;

    // if the LED is off turn it on and vice-versa:
    if (led3State == LOW) {
      led3State = HIGH;
    } else {
      led3State = LOW;
    }
    // set the LED with the ledState of the variable:
    digitalWrite(led3, led3State);
  }

 } else {
  digitalWrite(led3, LOW);
 }
 
   // #4 Instance 
  if (currentMillis4 - previousMillis4 >= interval4) {
    // save the last time you blinked the LED
    previousMillis4 = currentMillis4;

    // if the LED is off turn it on and vice-versa:
    if (led4State == LOW) {
      led4State = HIGH;
    } else {
      led4State = LOW;
    }
    // set the LED with the ledState of the variable:
    digitalWrite(led4, led4State);
  }


 // End of Loop
}

void blinkEm(){
  digitalWrite(led1, HIGH);   
  delay(200);                       
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);   
  delay(200);                       
  digitalWrite(led2, LOW);    
  digitalWrite(led3, HIGH);   
  delay(200);                       
  digitalWrite(led3, LOW);    
  digitalWrite(led4, HIGH);   
  delay(200);                       
  digitalWrite(led4, LOW);    
}
