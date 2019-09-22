#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "cF3EcxalTb88PDA2FuoCixRx_nw5fhno";
char ssid[] = "1";
char pass[] = "123456788";
WidgetLED led1(V1);
BlynkTimer timer;

void blinkLedWidget() {

  if(led1.getValue()){

    led1.off();
    Serial.println("LED on V1: off");
    
  }else{

    led1.on();
    Serial.println("LED on V1: on");
    
  }
  
}

void setup() {
  
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(1000L, blinkLedWidget);
  
}

void loop() {

  Blynk.run();
  timer.run();

}
