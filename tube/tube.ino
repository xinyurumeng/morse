void setup()
{
  for(int pin=3;pin<=7;pin++)
  {
    pinMode(pin,OUTPUT);
    digitalWrite(pin,LOW);
    Serial.begin(9600);}
}
void loop()
{
 for(int pin=3;pin<=7;pin++)
  digitalWrite(pin,LOW);
  delay(10);
 int income;
 if(Serial.available()>0)
 {
   income=Serial.read()-'0';
   if((income&1)==1)
   digitalWrite(3,HIGH);
   if((income>>1&1)==1)
      digitalWrite(4,HIGH);
   if((income>>2&1)==1)
      digitalWrite(5,HIGH);
   if((income>>3&1)==1)
      digitalWrite(6,HIGH);
   
   digitalWrite(7,HIGH);
   delay(1000);
   }}