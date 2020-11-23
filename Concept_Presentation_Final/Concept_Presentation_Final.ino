#include <Adafruit_CircuitPlayground.h>

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}
void loop() {
  if (CircuitPlayground.leftButton()) {
  Serial.println("Left button pressed!");
  CircuitPlayground.setPixelColor(0, 174, 197, 238);  
  CircuitPlayground.setPixelColor(1, 174, 197, 238); 
  CircuitPlayground.setPixelColor(2, 174, 197, 238); 
  CircuitPlayground.setPixelColor(3, 174, 197, 238);  
  CircuitPlayground.setPixelColor(4, 174, 197, 238); 
  CircuitPlayground.setPixelColor(5, 174, 197, 238);
  CircuitPlayground.setPixelColor(6, 174, 197, 238);    
  CircuitPlayground.setPixelColor(7, 174, 197, 238);  
  CircuitPlayground.setPixelColor(8, 174, 197, 238);
  CircuitPlayground.setPixelColor(9, 174, 197, 238); 
  }
  if (CircuitPlayground.rightButton()) {
  Serial.println("Right button pressed!");
  CircuitPlayground.setPixelColor(0, 0, 0, 0);  
  CircuitPlayground.setPixelColor(1, 0, 0, 0); 
  CircuitPlayground.setPixelColor(2, 0, 0, 0); 
  CircuitPlayground.setPixelColor(3, 0, 0, 0);  
  CircuitPlayground.setPixelColor(4, 0, 0, 0); 
  CircuitPlayground.setPixelColor(5, 0, 0, 0);
  CircuitPlayground.setPixelColor(6, 0, 0, 0);    
  CircuitPlayground.setPixelColor(7, 0, 0, 0);  
  CircuitPlayground.setPixelColor(8, 0, 0, 0);
  CircuitPlayground.setPixelColor(9, 0, 0, 0); 
  }
  delay(10);
}
