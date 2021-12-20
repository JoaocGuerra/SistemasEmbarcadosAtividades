int button_state = 0;


void setup()
{
  pinMode(27, OUTPUT);
  pinMode(2,INPUT);
}

void loop()
{
  button_state = digitalRead(2);

  if(button_state == LOW) {
    digitalWrite(27, HIGH);
    delay(2000);
    digitalWrite(27, LOW);
    delay(1000);
    }
   else if(button_state == HIGH){
      digitalWrite(27, HIGH);
      delay(5000);
      digitalWrite(27, LOW);
      delay(30000);
    }
  
}
