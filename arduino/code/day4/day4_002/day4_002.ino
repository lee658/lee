
void setup() {
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(1000);
}
