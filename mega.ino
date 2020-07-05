const int PIR_1 = A0;
const int PIR_2 = A1;
const int PIR_3 = A2;
const int PIR_4 = A3;
const int PIR_5 = A4;
const int PIR_6 = A5;
const int PIR_7 = A6;
const int PIR_8 = A7;
const int PIR_9 = A8;
const int PIR_10 = A9;
const int PIR_11 = A10;
const int PIR_12 = A11;
const int PIR_13 = A12;

void setup() {
  Serial2.begin(19200);
  Serial.begin(9600);
}


void loop() {

  float pir1 = 0.0;  
  float pir2 = 0.0;
  float pir3 = 0.0;
  float pir4 = 0.0;
  float pir5 = 0.0;
  float pir11 = 0.0;
  float pir12 = 0.0;
  float pir13 = 0.0;

  pir1 = analogRead(PIR_1) * (5.0 / 1023.0);
  pir2 = analogRead(PIR_2) * (5.0 / 1023.0);
  pir3 = analogRead(PIR_3) * (5.0 / 1023.0);
  pir4 = analogRead(PIR_4) * (5.0 / 1023.0);
  pir5 = analogRead(PIR_5) * (5.0 / 1023.0);
  pir11 = analogRead(PIR_11) * (5.0 / 1023.0);
  pir12 = analogRead(PIR_12) * (5.0 / 1023.0);
  pir13 = analogRead(PIR_13) * (5.0 / 1023.0);

  String serialData = String(pir1) + "," + String(pir2) + "," + String(pir3) 
                      + "," + String(pir4) + "," + String(pir5) + "," + String(pir11)
                      + "," + String(pir12) + "," + String(pir13);

  Serial2.println(serialData);
  Serial.println(serialData);
  delay(1000);
}

