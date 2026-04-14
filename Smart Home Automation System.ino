#define BTN1 0
#define BTN2 1
#define BTN3 2
#define BTN4 3

#define RELAY1 9
#define RELAY2 8
#define RELAY3 7
#define RELAY4 6

bool state1 = 0;
bool state2 = 0;
bool state3 = 0;
bool state4 = 0;

bool last1 = HIGH;
bool last2 = HIGH;
bool last3 = HIGH;
bool last4 = HIGH;

void setup() {
  pinMode(BTN1, INPUT);
  pinMode(BTN2, INPUT);
  pinMode(BTN3, INPUT);
  pinMode(BTN4, INPUT);

  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);

  digitalWrite(RELAY1, LOW);
  digitalWrite(RELAY2, LOW);
  digitalWrite(RELAY3, LOW);
  digitalWrite(RELAY4, LOW);
}

void loop() {

  // BUTTON 1
  bool r1 = digitalRead(BTN1);
  if (r1 == LOW && last1 == HIGH) {
    state1 = !state1;
    digitalWrite(RELAY1, state1);
    delay(200);
  }
  last1 = r1;

  // BUTTON 2
  bool r2 = digitalRead(BTN2);
  if (r2 == LOW && last2 == HIGH) {
    state2 = !state2;
    digitalWrite(RELAY2, state2);
    delay(200);
  }
  last2 = r2;

  // BUTTON 3
  bool r3 = digitalRead(BTN3);
  if (r3 == LOW && last3 == HIGH) {
    state3 = !state3;
    digitalWrite(RELAY3, state3);
    delay(200);
  }
  last3 = r3;

  // BUTTON 4
  bool r4 = digitalRead(BTN4);
  if (r4 == LOW && last4 == HIGH) {
    state4 = !state4;
    digitalWrite(RELAY4, state4);
    delay(200);
  }
  last4 = r4;
} 
