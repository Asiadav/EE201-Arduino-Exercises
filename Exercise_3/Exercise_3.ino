void setup() {
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(10))
  {
    Serial.println("Hello World!");
  }
  else 
  {
    Serial.println("It's 2023");
  }
  delay(1000);
}
