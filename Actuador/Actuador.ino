const int INDICATOR_LED = 13;
const int SENSOR = A0;
const int THRESHHOLD = 100;

void setup() {
  
  pinMode(INDICATOR_LED , OUTPUT);
  pinMode(SENSOR, INPUT); // mín = 470 - Max = 600.
}

void loop() {
  
   int input = analogRead(SENSOR);
   if (input > THRESHHOLD) {
      digitalWrite(INDICATOR_LED, HIGH);
   }
   else {
      digitalWrite(INDICATOR_LED, LOW);
   }
}
