#include"Arduino.h"
void setup()
{	pinMode(13,OUTPUT);
   Serial.begin(9600);
}
void dot()
{
  digitalWrite(13,HIGH);
	delay(250);
	digitalWrite(13,LOW);
	delay(250);
}
void dash()
{
  digitalWrite(13,HIGH);
	delay(250*4);
	digitalWrite(13,LOW);
	delay(250);
}
void c_space()
{
  digitalWrite(13,LOW);
	delay(250*3);
}
void w_space()
{
  digitalWrite(13,LOW);
	delay(250*4);
}
void loop() {
  String inString="";
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char inChar=Serial.read();
    {
    switch(inChar){
     case 65:
       dot();
      dash();
      break;
    case 66:
      dash();
       dot();
        dot();
         dot();
         break;
      case 67:
     dash();
      dot();
      dash();
      dot();
      break;
     case 68:
      dash();
      dot();
      dot();
      break;
    case 69:
      dot();
      break;
     case 70:
      dot();
      dot();
      dash();
      dot();
      break;
     case 71:
        dash();
         dash();
      dot();
      break;
       case 72:
      dot();
       dot();
        dot();
         dot();
      break;
       case 73:
      dot();
      dot();
      break;
       case 74:
      dot();
      dash();
      dash();
      dash();
      break;
       case 75:
       dash();
      dot();
      dash();
      break;
       case 76:
      dot();
      dash();
      dot();
      dot();
      break;
       case 77:
      dash();
      dash();
      break;
       case 78:
      dash();
      dot();
      break;
       case 79:
      dash();
      dash();
      dash();
      break;
       case 80:
      dot();
      dash();
      dash();
      dot();
      break;
       case 81:
      dash();
      dash();
      dot();
      dash();
      break;
       case 82:
      dot();
      dash();
       dot();
      break;
       case 83:
      dot();
       dot();
        dot();
      break;
       case 84:
      dash();
      break;
       case 85:
      dot();
      dot();
      dash();
      break;
       case 86:
      dot();
dot();
dot();
dash();

      break;
       case 87:
     dot();
dash();
dash();

      break;
       case 88:
     dash();
dot();
dot();
dash();

      break;
       case 89:
     dash();
dot();
dash();
dash();

      break;
       case 90:
      dash();
dash();
dot();


      break;
      case 32:
      w_space();
      
      
    }
      c_space();
    
      
    }
   
    inString+=(char)inChar;
    
  }
  if(inString!="")
  {
    Serial.print("I received:");
    Serial.println(inString);
    
  }
}

