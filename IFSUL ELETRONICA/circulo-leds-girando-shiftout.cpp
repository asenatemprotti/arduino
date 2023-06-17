#define data 2
#define latch 3
#define clock 4

void setup() {
  configuraleds ();
 
 
}

void loop () {
  shiftOut (data, clock, MSBFIRST, 0X10);
  pulso (latch);
  delay (250);

shiftOut (data, clock, MSBFIRST, 0X20);
  pulso (latch);
  delay (250);

shiftOut (data, clock, MSBFIRST, 0X40);
  pulso (latch);
  delay (250);

shiftOut (data, clock, MSBFIRST, 0X80);
  pulso (latch);
  delay (250);

    shiftOut (data, clock, MSBFIRST, 0X01);
  pulso (latch);
  delay (250);

shiftOut (data, clock, MSBFIRST, 0X02);
  pulso (latch);
  delay (250);

shiftOut (data, clock, MSBFIRST, 0X04);
  pulso (latch);
  delay (250);

shiftOut (data, clock, MSBFIRST, 0X08);
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
