
int pwmPin = 6;

void setup() {
  pinMode(pwmPin, OUTPUT);

    
}

void loop() {
 digitalWrite(pwmPin, LOW); 
  delay(20); 
  
  digitalWrite(pwmPin, HIGH);
  delay(20); 
                         
}
