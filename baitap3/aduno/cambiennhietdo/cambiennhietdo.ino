void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(96000);
}

void loop()
{
  int x=analogRead(A0);
  int t=map(x, 0,410, -50,150);
  if (t>=37)
    digitalWrite(13, HIGH);
  else
    digitalWrite(13, LOW);
  delay(100);
}
