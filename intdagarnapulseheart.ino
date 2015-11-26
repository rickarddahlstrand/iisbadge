#define ledPin1    10   
#define ledPin2    11   

void setup()
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(12, OUTPUT);
  digitalWrite(12, LOW);
}

void loop()
{
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(ledPin1, fadeValue);         
    analogWrite(ledPin2, 255-fadeValue);         
    delay(15);                            
  } 
  
  for(int fadeValue = 200 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(ledPin1, fadeValue);         
    analogWrite(ledPin2, 255-fadeValue);         
    delay(25);                            
  } 
}




