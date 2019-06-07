#include <SoftwareSerial.h>

#define rxPin 11
#define txPin 10

SoftwareSerial mySerial(rxPin, txPin);

void setup() {
pinMode(rxPin, INPUT);
pinMode(txPin,& OUTPUT);
mySerial.begin(38400);
Serial.begin(38400);
}

void loop() {
int i = 0;
char someChar[32] = {0};
if(Serial.available()){
  do{
    someChar[32] = {0};

    delay(3);
    }while (Serial.available() > 0);

    mySerial.println(someChar);
    Serial.println(someChar);
  }
  while(mySerial.available())
    Serial.print((char)mySerial.read());

}
