#include <SoftwareSerial.h>

int THRESHOLD = 50; //Reset this based on your threshold value

void setup(){

  pinMode(2, OUTPUT);  //Buzzer
  pinMode(0, INPUT);   //Smoke Sensor
  Serial.begin(9600);
}

void loop(){
  
  int val = analogRead(0);
  Serial.println(val);

  if(val>THRESHOLD)   //If the value is greater than threshold
    tone(2,1000,500); //Turn Buzzer ON - tone(pin number, frequency, time in ms)
  else
    tone(2,0,0);; //Turn Buzzer OFF
  
  delay(1000);
  
}
