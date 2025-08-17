int potPin = A0;//Potentiometer Pin
int ledPin = 11;//LED Pin

void setup(){
  pinMode(potPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int potValue = analogRead(potPin);
  int cnValue = potValue*((float)255/1023);
  Serial.print("Analog Value: ");
  Serial.print(potValue);
  Serial.print("  PWM Value: ");
  Serial.println(cnValue);
  analogWrite(ledPin,cnValue);
}
