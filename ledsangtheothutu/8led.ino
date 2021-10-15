#define _clock 7
#define _latch 6
#define _data 5

void setup() {
  pinMode(_latch, OUTPUT);
  pinMode(_clock, OUTPUT);
  pinMode(_data, OUTPUT);
  
}

void loop() {
  for (int i = 0; i<=8;i++)
  {
    digitalWrite(_latch,0);//chốt ic lại
    shiftOut(_data, _clock, LSBFIRST, i);
    digitalWrite(_latch, 1);//mở chốt
    delay(500);
    }

}
