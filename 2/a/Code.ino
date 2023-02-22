unsigned int captured = 0;
void setup()
{
  TCCR1B |= (1<<WGM12);
  TCCR1B &= ~(1<<WGM13);
  TCCR1A |= (1<<WGM10) | (1<<WGM11);
  
  TCCR1A |= (1<<COM1A1);
  TCCR1A &= ~(1<<COM1A0);
  
  TCCR1B |= (1<<CS10) | (1<<CS11);
  TCCR1B &= ~(1<<CS12);
  
  DDRB |= (1<<DDB1);
  
}
unsigned int i=0;
void loop()
{
  for(i=0;i<1024;i++)
  {
  OCR1A = i;
    delay(2);
  }
  delay(1000);
  
  for(i=1023;i>0;i--)
  {
  OCR1A = i;
    delay(2);
  }
  delay(1000);
}