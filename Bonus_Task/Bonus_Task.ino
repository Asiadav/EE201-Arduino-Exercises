void setup() {
  for(int i = 0; i < 8; i++)
  {
    pinMode(i+2, OUTPUT);
  }

  pinMode(A0, INPUT);
}

void loop() {
  int num = map(analogRead(A0), 0, 1023, 0, 9);
  int out;
  switch (num){
    case 0: 
      out = 1000000;  // 0
      break;
    case 1: 
      out = 1111001;  // 1
      break;
    case 2: 
      out = 0100100;  // 2
      break;
    case 3: 
      out = 0110000;  // 3
      break;
    case 4: 
      out = 0011001;  // 4
      break;
    case 5: 
      out = 0010010;  // 5
      break;
    case 6: 
      out = 0000010;  // 6
      break;
    case 7: 
      out = 1111000;  // 7
      break;
    case 8: 
      out = 0000000;  // 8
      break;
    case 9: 
      out = 0010000;  // 9 
      break;
    default: 
      out = 1111111;  // off
      break;
  }

  for (int i = 0; i < 8; i++)
  {
    digitalWrite(i+2, int(out / pow(10, i)) % 10);
  }

  delay(1500);
}
