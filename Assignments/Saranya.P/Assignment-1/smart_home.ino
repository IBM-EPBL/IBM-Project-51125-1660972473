// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(A1, INPUT);
 
}

void loop()
{
  
 int temp=analogRead(A1);
 if(temp>30)
 {
   digitalWrite(2,HIGH);
 }
   if(temp<30)
 {
   digitalWrite(2,LOW);
 }
 
 int pir=analogRead(A0);
 int d=map(pir,0,1023,0,255);
 if(d>100)
 {
   digitalWrite(1,HIGH);
  
   
 }
 if(d<100)
 {
   digitalWrite(1,LOW);

 }
 delay(500);
}
