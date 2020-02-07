
/* 
   Example code for Digital Electronics 2/7/20

*/
  // define constant value for led pin
  const int led = 13;

  //define variable to store LED state = ON/OFF
  int ledState = LOW;
  int counter = 0;

  // define variable for current and previous time
  // use long to give the largest possible value
  unsigned long previousMillis = 0;
  unsigned long currentMillis = 0;

  // define interval variable
  long interval = 3;
  
void setup() {
  // put your setup code here, to run once:
  // start serial communication
  Serial.begin(9600);
  // set LED pin to output mode
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  currentMillis = millis();
  
  if(currentMillis - previousMillis >= interval){
    //save the last time we blinked the led
    previousMillis = currentMillis;

    // if the LED is off, turn it on, and vice-versa
    if(ledState == LOW) {
      ledState = HIGH;
      counter++;
      Serial.print("The counter is now: ");
      Serial.println(counter);
    } else {
      ledState = LOW;}
    }
      
  //set the LED with the ledState variable
  digitalWrite(led, ledState);
}
  

  
  
