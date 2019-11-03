void setup()
{
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
  
  digitalWrite(9,LOW);
  delayMicroseconds(2); 
  digitalWrite(9, HIGH);
  delayMicroseconds(10); 
  digitalWrite(9, LOW);
  long time= pulseIn(10, HIGH);
  int distance= 0.017*time;
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.println("cm");
}
