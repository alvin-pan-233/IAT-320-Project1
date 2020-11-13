#include <Adafruit_CircuitPlayground.h>

int X;
int Y;

int red = 0;
int green = 255;
int blue = 0;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  X = CircuitPlayground.motionX();
  Y = CircuitPlayground.motionY();

  if ( (X>=1) && (Y<1) ) {      //+x, -y = GREEN
    red = 255 ;
    green = 0;
    blue = 0;
  }
  else if ( (X <1 ) && (Y<1) ){ //-x, -y = BLUE
    red = 0;
    green = 0;
    blue = 255;
  }
  
  for (int i=0; i<10; ++i) {    
    CircuitPlayground.setPixelColor(i,red, green, blue);
    }    
}
