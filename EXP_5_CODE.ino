
void setup()
{
pinMode(11,INPUT);
pinMode(10,OUTPUT);
}
void loop()
{
int reading = digitalRead(11);
if(reading==HIGH)
{
  digitalWrite(10,HIGH)
}
else{
  digitalWrite(10,LOW);
}}
