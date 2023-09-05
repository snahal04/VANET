void setup()

{

  // put your setup code here, to run once:

  Serial.begin (9600);

  pinMode (2 , INPUT);

}

void loop()

{

  // put your main code here, to run repeatedly:

  int value = analogRead(A1);

  int digital = digitalRead(2);

 

  Serial.println (value);

  Serial.println (digital);

  delay(2000);

}
