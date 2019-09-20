int threshold=50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  Serial.println(value);

  if(value<threshold){
    digitalWrite(13, HIGH);
    
  }else{

    
    digitalWrite(13, LOW);
  }
  
  delay(500);
}
