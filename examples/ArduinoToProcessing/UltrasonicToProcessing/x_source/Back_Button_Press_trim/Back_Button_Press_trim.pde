int rectX, rectY;      // Position of square button

int rectSize = 200;     // Diameter of rect button

color rectColor, rectHighlight; //Color names
color currentColor;
boolean rectOver = false; //boolean, true or false, kinda confusing but works

void setup() {
  colorMode(HSB);
  size(400, 400);  
  rectColor = color(0,200,200); 
  rectHighlight = color(40,200,300);
  rectX = 100;
  rectY = 100;
  ellipseMode(CENTER);
  noStroke();
}

void draw() {
  // update(mouseX, mouseY);
  background(currentColor);
 noStroke();
 
 
  if (rectOver) {                         //If you hover over the shape, it should fill with its "highlight" color
    fill(rectHighlight);
  } else {
    fill(rectColor);
  }
  rect(rectX, rectY, rectSize, rectSize);
}
