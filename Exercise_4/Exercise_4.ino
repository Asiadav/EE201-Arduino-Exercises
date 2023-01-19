// global variables
int num;
float out;

void setup() {
  Serial.begin(9600);
  for(int i = 0; i < 8; i++)
  {
    pinMode(i+2, OUTPUT);
  }
  num = 9;
}

void loop() {
  switch (num){
    case 0: 
      out = 1000000.0;  // 0
      break;
    case 1: 
      out = 1111001.0;  // 1
      break;
    case 2: 
      out = 100100.0;  // 2
      break;
    case 3: 
      out = 110000.0;  // 3
      break;
    case 4: 
      out = 11001.0;  // 4
      break;
    case 5: 
      out = 10010.0;  // 5
      break;
    case 6: 
      out = 10.0;  // 6
      break;
    case 7: 
      out = 1111000.0;  // 7
      break;
    case 8: 
      out = 0.0;  // 8
      break;
    case 9: 
      out = 10000.0;  // 9 
      break;
    default: 
      out = 1111111.0;  // off
      break;
  }


  for (int i = 0; i < 8; i++)
  {
    digitalWrite(i+2, round(out / pow(10, i)) % 10);
  }

  delay(1500);
  num--;
  
}
