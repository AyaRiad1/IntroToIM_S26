// Code for one switch and an LED
// Wiring:
// - button on Pin A2
// - LED on Pin 13


void setup() {
  pinMode(13, OUTPUT);
  pinMode(A2, INPUT);
}

void loop() {

  int buttonState = digitalRead(A2);

  if (buttonState == HIGH) {
    digitalWrite(13, LOW);    
  } else  {
    digitalWrite(13, HIGH);    
  }
}