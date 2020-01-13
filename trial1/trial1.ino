/* to get the input 3*/
#define in 3
int btn =0;
int count=0;
void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(in,INPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  btn=digitalRead(in);
  if(btn!=0)
  {
    count++;
    delay(250);
  }
  switch(count)
  {
    case 0:
            digitalWrite(8,LOW);
            digitalWrite(7,LOW);
            digitalWrite(6,LOW);
            break;
  case 1:digitalWrite(8,HIGH);
        break;
  case 2:  digitalWrite(8,HIGH);
           digitalWrite(7,HIGH);
           break;
   case 3:   digitalWrite(8,HIGH);
             digitalWrite(7,HIGH);
             digitalWrite(6,HIGH);
             break;
  case 4: digitalWrite(8,HIGH);
           delay(100);
           digitalWrite(8,LOW);
           delay(100);
             digitalWrite(7,HIGH);
             delay(100);
           digitalWrite(7,LOW);
           delay(100);
             digitalWrite(6,HIGH);
             delay(100);
           digitalWrite(6,LOW);
           delay(100);
             break;
  
    default :count=0;
              break;    
  }
  
}
