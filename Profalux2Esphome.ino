#define DOWN D6
#define STOP D7
#define UP D8

#define PULSE_DELAY 500
#define WAIT_DELAY 10000

void setup() {
  pinMode(UP, OUTPUT);
  pinMode(STOP, OUTPUT);
  pinMode(DOWN, OUTPUT);
  Serial.begin(9600);
}

void pressButtonAndWait(int pin) {
  Serial.println("DOWN");
  delay(10000);
  digitalWrite(DOWN, HIGH);
  delay(500);
  digitalWrite(DOWN, LOW);
}

void loop() {
  Serial.println("DOWN");
  pressButtonAndWait(DOWN);
  Serial.println("STOP");
  pressButtonAndWait(STOP);
  Serial.println("UP");
  pressButtonAndWait(UP);
}
