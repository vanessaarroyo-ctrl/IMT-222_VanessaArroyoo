const int NUM_LEDS = 15;                 
const int START_PIN = 2;                   
const int DELAY_TIME_MS = 500;             

int leds[NUM_LEDS];  


void setup() {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = START_PIN + i;
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);   
  }
}

void loop() {
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(leds[i], HIGH);
    delay(DELAY_TIME_MS);
  }

  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(leds[i], LOW);
  }
}

