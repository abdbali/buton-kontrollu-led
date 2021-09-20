int led=13;
int buton=2;
int durum=0;
void setup() {
pinMode(led,OUTPUT);
pinMode(buton,INPUT);
}
void loop() {
 durum=digitalRead(buton);
if(durum==HIGH)
{
// delay(10);
digitalWrite(led,HIGH);
}
else if(durum==LOW)
{
 //delay(10);
digitalWrite(led,LOW);
}
}