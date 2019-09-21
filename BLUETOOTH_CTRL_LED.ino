#include <SoftwareSerial.h>
SoftwareSerial mySerial(5,6); //TX-5
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mySerial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
char val;
if(mySerial.available())
{
  val=mySerial.read();
  Serial.println(val);
  if(val=='1')
  digitalWrite(13,HIGH);
  if(val=='0')
  digitalWrite(13,LOW);
}
}
