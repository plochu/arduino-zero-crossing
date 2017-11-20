float i = 0;
unsigned long CzasOne = 0;

void Zero()
{
  if ((millis() - CzasOne) <= 1000 ) {
    i++;
  }
  else {
     // Serial.print("czestotliwosc pradu w sieci = ");
     Serial.println(i/2);
     // Serial.println("Hz");
    CzasOne = millis();
    i = 0;
  }
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
}

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT);
  attachInterrupt(0, Zero, FALLING);
  CzasOne = millis();
  Serial.println("start");
}

void loop() {
}
