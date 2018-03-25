
void setup() {
  // put your setup code here, to run once:
  pinMode(0,INPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(A0,OUTPUT);
  Serial.begin(9600);
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
 
}

void loop() {
  
  // put your main code here, to run repeatedly:
int a,b,limit,value,duration,distance;
a=digitalRead(3);
if(a==HIGH)

{
value=analogRead(A0);
limit=digitalRead(4);
if(limit==LOW)
{
  digitalWrite(7,HIGH);
  delay(100);
  while(1)
  {
    b=digitalRead(0);
    if(b==HIGH)
    {
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
    digitalWrite(5,LOW);
delayMicroseconds(5);
digitalWrite(5,HIGH);
delayMicroseconds(10);
digitalWrite(5,LOW);
duration=pulseIn(6,HIGH);
distance=duration/58;
Serial.print(distance);
Serial.print("-----------------");
if(distance<25)
{
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(100);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
 delay(100); 
  }
  else
  {
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(100);
  }
   while(1)
 {
 Serial.print("stopped");  
   }

    }
  }
}
}
}
 
