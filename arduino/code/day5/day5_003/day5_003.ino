int sw = 4;
void setup() {
  Serial.begin(9600);
  pinMode(sw, INPUT);
}

void loop() {
  int resw = digitalRead(sw);
  if (resw == 1) {
    Serial.println("1");
  }
  else {
    Serial.println("0");
  }

}
