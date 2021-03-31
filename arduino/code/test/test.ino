int pinarr[] = {6, 7, 8};
void setup() {
  Serial.begin(9600);
  int i = 0;
  for (pinarr[i]; i <= 3; i++) {
    pinMode(pinarr[i], OUTPUT);
  }
}
void loop() {
  int i = 0;
  for (pinarr[i]; i <= 3; i++) {
    digitalWrite(pinarr[i], HIGH);
    delay(500);
    digitalWrite(pinarr[i], LOW);
  }

}
