// C++ code
//
int red=12;
int yellow=11;
int green=10;
int on=500;
int off=500;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(on); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, HIGH);
  delay(on);
  digitalWrite(yellow, LOW);
  delay(off);
  digitalWrite(yellow, HIGH);
  delay(on);
  digitalWrite(yellow, LOW);
  delay(off);
  digitalWrite(yellow, HIGH);
  delay(on);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(on);
  digitalWrite(green,LOW);
  delay(off);
  
  
  
  
}