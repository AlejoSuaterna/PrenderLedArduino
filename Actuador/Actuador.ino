const int LEDPin = 13;
const int LDRPin = A0;
const int threshold = 100;

void setup() {
  
  pinMode(LEDPin, OUTPUT);
  pinMode(LDRPin, INPUT); // mín = 470 - Max = 600.
}

void loop() {
  
   int input = analogRead(LDRPin);
   if (input > threshold) {
      digitalWrite(LEDPin, HIGH);
   }
   else {
      digitalWrite(LEDPin, LOW);
   }
}
