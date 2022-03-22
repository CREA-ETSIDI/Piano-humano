int i;
const int n = 26;
int buttonPushCounter=0;   
int buttonState[n];         
int lastButtonState[n]; 

int buttonPushCounter2 = 0;  
int buttonState2 = 0;       
int lastButtonState2 = 0; 

int buttonPushCounter3 = 0;   
int buttonState3 = 0;         
int lastButtonState3 = 0; 

int buttonPushCounter4 = 0;   
int buttonState4 = 0;         
int lastButtonState4 = 0; 

void setup ()
{
  Serial.begin (115200);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);
  pinMode(18, INPUT_PULLUP);
  pinMode(19, INPUT_PULLUP);
  pinMode(20, INPUT_PULLUP);
  pinMode(21, INPUT_PULLUP);
  pinMode(22, INPUT_PULLUP);
  pinMode(23, INPUT_PULLUP);
  pinMode(24, INPUT_PULLUP);
  pinMode(25, INPUT_PULLUP);
  pinMode(26, INPUT_PULLUP);
  
}
void loop()
{ 
  for (i=0;i<n;i++){
    buttonState[i] = digitalRead(i+2);
  
    if (buttonState[i] != lastButtonState[i]) {
      if (buttonState[i] == LOW) {
        buttonPushCounter++;
        Serial.write (144);
        Serial.write (60+i);
        Serial.write (100);
      }
      else {
        Serial.write (144);
        Serial.write (60+i);
        Serial.write (0);
        delay(50);
      }
    }
    lastButtonState[i] = buttonState[i];
    /*
    if (buttonPushCounter % i == 0) {
      digitalWrite(i, HIGH);
    }
    else {
      digitalWrite(i, LOW);
    }*/
  }
}
