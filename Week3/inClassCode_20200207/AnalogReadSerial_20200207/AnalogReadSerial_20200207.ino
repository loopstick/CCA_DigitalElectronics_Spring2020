/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

  int red = 9;
  int green = 10;
  int blue = 11;
  int mappedVal = 0;
  
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.print("sensor value: ");
  Serial.print(sensorValue);
  delay(100);        // delay in between reads for stability

  // useable range = 300-800
  // analogWrite = 0-255
  mappedVal = sensorValue;
  // map(value, fromLow, fromHigh, toLow, toHigh)
  mappedVal = map(mappedVal, 250, 850, 255, 0);
  Serial.print("\t  Mapped value: ");
  Serial.println(mappedVal);
  analogWrite(red, mappedVal);
    analogWrite(green, 255);
      analogWrite(blue, 255);
}
