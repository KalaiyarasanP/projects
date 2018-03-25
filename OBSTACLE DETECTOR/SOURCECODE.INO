# projectsconst int rightpin=9;
const int leftpin=10;
const int trigpin=12;
const int echopin=11;
void setup() {
  // put your setup code here, to run once:
 
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

//digitalWrite(8,HIGH);
//digitalWrite(7,LOW);
long durationS,durationR,durationL,cmS,cmR,cmL;
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(5);
 digitalWrite(trigpin,LOW);
 durationS=pulseIn(echopin,HIGH);
 cmS=durationS/58;
    pinMode(rightpin,OUTPUT);
    digitalWrite(rightpin,LOW);
    delayMicroseconds(2);
    digitalWrite(rightpin,HIGH);
    delayMicroseconds(10);
    digitalWrite(rightpin,LOW);

    pinMode(rightpin,INPUT);
    durationR=pulseIn(rightpin,HIGH);
    cmR=durationR/58;
     pinMode(leftpin,OUTPUT);
    digitalWrite(leftpin,LOW);
    delayMicroseconds(2);
    digitalWrite(leftpin,HIGH);
    delayMicroseconds(10);
    digitalWrite(leftpin,LOW);

    pinMode(leftpin,INPUT);
    durationL=pulseIn(leftpin,HIGH);
    cmL=durationL/58;
 
if(cmS>=20)
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  delay(1000);
}
else
{   
    
     
    
  if(cmR>=20)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    delay(1000);
  }
   else if(cmR<20)
   {
    
    if(cmL>=20)
    {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(1000);
   }
   else
   {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    delay(1000);
   }
}
}
   }
   
 


 
