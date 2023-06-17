#define LATCH 3
#define DATA 2
#define CLOCK 4

void setup() {
  pinMode (12, INPUT);
  pinMode (DATA, OUTPUT);
  pinMode (LATCH, OUTPUT);
  pinMode (CLOCK, OUTPUT);
  pinMode (13, OUTPUT);
  digitalWrite (CLOCK, 0);
  digitalWrite (LATCH, 0);
 
}

void loop() {


  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (CLOCK);
  pulse (CLOCK);
  pulse (CLOCK);
  pulse (CLOCK);
  pulse (CLOCK);
  pulse (CLOCK);
  digitalWrite (DATA, 1);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
 
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);


  digitalWrite (DATA, 1);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 1);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 1);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 1);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 1);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 1);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 1);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 1);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);

  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
  digitalWrite (DATA, 0);
  pulse (CLOCK);
  pulse (LATCH);
  delay (150);
}

void pulse (int pino){
  digitalWrite (pino, 1);
  digitalWrite (pino, 0);
}
