int ldrPin = A0;
int ledPin = 9;
int threshold = 500;  // Adjust based on simulation brightness

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); // Turn ON light when it's dark
  } else {
    digitalWrite(ledPin, LOW);  // Turn OFF light when it's bright
  }

  delay(500);
}
