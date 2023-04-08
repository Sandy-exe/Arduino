int whiteLED = 10; 
int RLED = 3;
int R;


void setup() { 
  Serial.begin(9600);
  pinMode(whiteLED, OUTPUT); 
  pinMode(RLED,INPUT);  
}

void loop() {
  R= digitalRead(RLED);
if(R==LOW){  
    digitalWrite(whiteLED,HIGH); 
  }else{
    digitalWrite(whiteLED, LOW);
  }
}


