int rectX, rectY;      // Position of square button
int rectX2, rectY2;        // Position of rect2 button
int rectX3, rectY3;        // Position of rect3 button //NEW
int circleX, circleY;  // Position of circle button
int circleX2, circleY2; //position of circle 2 button
int circleX3, circleY3;  // Position of circle 3 button //NEW
int rectSize = 200;     // Diameter of rect button
int rectSize2 = 200;    //Diameter of rect2 button
int rectSize3 = 200;     //same
int circleSize = 200;   // Diameter of circle button
int circleSize2 = 200; // Diameter of circle 2 button 
int circleSize3 = 200; //same
color rectColor, circleColor, baseColor, rectColor2, circleColor2, rectColor3, circleColor3; //Color names
color rectHighlight, circleHighlight, rectHighlight2, circleHighlight2, rectHighlight3, circleHighlight3; //more color names
color currentColor;
boolean rectOver = false; //boolean, true or false, kinda confusing but works
boolean circleOver = false;
boolean rectOver2 = false;      
boolean circleOver2 = false;
boolean rectOver3 = false;
boolean circleOver3 = false;


void setup() {
  colorMode(HSB);
  size(1000, 1000);  
  rectColor = color(0,200,200); 
  rectHighlight = color(40,200,300);
  rectColor2 = color(40,200,200);      
  rectHighlight2 = color(220,200,300);
  rectColor3 = color(60,200,200);  
  rectHighlight3 = color(140,200,300); 
  circleColor = color(210,200,200);
  circleHighlight = color(100,200,300);
  circleColor2 = color(20,200,200);
  circleHighlight2 = color(300,200,300);
  circleColor3 = color(160,200,200);
  circleHighlight3 = color(6,200,300); //maybe
  baseColor = color(0); //start with a black background
  currentColor = baseColor; 
  circleX = 110;      //Shape Placements
  circleY = 110;
  circleX2 = 110;
  circleY2 = 890;
  circleX3 = height/2+175;
  circleY3 = width/2;
  rectX3 = height/2-300;
  rectY3 = width/2-100;
  rectX2 = 790;      
  rectY2 = 790;      
  rectX = 790;
  rectY = 10;
  ellipseMode(CENTER);
  noStroke();
}

void draw() {
  update(mouseX, mouseY);
  background(currentColor);
 noStroke();
 
 
  if (rectOver) {                         //If you hover over the shape, it should fill with its "highlight" color
    fill(rectHighlight);
  } else {
    fill(rectColor);
  }
  rect(rectX, rectY, rectSize, rectSize);
  
   if (rectOver2) {                            
    fill(rectHighlight2);                      
  } else {                                     
    fill(rectColor2);                         
  }                                                                         
  rect(rectX2, rectY2, rectSize2, rectSize2);
  
  if (rectOver3) {   
    fill(rectHighlight3);
  } else {
    fill(rectColor3);
  }
  rect(rectX3, rectY3, rectSize3, rectSize3);
 
  if (circleOver) {
    fill(circleHighlight);
  } else {
    fill(circleColor);
  }
  ellipse(circleX, circleY, circleSize, circleSize);
  
   if (circleOver2) {
    fill(circleHighlight2);
  } else {
    fill(circleColor2);
  }
  ellipse(circleX2, circleY2, circleSize2, circleSize2);
  
  if (circleOver3) {
    fill(circleHighlight3);
  } else {
    fill(circleColor3);
  }
  ellipse(circleX3, circleY3, circleSize3, circleSize3);

}

void update(int x, int y) { //calculating what the mouse is over and deciding which is true
  if ( overCircle(circleX, circleY, circleSize) ) {
    circleOver = true;
    circleOver2 = false;
    circleOver3 = false ;
    rectOver = false;
    rectOver2 = false;
    rectOver3 = false;
  } else if ( overCircle(circleX2, circleY2, circleSize2) ) {
    circleOver2 = true;
    circleOver = false;
    circleOver3 = false;
    rectOver = false;
    rectOver2 = false;
    rectOver3 = false;
  } else if ( overCircle(circleX3, circleY3, circleSize3) ) {
    circleOver = false;
    circleOver2 = false;
    circleOver3 = true ;
    rectOver = false;
    rectOver2 = false;
    rectOver3 = false;
  } else if ( overRect(rectX, rectY, rectSize, rectSize) ) {
    circleOver = false;
    circleOver2 = false;
    circleOver3 = false ;
    rectOver = true;
    rectOver2 = false;
    rectOver3 = false;
  } else if ( overRect(rectX2, rectY2, rectSize2, rectSize2) ) {
    circleOver = false;
    circleOver2 = false;
    circleOver3 = false ;
    rectOver = false;
    rectOver2 = true;
    rectOver3 = false;
  } else if ( overRect(rectX3, rectY3, rectSize3, rectSize3) ) {
    circleOver = false;
    circleOver2 = false;
    circleOver3 = false ;
    rectOver = false;
    rectOver2 = false;
    rectOver3 = true; 
  } else {
    circleOver = circleOver2 = circleOver3 = rectOver = rectOver2 = rectOver3 = false;
  }
}
void mousePressed() {  //if the mouse is pressed overtop of the shape, change the background color to the shapes color. Not the highlight.
  if (circleOver) {
    currentColor = circleColor;
  }
  if (circleOver2) {
    currentColor = circleColor2;
  }
  if (circleOver3) {
    currentColor = circleColor3;
  }
  if (rectOver) {
    currentColor = rectColor;
  }
  if (rectOver2) {
    currentColor = rectColor2;
  }
  if (rectOver3) {
    currentColor = rectColor3;
}
}

boolean overRect(int x, int y, int width, int height)  { //Basically knowing when the mouse is above the Rectangle
  if (mouseX >= x && mouseX <= x+width &&
      mouseY >= y && mouseY <= y+height) {
    return true;
  } else {
    return false;
  }
}

boolean overCircle(int x, int y, int diameter) {   //Same thing but for the circle
  float disX = x - mouseX;
 float disY = y - mouseY;
   if (sqrt(sq(disX) + sq(disY)) < diameter/2 ) {
    return true;
  } else {
   return false;
  }
}
