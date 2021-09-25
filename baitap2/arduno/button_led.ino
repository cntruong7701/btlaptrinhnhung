//định nghĩa 
#define ON 7
#define OFF 6
#define Led 13
void setup() {
  //cấu hình chân
  pinMode (ON,INPUT_PULLUP);
  pinMode (OFF,INPUT_PULLUP);
  pinMode (Led,OUTPUT);
}

void loop() {
  if(digitalRead(ON)==0){
    digitalWrite(Led,1);
    }
  if(digitalRead(OFF)==1){
    digitalWrite(Led,0);
    }

}
