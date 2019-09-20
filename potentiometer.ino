void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0/1023.0);
  Serial.println(sensorValue);
  Serial.println(voltage);
  Serial.println();
  analogWrite(12, sensorValue);
  delay(500);
}
