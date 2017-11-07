int i = 0;
unsigned long CzasOne = 0;
unsigned long CzasTwo = 0;

void Zero()
{
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  if ((millis() - CzasOne) <= 1000 ) {
    i++;
  }
  else {
     Serial.print("czestotliwosc pradu w sieci = ");
     Serial.print(i/2);
     Serial.println("Hz");
    CzasOne = millis();
    i = 0;
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT);
  attachInterrupt(0, Zero, FALLING);
  CzasOne = millis();
}

void loop() {
  // Serial.println(i);
}
