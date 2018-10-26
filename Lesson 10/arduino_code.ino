// Starting of Program

int led = 7;
char val;

void setup()
{

pinMode(led, OUTPUT);  // Digital pin 13 set as output Pin
Serial.begin(9600);
}

void loop()
{
  while (Serial.available() > 0)
  {
  val = Serial.read();
  //Serial.println(val);
  }

  if( val == '1') // Forward
    {
     Serial.print("on\n");
      digitalWrite(led, HIGH);
    }
  else if(val == '2') // Backward
    {
      Serial.print("off\n");
      digitalWrite(led, LOW);
    }
  delay(200);
}

// End of program
