#define data 2
#define latch 3
#define clock 4
const byte dados []={0X80,0XC0,0XE0, 0XF0, 0XF8, 0XFC,0XFE,0XFF, };
void setup() {
 configuraleds ();
 shiftOut (data, clock, MSBFIRST, 0X00);
 pulso (latch);
 
}

void loop () {
  for (int i=0; i<=7; i++){
  shiftOut (data, clock, MSBFIRST, dados[i]);
  pulso (latch);
  delay (250);
  }

  for (int i=7; i>=0; i--){
  shiftOut (data, clock, MSBFIRST, dados[i]);
  pulso (latch);
  delay (250);
  }
shiftOut (data, clock, MSBFIRST, 0X00);
 pulso (latch);
 delay (250);
}

void configuraleds (){
  pinMode (data, OUTPUT);
  pinMode (latch, OUTPUT);
  pinMode (clock, OUTPUT);
  digitalWrite (latch, 0);
  digitalWrite (clock, 0);
}

void pulso (int pino){
  digitalWrite (pino, 1);
  digitalWrite (pino, 0);
}
