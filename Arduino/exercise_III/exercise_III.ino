// Jordan White
// This file is for exercise III of lab 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(0, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(0);

  if (state == LOW) {
    Serial.println("It's 2023");
  }

  if (state == HIGH) {
    Serial.println("Hello World!");
  }
}
