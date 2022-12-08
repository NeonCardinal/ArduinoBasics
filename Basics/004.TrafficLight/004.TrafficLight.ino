int redLed = 2;
int yellowLed = 4;
int greenLed = 6;

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop()
{
  digitalWrite(greenLed, HIGH);
  delay(5000);
  digitalWrite(greenLed, LOW);

  for(int i = 0; i < 3; i++)
  {
    delay(500);
    digitalWrite(yellowLed, HIGH);
    delay(500);
    digitalWrite(yellowLed, LOW);
  }

  delay(500);

  digitalWrite(redLed, HIGH);
  delay(5000);
  digitalWrite(redLed, LOW);
}