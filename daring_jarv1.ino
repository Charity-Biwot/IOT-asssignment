// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode (2,OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  digitalWrite (2,HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(2,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  delay(500);
}