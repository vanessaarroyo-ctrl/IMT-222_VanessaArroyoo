int leds[] = {2, 4, 6, 12, 13, 14, 15, 16, 17, 18}; 
int numLEDs = 10;
const int delayTime = 2000;

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  // Encendemos cada LED en secuencia
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(leds[i], HIGH);
    delay(delayTime);
  }

  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(leds[i], LOW);
  }
}