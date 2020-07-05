const int PIR_1 = A0;
const int PIR_2 = A1;
const int PIR_3 = A2;
const int PIR_4 = A3;
const int PIR_5 = A4;

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

  pir1 = analogRead(PIR_1) * (5.0 / 1023.0);
  pir2 = analogRead(PIR_2) * (5.0 / 1023.0);
  pir3 = analogRead(PIR_3) * (5.0 / 1023.0);
  pir4 = analogRead(PIR_4) * (5.0 / 1023.0);
  pir5 = analogRead(PIR_5) * (5.0 / 1023.0);

  String serialData = String(pir1) + "," + String(pir2) + "," + String(pir3) + "," + String(pir4) + "," + String(pir5);

  Serial2.println(serialData);
  Serial.println(serialData);
  delay(1000);
}

