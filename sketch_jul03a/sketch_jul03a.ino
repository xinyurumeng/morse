#include "Morse.h"
Morse morse(13);
 
void setup()
{
   Serial.begin(9600);
}



void loop() {
  String inString="";
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char inChar=Serial.read();
    {
    switch(inChar){
     case 65:
      morse.dot();
      morse.dash();
      break;
     case 66:
      morse.dash();
       morse.dot();
        morse.dot();
         morse.dot();
         break;
      case 67:
     morse.dash();
      morse.dot();
      morse.dash();
      morse.dot();
      break;
     case 68:
      morse.dash();
      morse.dot();
      morse.dot();
      break;
    case 69:
      morse.dot();
      break;
     case 70:
      morse.dot();
      morse.dot();
      morse.dash();
      morse.dot();
      break;
     case 71:
        morse.dash();
         morse.dash();
      morse.dot();
      break;
       case 72:
      morse.dot();
       morse.dot();
        morse.dot();
         morse.dot();
      break;
       case 73:
      morse.dot();
      morse.dot();
      break;
       case 74:
      morse.dot();
      morse.dash();
      morse.dash();
      morse.dash();
      break;
       case 75:
       morse.dash();
      morse.dot();
      morse.dash();
      break;
       case 76:
      morse.dot();
      morse.dash();
      morse.dot();
      morse.dot();
      break;
       case 77:
      morse.dash();
      morse.dash();
      break;
       case 78:
      morse.dash();
      morse.dot();
      break;
       case 79:
      morse.dash();
      morse.dash();
      morse.dash();
      break;
       case 80:
      morse.dot();
      morse.dash();
      morse.dash();
      morse.dot();
      break;
       case 81:
      morse.dash();
      morse.dash();
      morse.dot();
      morse.dash();
      break;
       case 82:
      morse.dot();
      morse.dash();
       morse.dot();
      break;
       case 83:
      morse.dot();
       morse.dot();
        morse.dot();
      break;
       case 84:
      morse.dash();
      break;
       case 85:
      morse.dot();
      morse.dot();
      morse.dash();
      break;
       case 86:
      morse.dot();
morse.dot();
morse.dot();
morse.dash();

      break;
       case 87:
     morse.dot();
morse.dash();
morse.dash();

      break;
       case 88:
     morse.dash();
morse.dot();
morse.dot();
morse.dash();

      break;
       case 89:
     morse.dash();
morse.dot();
morse.dash();
morse.dash();

      break;
       case 90:
      morse.dash();
morse.dash();
morse.dot();
morse.dot();

      break;
      case 32:
      morse.w_space();
      
      
    }
    morse.c_space();
    
      
    }
   
    inString+=(char)inChar;
    
  }
  if(inString!="")
  {
    Serial.print("I received:");
    Serial.println(inString);
    
  }
}


