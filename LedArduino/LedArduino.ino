void Imprimir(int Value);
void Presentacion();
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Presentacion();
}

void loop() {
  Imprimir(Value);
}
void Presentacion(){
  Serial.print("BIENVENIDO USUARIO\n\n");
  Serial.print("Este programa sensa la luz y a partir de esta activa un actuador\n");
  Serial.print("Los integrantes del grupo son:\n");
  Serial.print("Vanessa Cardenas    Jaime Peraza   Alejandro Suaterna   Mateo Torres\n");
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
  delay(100);
}
