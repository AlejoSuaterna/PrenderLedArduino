void Imprimir(int Value);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

void Imprimir(int Value){
  Serial.print("El sensor de luz esta: ");
  if(Value>470 && Value<600){
    Serial.print("Encendido");
  }
  else if(Value<470){
    Serial.print("Apagado");
  }
  Serial.print("\n");
  Delay(100);
}
