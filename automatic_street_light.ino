int ldrPin = A0;
int ledPin = 13;

int lightThreshold = 500;
int ldrValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin);

  Serial.print("Light Intensity: ");
  Serial.println(ldrValue);

  if (ldrValue < lightThreshold) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Street Light: ON");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Street Light: OFF");
  }

  delay(1000);
}
