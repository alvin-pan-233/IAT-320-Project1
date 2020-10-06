#include <Adafruit_CircuitPlayground.h>

int vals[7] = {3, 2, 0, 1, 6, 9, 10};
float pitches[8] = {261.626, 293.665, 329.628, 349.228, 391.995, 440.0, 493.883};


void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  for (int i = 0; i < 7; i++) {
    int x = CircuitPlayground.readCap(vals[i]);
    Serial.print(CircuitPlayground.readCap(vals[i]));
    Serial.print(" ");
    if(x>600){
      CircuitPlayground.playTone(pitches[i],200);
    }
  }
  Serial.println(" ");

  delay(200);

}
