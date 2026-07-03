const int ldrPin = A0;     // LDR connected to analog pin A0
const int ledPin = 9;      // LED connected to digital pin 9
const int threshold = 600; // Adjust this value based on your lighting conditions

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); // Turn on LED in darkness
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED in light
  }

  delay(500); // Read every half second
}
