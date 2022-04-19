// C++ code
int pir1=1;
int pir2=2;
int sheep=0;
void setup()
{
  pinMode(pir1, INPUT);
  pinMode(pir2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(pir1)==1)
  {
    delay(1000);
    if(digitalRead(pir2)==1){sheep++;Serial.println(sheep);}
    
  }
  else if (digitalRead(pir2)==1)
  {
    delay(1000);
    if(digitalRead(pir1)==1){sheep--;Serial.println(sheep);}
    
  }
  else{Serial.println(sheep);}
       delay(2000);
}