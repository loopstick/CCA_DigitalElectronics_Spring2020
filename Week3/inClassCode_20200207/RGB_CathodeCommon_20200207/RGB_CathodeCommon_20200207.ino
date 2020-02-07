/* RGB LED Test Code
  for Interface
  10/11/2018
*/

  int red = 9;
  int green = 10;
  int blue = 11;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{   
  //Blink all three in sequence.
  Serial.println("red");
  analogWrite(red, 127);
  delay(300); 
  analogWrite(red, 255);
  //analogWrite(red, 0);
  delay(300); 
  
  Serial.println("green");
  analogWrite(green, 127);
  delay(300); 
  analogWrite(green, 255);
  delay(300); 
  
  Serial.println("blue");
  analogWrite(blue, 127);
  delay(300); 
  analogWrite(blue, 255);
  delay(300);
   
}
