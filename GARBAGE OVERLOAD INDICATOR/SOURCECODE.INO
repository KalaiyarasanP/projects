void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(9,INPUT);
pinMode(4,OUTPUT);
pinMode(7,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
digitalWrite(4,HIGH);
digitalWrite(7,LOW);
Serial.begin(9600);
}

void loop() {
  
  long duration,distance;
digitalWrite(8,LOW);
delayMicroseconds(5);
digitalWrite(8,HIGH);
delayMicroseconds(10000);
digitalWrite(8,LOW);
duration=pulseIn(9,HIGH);
distance=duration/58;
digitalWrite(12,LOW);
digitalWrite(13,LOW);
if(distance<=10)
{
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  delayMicroseconds(10000000);
}  
else
{
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
}
}

