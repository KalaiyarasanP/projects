 #include<LiquidCrystal.h>
LiquidCrystal lcd (2,4,8,9,10,11);
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
   lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data;
  float a,x,y,p,f;
  data=analogRead(A0);
  a=(500.0*data)/1023;
  f=(a*1.8)+32;
  delay(10);
   x=98.4-f;
   if(x>0)
    {
      y=12*1.4;
      if(x-y==0)
      {
        lcd.clear();
       lcd.print("T=12hrs");
       //lcd.cursor(0,1);
        Serial.println("12");
        delay(1000);
      }
      else if(x-y>0)
      {
        
        p=(x-y)/0.7;
        p=p+12;
        lcd.clear();
        //lcd.cursor(0,1);
       lcd.print("T");
       lcd.print(p);
       lcd.print("hrs");
        Serial.println(p);
        delay(1000);
        
      }
      else
      {
       p=f/1.4;
       lcd.clear();
      // lcd.cursor(0,1);
       lcd.print("T");
       lcd.print(p);
       lcd.print("hrs");
        Serial.println(p); 
        delay(1000);
      }
    } 
  
       Serial.println(a); 
  
    }

