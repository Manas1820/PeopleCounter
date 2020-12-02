int total = 0;
int a = 8;
int b = 9;

void setup()
{  
  pinMode(a,INPUT);
  pinMode(b,INPUT);
  Serial.begin(9600);
}

void show()
{
  Serial.print(total);
}
void loop() 
{
  if (digitalRead(b) == LOW)
  {
    Serial.println("Person entered, number of peolpe in the room are: ");
    total++;
    Serial.println(total);
    delay(1000);
  } 
  else if (digitalRead(a) == LOW)
  {
    Serial.println("Person exited, number of people in the room are:");
    total--;
    Serial.println(total);
    delay(1000);
  }
}
