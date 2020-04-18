import processing.serial.*;

Serial port;  // Create object from Serial class
int val, colour;     
String inString; // Data received from the serial port

int rectX, rectY, val2;      // Position of square button
int rectSize = 200;     // Diameter of rect button
color rectColor, rectHighlight; //Color names
color currentColor;

void setup()
{
    // List all the available serial ports
    // if using Processing 2.1 or later, use Serial.printArray()
    printArray(Serial.list());
    delay(2000);  // give us time to see the ports !!
    //if using Processing 2.1 or earlier, use println(Serial.list()
    //println(Serial.list());
    
  // I know that the first port in the serial list on my mac
  // is Serial.list()[0].
  // Open whatever port is the one you're using.
  // you can reference a port by the array value or "string name"
  //String portName = "/dev/tty.usbmodem144141201";  
  String portName = Serial.list()[2]; //change the 0 to a 1 or 2 etc. to match your port
  port = new Serial(this, portName, 9600); 
  
    
  port.bufferUntil('\n');//I use this to group incoming charectors
  
  colorMode(HSB);
  size(400, 400);  
  rectColor = color(0,200,200); 
  rectHighlight = color(40,200,300);
  rectX = 100;
  rectY = 100;
 
  //rectMode(CENTER);
  //noStroke();
  //rectX = 200;
  //rectY = 200;
}


void draw()
{
   background(currentColor);
   noStroke();
   fill(rectColor);
   //fill(colour, 200, 200);
   //rect(rectX, rectY, rectSize, rectSize);
   //rect(rectX, rectY, val, val);
   rect(rectX, rectY, 200-val, 200-val);
   
 
  if (inString != null)//proceed if there is data in String
  {
    inString = trim(inString); //trim off extra charectors
    val = Integer.parseInt(inString);//convert to  int
  }
  println(val);
  
  colour = val;
}


void serialEvent(Serial port) 
{
  inString = port.readString();
}
