void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

//B  
print7seg(0,1,1,1,0,1,1,0);
delay(1000);
alllow();

//S  
print7seg(1,0,1,1,0,1,1,0);
delay(1000);
alllow();


//V
print7seg(0,1,1,1,1,1,0,0);
delay(1000);
alllow();

//R
print7seg(1,1,1,0,1,1,1,0);
delay(1000);
alllow();

}

void print7seg(int a, int b, int c, int d, int e, int f, int g, int h){


  if(a==1){

    digitalWrite(8,HIGH);
    
  }if(b==1){

    digitalWrite(9,HIGH);
    
  }if(c==1){

    digitalWrite(4,HIGH);
    
  }if(d==1){

    digitalWrite(3,HIGH);
    
  }if(e==1){

    digitalWrite(2,HIGH);
    
  }if(f==1){

    digitalWrite(7,HIGH);
    
  }if(g==1){

    digitalWrite(6,HIGH);
    
  }if(h==1){

    digitalWrite(5,HIGH);
    
  }

  
}

void alllow(){

  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}  
