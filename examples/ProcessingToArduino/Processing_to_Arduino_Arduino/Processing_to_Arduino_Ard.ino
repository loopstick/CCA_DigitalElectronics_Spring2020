 char val; // Data received from the serial port
 int ledPin = 13; // Set the pin to digital I/O 13

 const int led = 9; 

void setup() {
  // put your setup code here, to run once:
   pinMode(ledPin, OUTPUT); // Set pin as OUTPUT
   pinMode(led, OUTPUT); // Set pin as OUTPUT
   Serial.begin(9600); // Start serial communication at 9600 bps
}

 void loop() {
   if (Serial.available()) 
   { // If data is available to read,
     val = Serial.read(); // read it and store it in val
   }
   
   if (val == '1') 
   { // If 1 was received
     digitalWrite(ledPin, HIGH); // turn the LED on
     digitalWrite(led, HIGH); // turn the LED on
   } else {
     digitalWrite(ledPin, LOW); // otherwise turn it off
     digitalWrite(led, LOW); // otherwise turn it off
   }
   delay(10); // Wait 10 milliseconds for next reading
}
