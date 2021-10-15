int latchPin = 8;
//chân SH_CP
int clockPin = 12;
//Chân DS 
int dataPin = 11;
const int Seg[10] = {
  0b10111111,//0 - các thanh từ f-a sáng
  0b10000110,//1
  0b11011011,//2
  0b11001111,//3
  0b11100110,//4
  0b11101101,//5
  0b11111100,//6
  0b10000111,//7
  0b11111111,//8
  0b11101111,//9
};


void setup() {
  //Bạn BUỘC PHẢI pinMode các chân này là OUTPUT
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() { 
  static int point = 0;
  
  //shiftout - start
  digitalWrite(latchPin, LOW);
  //Xuất bảng ký tự ra cho Module LED
  shiftOut(dataPin, clockPin, MSBFIRST, Seg[point]);  
  digitalWrite(latchPin, HIGH);
  //shiftout - end
  
  point = (point + 1) % 10; // Vòng tuần hoàn từ 0--9
  delay(500);
}
