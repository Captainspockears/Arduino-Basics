void setup(){
  
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  
}

void loop(){
  
int input = digitalRead(2);  

if (input == HIGH){
  
  digitalWrite(13, HIGH);
  
}else{
  
  digitalWrite(13, LOW);
  
}
  
}
