#define pushButtonPin 16  //Externally pulled down
#define motorPin1 18
#define motorPin2 19
// #define ledPin 12

bool motorState = LOW;
bool lastButtonState;
bool currentButtonState;

void setup() {
  pinMode(pushButtonPin, INPUT);
  pinMode(motorPin1, OUTPUT);  //configure both pin as an outputs
  pinMode(motorPin2, OUTPUT);
  // pinMode(ledPin, OUTPUT);
  digitalWrite(motorPin2, LOW);
  // digitalWrite(ledPin, HIGH);
}

void loop() {
  lastButtonState = currentButtonState;
  currentButtonState = digitalRead(pushButtonPin);

  if (lastButtonState == HIGH && currentButtonState == LOW) {
    motorState = !motorState;

    // digitalWrite(ledPin, motorState);
    digitalWrite(motorPin1,motorState);
  }

  delay(100);
}