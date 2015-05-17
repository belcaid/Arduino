int led = 9; // Pin connectee a la led

void setup() {
  
pinMode(led,OUTPUT);
}

void loop() {

digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(1000);
}
