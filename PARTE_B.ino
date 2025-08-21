int leds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}; 
int numLEDs = 15;
const int delayTime = 500;

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(leds[i], HIGH);
    delay(delayTime);
  }

  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(leds[i], LOW);
  }
}

