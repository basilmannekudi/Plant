void setup() {
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0);
  // put your main code here, to run repeatedly:
//Serial.println(analogRead(A0));
//digitalWrite(6,HIGH);
//delay(300);
//digitalWrite(6,LOW);
//delay(600);
Serial.println(analogRead(A0));
if(val<350)
{
  for(int i=1;i<25;i++)
  {
  digitalWrite(2,HIGH);
  delay(300);
  digitalWrite(2,LOW);
  delay(250);
  }
  
  
  }
else if(val>950)
{

  digitalWrite(2,HIGH);
  delay(2500);
  digitalWrite(2,LOW);
  delay(1000);

  }

}
