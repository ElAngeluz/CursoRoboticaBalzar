const int PIR1_PIN = 3;
const int LED1_PIN = 4;

const int PIR2_PIN = 6;
const int LED2_PIN = 7;

void setup() {
  pinMode(PIR1_PIN, INPUT);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(PIR2_PIN, INPUT);
  pinMode(LED2_PIN, OUTPUT);    
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED1_PIN,digitalRead(PIR1_PIN));
  digitalWrite(LED2_PIN,digitalRead(PIR2_PIN));
  delay(20);
}