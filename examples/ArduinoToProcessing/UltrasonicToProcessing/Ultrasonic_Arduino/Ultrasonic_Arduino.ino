// This is the new code I altered from the previous “distance = speed” code 
// to return the function to a simple ON/OFF when something is in range of the 
// ultrasonic sensor rather than ramping up and down based on distance. It works.

const int trigPin = 2;  
const int echoPin = 4; 

const int motor = 6; 
const int led = 9; 

long duration = 0;
int distance = 0;
//int motorSpeed = 0;
//int brightness = 0;
//bool trigger = false;
//int ramp = 2;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motor, OUTPUT);
  pinMode(led, OUTPUT);
}
 
void loop () {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance = duration*0.034/2;
// Prints the distance on the Serial Monitor
//Serial.print("Distance: ");
Serial.println(distance);
//Serial.println(" cm");

//   analogWrite (motor, motorSpeed); 
//   brightness = (255-motorSpeed);
//   analogWrite (led, brightness); 
//
//   if (distance < 20) {  // Distance from sensor
//    trigger = true;
//   Serial.println("\t Triggered");
//   //delay(250);
//}
//  else {
//    trigger = false;
//    Serial.println("\t Out of range");
//  }
//
//  if(trigger == true){
//    //motorSpeed++; // motor accelerate
//    if(motorSpeed <= 198){
//        motorSpeed = 198;
//      }
//    motorSpeed = motorSpeed+ramp; // motor accelerate
//  } else {
//    motorSpeed--; // motor decelerate
//    //motorSpeed = motorSpeed-ramp; // motor decelerate
//  }
//  motorSpeed = constrain(motorSpeed, 0, 255);
////    Serial.print("\t motorSpeed: ");
////    Serial.println(motorSpeed);

  delay(50);

// =================================================================================
}  // END LOOP ======================================================================
// ===================================================================================
