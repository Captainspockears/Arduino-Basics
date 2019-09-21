#include <SoftwareSerial.h>
SoftwareSerial mySerial(5,6);
void setup() {
  // put your setup code here, to run once:
mySerial.begin(9600);
Serial.begin(9600);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
char ch;
if(mySerial.available())
{
  ch=mySerial.read();
  Serial.println(ch
  );
  switch(ch)
  {
    case 'l':
   digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    delay(100);
    break;
    case 'r':
    
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delay(100);
    break;
    case 'f':
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delay(100);
    break;
    case 'b':
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    delay(100);
    break;
    case '0':
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    delay(100);
    break;
  }
}

}
