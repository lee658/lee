int pinarr[] = {6, 7, 8};
int buarr[] = {262, 294, 330};
int pinsp = 5;

void setup() {
  Serial.begin(9600);
  int i = 0;
  int j = 0;
  for (pinarr[i]; i <= 3; i++) {
    pinMode(pinarr[i], OUTPUT);
  }
  pinMode(pinsp, OUTPUT);
}

void loop() {
  int i = 0;
  int j = 0;
  for (pinarr[i], buarr[j]; i <= 3; i++, j++) {  
      digitalWrite(pinarr[i], HIGH);
      tone(pinsp, buarr[j], 500);
      delay(500);
      digitalWrite(pinarr[i], LOW);
      Serial.println(pinarr[i]);
      Serial.println(buarr[j]);
      Serial.println("finsh");
  }
}
