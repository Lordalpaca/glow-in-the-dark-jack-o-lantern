const int ledpin = 13;
const int sensorpin = A0;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpin, OUTPUT);
pinMode(sensorpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int brightness = analogRead(sensorpin);

if (brightness <=300) {

digitalWrite(ledpin, HIGH);

}

else {

digitalWrite(ledpin, LOW);

}
}
