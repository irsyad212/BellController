#define A 6
#define B 7

#define DELAY 250

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  digitalWrite(A, 1);
  digitalWrite(B, 0);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 0);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 1);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 0);
  delay(DELAY/2);
  digitalWrite(A, 1);
  digitalWrite(B, 0);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 0);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 1);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 0);
  delay(DELAY/2);
  digitalWrite(A, 1);
  digitalWrite(B, 0);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 0);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 1);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 0);
  delay(DELAY/2);
  digitalWrite(A, 1);
  digitalWrite(B, 0);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 0);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 1);
  delay(DELAY/2);
  digitalWrite(A, 0);
  digitalWrite(B, 0);
  delay(DELAY/2);
}

void loop() {
  digitalWrite(A, 1);
  digitalWrite(B, 0);
  delay(DELAY);
  digitalWrite(A, 0);
  digitalWrite(B, 1);
  delay(DELAY);
}
