const int irPins[4] = {2, 3, 4, 5};      
const int mosfetPins[4] = {8, 9, 10, 11}; 
void setup() {
  // Set IR pins as inputs
  for (int i = 0; i < 4; i++) {
    pinMode(irPins[i], INPUT);
  }

  for (int i = 0; i < 4; i++) {
    pinMode(mosfetPins[i], OUTPUT);
    digitalWrite(mosfetPins[i], LOW); 
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    int sensorState = digitalRead(irPins[i]);

    if (sensorState == LOW) {
      digitalWrite(mosfetPins[i], HIGH);
    } else {
      digitalWrite(mosfetPins[i], LOW);
    }
  }
}