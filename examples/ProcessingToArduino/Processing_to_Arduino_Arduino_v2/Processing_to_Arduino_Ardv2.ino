 char val; // Data received from the serial port
 int ledPin = 13; // Set the pin to digital I/O 13

 const int red = 9; 
 const int blue = 11; 


void setup() {
  // put your setup code here, to run once:
   pinMode(ledPin, OUTPUT); // Set pin as OUTPUT
   pinMode(red, OUTPUT); // Set pin as OUTPUT
   pinMode(blue, OUTPUT); // Set pin as OUTPUT
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
     digitalWrite(red, HIGH); // turn the LED on
     digitalWrite(blue, LOW); // turn the LED on
   } else {
     digitalWrite(ledPin, LOW); // otherwise turn it off
     digitalWrite(red, LOW); // otherwise turn it off
     digitalWrite(blue, HIGH); // otherwise turn it off
   }
   delay(10); // Wait 10 milliseconds for next reading
}
