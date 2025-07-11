#define LS 3    
#define RS 4      


#define ENA 5
#define ENB 6
#define LM1 7     
#define LM2 8      
#define RM1 9     
#define RM2 10      

void setup()
{
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  analogWrite(ENA,100);
  analogWrite(ENB,90);  
  delay(5000);
}

void loop()
{
  if(digitalRead(LS) && digitalRead(RS))     
  {
      
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
  }
  
  if(!(digitalRead(LS)) && digitalRead(RS))     
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
  }
  
  if(digitalRead(LS) && !(digitalRead(RS)))     
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
  
  if(!(digitalRead(LS)) && !(digitalRead(RS)))     
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
}
