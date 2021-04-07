int pinarr[] = {6, 7, 8};
int buarr[] = {262, 294, 330};
int pinsp = 5;
int sw = 4;

void setup() {
  Serial.begin(9600);
  int i = 0;
  int j = 0;
  for (pinarr[i]; i <= 3; i++) {
    pinMode(pinarr[i], OUTPUT);
  }
  pinMode(pinsp, OUTPUT);
  pinMode(sw, INPUT);
}

void loop() {
  int i = 0;
  int j = 0;
  int resw = digitalRead(sw);
  for (pinarr[i], buarr[j]; i <= 3; i++, j++) {
      if(resw == 1){
        Serial.println("1");
       }
        else{
        Serial.println("0");
      }  
      digitalWrite(pinarr[i], HIGH);
      tone(pinsp, buarr[j], 500);
      delay(500);
      digitalWrite(pinarr[i], LOW);
      Serial.println(pinarr[i]);
      Serial.println(buarr[j]);
      Serial.println("finsh");
  }

 

  
}
