// Jordan White
// This file is for exercise III of lab 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = digitalRead(13);
  if (sensorValue == HIGH) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }
}
