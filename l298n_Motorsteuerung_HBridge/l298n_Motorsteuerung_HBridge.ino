#define enA 9
#define in1 6
#define in2 7
#define startButton 5
#define rpmButton A0

int startButtonPressed = 0;
int rpmButtonPressed = 0;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(startButton, INPUT);
  pinMode(rpmButton, INPUT);
  
  // Set rotation direction
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  Serial.begin (9600);
}
void loop() {
  startButtonPressed = digitalRead(startButton);

  if(startButtonPressed == HIGH){
    rpmButtonPressed = analogRead(rpmButton);
    
    if(rpmButtonPressed > 0){
      // 45 RPM
      analogWrite(enA, 90); 
    }
    else{
      // 33 RPM
      analogWrite(enA, 80); 
    }
  }
  else{
    analogWrite(enA, 0);
  }
  delay(500);
 }
  
