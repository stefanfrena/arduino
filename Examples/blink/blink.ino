
const int MOTOR = 13; // LED connected to digital pin 13
const int wait = 500;
void setup()
{
  pinMode(MOTOR, OUTPUT); // sets the digital
                        // pin as output
}
void loop()
{
  digitalWrite(MOTOR, HIGH); // turns the LED on
  delay(wait); // waits for a second
  digitalWrite(MOTOR, LOW); // turns the LED off
  delay(wait); // waits for a second

  digitalWrite(MOTOR, HIGH); // turns the LED on
  delay(100); // waits for a second
  digitalWrite(MOTOR, LOW); // turns the LED off
  delay(100); // waits for a second

  digitalWrite(MOTOR, HIGH); // turns the LED on
  delay(100); // waits for a second
  digitalWrite(MOTOR, LOW); // turns the LED off
  delay(100); // waits for a second
}
