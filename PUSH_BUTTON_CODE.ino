void setup( )
{
pinMode(2,INPUT);
pinMode(13,OUTPUT);
}
void loop( )
{
int a;
a=digitalRead(2);
if(a==HIGH)
{
digitalWrite(13,HIGH);
}
else
{
digitalWrite(13,LOW);
}
