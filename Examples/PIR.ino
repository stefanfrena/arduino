#define led 7
#define buzzer 8
#define pirSensor 9



void setup() { 
  Serial.begin(9600);
  pinMode(pirSensor, INPUT); 
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  
int x= digitalRead(pirSensor);

  if(x==LOW)
  {
    //digitalWrite(led,LOW);
    //digitalWrite(buzzer,LOW);
    //Serial.println(x);
  }
  else
  {
    //digitalWrite(led,HIGH);
    //digitalWrite(buzzer,HIGH);
    Serial.println(x);
  }
}
