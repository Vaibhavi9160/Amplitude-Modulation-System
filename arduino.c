void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(10, HIGH);
  delayMicroseconds(100);

  digitalWrite(10, LOW);
  delayMicroseconds(100);
}