#include <Arduino.h>

int pinLed = 4;
int pinChave = 2; 
int button_state = 0; 

int aceso = 2000;
int apagado = 1000; 


void interrupcao() {

  button_state = !button_state; 

  if (button_state == 1) {
    aceso = 2000; 
    apagado = 1000; 
  } else {
    aceso = 5000; 
    apagado = 25000; 
  }
}


void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinChave, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pinChave), interrupcao, FALLING);
}

void loop(){
  digitalWrite(pinLed, HIGH); 
  delay(aceso); 
  digitalWrite(pinLed, LOW); 
  delay(apagado); 
}
