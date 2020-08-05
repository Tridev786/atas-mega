// Message, call PIR
const int PIR_1 = A0;
const int PIR_2 = A1;
const int PIR_3 = A2;
const int PIR_4 = A3;
const int PIR_5 = A4;

// Camera PIR
const int PIR_6 = A5;
const int PIR_7 = A6;
const int PIR_8 = A7;
const int PIR_9 = A8;
const int PIR_10 = A9;
int sirenValue = 0;

// Fire
const int PIR_11 = A10;

//Alert
const int PIR_12 = A11;

// Emergency
const int PIR_13 = A12;

// Home door
const int PIR_14 = A13;

// Home door broken
const int PIR_15 = A14;

const int siren = 7;

void setup() {
  Serial2.begin(19200);
  Serial.begin(9600);
  pinMode(siren, OUTPUT);
  sirenValue = 0;
}

void loop() {

 byte p1=0,p2=0,p3=0,p4=0,p5=0,p11=0,p12=0,p13=0,p14=0,p15=1; 

 float pir1 = analogRead(PIR_1) * (5.0 / 1023.0);
 float pir2 = analogRead(PIR_2) * (5.0 / 1023.0);
 float pir3 = analogRead(PIR_3) * (5.0 / 1023.0);
 float pir4 = analogRead(PIR_4) * (5.0 / 1023.0);
 float pir5 = analogRead(PIR_5) * (5.0 / 1023.0);
 float pir11 = analogRead(PIR_11) * (5.0 / 1023.0);
 float pir12 = analogRead(PIR_12) * (5.0 / 1023.0);
 float pir13 = analogRead(PIR_13) * (5.0 / 1023.0);
 float pir14 = analogRead(PIR_14) * (5.0 / 1023.0);
 float pir15 = analogRead(PIR_15) * (5.0 / 1023.0);
 
  if(pir1>=4.9){
    sirenValue= 1;
    p1 = 1;
  }else if(pir2>=4.9){
    sirenValue= 1;
    p2 = 1;
  }else if(pir3>=4.9){
    sirenValue= 1;
    p3 = 1;
  }else if(pir4>=4.9){
    sirenValue= 1;
    p4 = 1;
  }else if(pir5>=4.9){
    sirenValue= 1;
    p5 = 1;
  }else if(pir11>=4.9){
    sirenValue= 1;
    p11 = 1;
  }else if(pir12>=4.9){
    sirenValue= 1;
    p12 = 1;
  }else if(pir13>=4.9){
    sirenValue= 1;
    p13 = 1;
  }
  
  if(pir14>=4.9){
    p14 = 1;
  }

  if(pir15>=4.9){
    sirenValue= 1;
    p15 = 0;
  }

  if(sirenValue == 1){
    digitalWrite(siren, HIGH);
  }

  String serialData = String(p1) + "," + String(p2) + "," + String(p3) 
                      + "," + String(p4) + "," + String(p5) + "," + String(p11)
                      + "," + String(p12) + "," + String(p13) + "," + String(p14)+ "," + String(p15);

  Serial2.println(serialData);
  Serial.println(serialData);
  delay(2000);
}

