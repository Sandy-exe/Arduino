int ledpin =12;
int motorpin1=5;
int motorpin2=3;

void setup(){
  pinMode(ledpin,OUTPUT);
  pinMode(motorpin1,OUTPUT);
  pinMode(motorpin2,OUTPUT);
}

void loop(){
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,HIGH);
  digitalWrite(ledpin,HIGH);
  delay(5000);
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);
  digitalWrite(ledpin,LOW);
  delay(5000);
}

