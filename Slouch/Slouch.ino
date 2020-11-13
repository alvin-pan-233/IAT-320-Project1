#include <Adafruit_CircuitPlayground.h>

#define GRAVITY 9.80665
#define SLOUCH_ANGLE 10.0

//300 milisecond = 3s
#define SLOUCH_TIME 3000

//180 / PI
#define RAD2DEG 57.29579 

int red = 0;
int green = 255;
int blue = 0;

float targetAngle;
float currentAngle;
unsigned long slouchStartTime;
bool slouching = false;

void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600);
  targetAngle = 0;
}

void loop() {

  currentAngle = RAD2DEG * asin(-CircuitPlayground.motionZ() / GRAVITY);   //Z dimantion / gravity
  
  Serial.println(currentAngle);  //nan is "not a number"
  
  if ((CircuitPlayground.leftButton()) || (CircuitPlayground.rightButton())){
    targetAngle = currentAngle;
    CircuitPlayground.playTone(900,100);
    delay(500);
    CircuitPlayground.playTone(700,100);
    delay(500);
  }

  if ((currentAngle - targetAngle) > SLOUCH_ANGLE){
    // Turn on the light
    for (int i=0; i<10; ++i) {    
    CircuitPlayground.setPixelColor(i,255, 255, 255);
    }
            
    if(!slouching){
      slouchStartTime = millis();   //current milisecond
      slouching = true;
    }
  }

  else{
    // Turn off the light
    for (int i=0; i<10; ++i) {    
      CircuitPlayground.setPixelColor(i,0, 0, 0);
    } 
    slouching = false;  
  }
  
  if (slouching){
    if(millis() - slouchStartTime > SLOUCH_TIME){
      //  
    }   
  }
  delay(300);
}
