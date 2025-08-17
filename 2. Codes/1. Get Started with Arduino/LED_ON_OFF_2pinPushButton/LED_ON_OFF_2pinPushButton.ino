int buttonPin = 2;// Push button connected to pin 2
int ledPin = 13;// Onboard LED
void setup() {
    pinMode(buttonPin, INPUT_PULLUP);// Button pin as input
    pinMode(ledPin, OUTPUT);// LED pin as output
}
void loop() {
    int buttonState = digitalRead(buttonPin);// Read button value
    if (buttonState == LOW) {// If button is pressed
    digitalWrite(ledPin, HIGH);// LED ON
  } 
  else {
    digitalWrite(ledPin, LOW);// LED OFF
  }
}