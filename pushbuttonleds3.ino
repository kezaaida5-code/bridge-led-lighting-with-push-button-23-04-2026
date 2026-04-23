int LED1 = 7;
int LED2 = 6;
int LED3 = 5;
int pushbutton = 2;


int lastButtonState = HIGH;
bool ledsOn = false;

void setup()
{
  pinMode(pushbutton, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop()
{
   int buttonState = digitalRead(pushbutton);

  if (buttonState == LOW && lastButtonState == HIGH) {
    ledsOn = !ledsOn;
    delay(200);
     }

  lastButtonState = buttonState;
  
  if(ledsOn){

  digitalWrite(LED1, HIGH);
  digitalWrite(LED2,HIGH);
    digitalWrite(LED3, HIGH);
  }else{
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
}
    
    
    
    
