const int buttonPin = 8;
const int del = 9;
const int spacePin = 10;
const int a1 = 5;
const int b1 = 2;
const int a2 = 6;
const int b2 = 3;
const int a3 = 7;
const int b3 = 4;
int a1State = 0;
int a2State = 0;
int a3State = 0;
int b1State = 0;
int b2State = 0;
int b3State = 0;
int delState = 0;
int buttonState = 0;
int lastButtonState = 0;
int spaceState = 0;
int numberFlag = 0;

void setup() {
  pinMode(a1, INPUT);
  pinMode(a2, INPUT);
  pinMode(a3, INPUT);
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(spacePin, INPUT);
  pinMode(del, INPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  delState = digitalRead(del);
  spaceState = digitalRead(spacePin);

  if (a1State == 0) { a1State = digitalRead(a1); }
  else { a1State = 1; }

  if (a2State == 0) { a2State = digitalRead(a2); }
  else { a2State = 1; }

  if (a3State == 0) { a3State = digitalRead(a3); }
  else { a3State = 1; }

  if (b1State == 0) { b1State = digitalRead(b1); }
  else { b1State = 1; }

  if (b2State == 0) { b2State = digitalRead(b2); }
  else { b2State = 1; }

  if (b3State == 0) { b3State = digitalRead(b3); }
  else { b3State = 1; }

  if (spaceState == HIGH) { // Checking if space button is pressed
    if (numberFlag == 0) { Serial.print(" "); }
  }

  if (delState == HIGH) {
    a1State = 0;
    a2State = 0;
    a3State = 0;
    b1State = 0;
    b2State = 0;
    b3State = 0;
  }
    if ((a1State == 1) && (b1State == 0) && (a2State == 0) && (b2State == 0) && (a3State == 0) && (b3State == 0)) {
      if (numberFlag == 0) { Serial.print("a"); }
      if (numberFlag == 1) { Serial.print("1"); }
    }
    if ((a1State == 1) && (b1State == 0) && (a2State == 1) && (b2State == 0) && (a3State == 0) && (b3State == 0)) {
      if (numberFlag == 0) { Serial.print("b"); }
      if (numberFlag == 1) { Serial.print("2"); }
    }
    if ((a1State == 1) && (b1State == 1) && (a2State == 0) && (b2State == 0) && (a3State == 0) && (b3State == 0)) {
      if (numberFlag == 0) { Serial.print("c"); }
      if (numberFlag == 1) { Serial.print("3"); }
    }
    if ((a1State == 1) && (b1State == 1) && (a2State == 0) && (b2State == 1) && (a3State == 0) && (b3State == 0)) {
      if (numberFlag == 0) { Serial.print("d"); }
      if (numberFlag == 1) { Serial.print("4"); }
    }
    if ((a1State == 1) && (b1State == 0) && (a2State == 0) && (b2State == 1) && (a3State == 0) && (b3State == 0)) {
      if (numberFlag == 0) { Serial.print("e"); }
      if (numberFlag == 1) { Serial.print("5"); }
    }
    if ((a1State == 1) && (b1State == 1) && (a2State == 1) && (b2State == 0) && (a3State == 0) && (b3State == 0)) {
      if (numberFlag == 0) { Serial.print("f"); }
      if (numberFlag == 1) { Serial.print("6"); }
    }
    if ((a1State == 1) && (b1State == 1) && (a2State == 1) && (b2State == 1) && (a3State == 0) && (b3State == 0)) {
      if (numberFlag == 0) { Serial.print("g"); }
      if (numberFlag == 1) { Serial.print("7"); }
    }
    if ((a1State == 1) && (b1State == 0) && (a2State == 1) && (b2State == 1) && (a3State == 0) && (b3State == 0)) {
      if (numberFlag == 0) { Serial.print("h"); }
      if (numberFlag == 1) { Serial.print("8"); }
    }
    if ((a1State == 0) && (b1State == 1) && (a2State == 1) && (b2State == 0) && (a3State == 0) && (b3State == 0)) {
      if (numberFlag == 0) { Serial.print("i"); }
      if (numberFlag == 1) { Serial.print("9"); }
    }
    if ((a1State == 0) && (b1State == 1) && (a2State == 1) && (b2State == 1) && (a3State == 0) && (b3State == 0)) { Serial.print("j"); }
    if ((a1State == 1) && (b1State == 0) && (a2State == 0) && (b2State == 0) && (a3State == 1) && (b3State == 0)) { Serial.print("k"); }
    if ((a1State == 1) && (b1State == 0) && (a2State == 1) && (b2State == 0) && (a3State == 1) && (b3State == 0)) { Serial.print("l"); }
    if ((a1State == 1) && (b1State == 1) && (a2State == 0) && (b2State == 0) && (a3State == 1) && (b3State == 0)) { Serial.print("m"); }
    if ((a1State == 1) && (b1State == 1) && (a2State == 0) && (b2State == 1) && (a3State == 1) && (b3State == 0)) { Serial.print("n"); }
    if ((a1State == 1) && (b1State == 1) && (a2State == 1) && (b2State == 1) && (a3State == 0) && (b3State == 1)) { Serial.print("ñ"); }
    if ((a1State == 1) && (b1State == 0) && (a2State == 0) && (b2State == 1) && (a3State == 1) && (b3State == 0)) { Serial.print("o"); }
    if ((a1State == 1) && (b1State == 1) && (a2State == 1) && (b2State == 0) && (a3State == 1) && (b3State == 0)) { Serial.print("p"); }
    if ((a1State == 1) && (b1State == 1) && (a2State == 1) && (b2State == 1) && (a3State == 1) && (b3State == 0)) { Serial.print("q"); }
    if ((a1State == 1) && (b1State == 0) && (a2State == 1) && (b2State == 1) && (a3State == 1) && (b3State == 0)) { Serial.print("r"); }
    if ((a1State == 0) && (b1State == 1) && (a2State == 1) && (b2State == 0) && (a3State == 1) && (b3State == 0)) { Serial.print("s"); }
    if ((a1State == 0) && (b1State == 1) && (a2State == 1) && (b2State == 1) && (a3State == 1) && (b3State == 0)) { Serial.print("t"); }
    if ((a1State == 1) && (b1State == 0) && (a2State == 0) && (b2State == 0) && (a3State == 1) && (b3State == 1)) { Serial.print("u"); }
    if ((a1State == 1) && (b1State == 0) && (a2State == 1) && (b2State == 0) && (a3State == 1) && (b3State == 1)) { Serial.print("v"); }
    if ((a1State == 0) && (b1State == 1) && (a2State == 1) && (b2State == 1) && (a3State == 0) && (b3State == 1)) { Serial.print("w"); }
    if ((a1State == 1) && (b1State == 1) && (a2State == 0) && (b2State == 0) && (a3State == 1) && (b3State == 1)) { Serial.print("x"); }
    if ((a1State == 1) && (b1State == 1) && (a2State == 0) && (b2State == 1) && (a3State == 1) && (b3State == 1)) { Serial.print("y"); }
    if ((a1State == 1) && (b1State == 0) && (a2State == 0) && (b2State == 1) && (a3State == 1) && (b3State == 1)) { Serial.print("z"); }
    if ((a1State == 0) && (b1State == 0) && (a2State == 1) && (b2State == 1) && (a3State == 1) && (b3State == 0)) { Serial.print("!"); }
    if ((a1State == 0) && (b1State == 0) && (a2State == 0) && (b2State == 0) && (a3State == 1) && (b3State == 0)) { Serial.print("'"); }
    if ((a1State == 0) && (b1State == 0) && (a2State == 1) && (b2State == 0) && (a3State == 0) && (b3State == 0)) { Serial.print("."); }
    if ((a1State == 0) && (b1State == 0) && (a2State == 0) && (b2State == 0) && (a3State == 1) && (b3State == 1)) { Serial.print("-"); }
    if ((a1State == 0) && (b1State == 0) && (a2State == 1) && (b2State == 1) && (a3State == 0) && (b3State == 1)) { Serial.print(","); }
    if ((a1State == 0) && (b1State == 0) && (a2State == 1) && (b2State == 0) && (a3State == 1) && (b3State == 1)) { Serial.print("?"); }
    if ((a1State == 0) && (b1State == 1) && (a2State == 0) && (b2State == 1) && (a3State == 1) && (b3State == 1)) {
      if (numberFlag == 0) { numberFlag = 1; }
      else { numberFlag = 0; }
    }

    a1State = 0;
    a2State = 0;
    a3State = 0;
    b1State = 0;
    b2State = 0;
    b3State = 0;
  }
  delay(50);
  lastButtonState = buttonState;
}
