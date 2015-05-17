int led = 9; // Déclaration de la Borche connectee a la led

void setup() { // Fonction d'intialisation 
  
pinMode(led,OUTPUT);  // La broche en sortie 
}

void loop() {

digitalWrite(led,HIGH); // La broche à 5v pour allumer la led
delay(1000);            // Pause d'une seconde (1000 ms)
digitalWrite(led,LOW);  // La broche à 0v pour éteindre la led
delay(1000);            // Pause de 1000 millisecondes
}
