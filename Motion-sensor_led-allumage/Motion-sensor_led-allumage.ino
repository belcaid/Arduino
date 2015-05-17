int motion = 11;
int led = 2;

void setup() {
  pinMode(motion, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  long sensor = digitalRead(motion);

  if(sensor == HIGH){
     digitalWrite (led, HIGH);
   }
   else
   {
      digitalWrite (led, LOW);
   }  
}
