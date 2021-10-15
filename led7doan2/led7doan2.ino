//chân ST_CP
int latchPin = 11;
//chân SH_CP
int clockPin = 13;
//Chân DS
int dataPin = 12;

const int Seg[10] = {
  0b11000000,//0 
  0b11111001,//1 
  0b10100100,//2
  0b10110000,//3
  0b10011001,//4
  0b10010010,//5
  0b10000011,//6
  0b11111000,//7
  0b10000000,//8
  0b10010000,//9
};


void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() { 
  static int point = 0;
  
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, Seg[point]);  
  digitalWrite(latchPin, HIGH);
  
  point = (point + 1) % 10;
  delay(500);
}
