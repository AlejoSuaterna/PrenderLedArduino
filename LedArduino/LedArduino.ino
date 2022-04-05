    int LDR = 0; //Pin analógico 4 para la foto resistencia
    int LED = 2; //Pin digital para LED
    int valor; //Acumula el valor del LDR

    int maximum = 600; //Valor máximo de la fotoresistencia con luz plena
    int minimum = 470; //Valor mínimo de la foto resuistencia sin luz
    
void Imprimir(int Value);
void Presentacion();
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Inicializa la comunicacion en serie
  pinMode(LED, OUTPUT); //pin digital como salida
  Presentacion();
}

void loop() {
  valor = analogRead(LDR); //Lee el valor del LDR
  valor = constrain(valor, minimum, maximum); // Limita el valor entre el máximo y el mínimo
  Imprimir(valor);
  // Mostrar en monitor serial el valor para ajustar máx y min.
  // Acomodar valor proporcional entre 0 y 255
  // Cuando hay plena luz (máximo) --> Valor = 0
  // Cuando no hay luz (mínimo) --> Valor = 255
  valor = map(valor, maximum, minimum, 0, 255);
  
  analogWrite(LED, valor); // Se enciende LED segun el valor obtenido
}
void Presentacion(){
  Serial.print("BIENVENIDO USUARIO\n\n");
  Serial.print("Este programa sensa la luz y a partir de esta activa un actuador\n");
  Serial.print("Los integrantes del grupo son:\n");
  Serial.print("Vanessa Cardenas    Jaime Peraza   Alejandro Suaterna   Mateo Torres\n");
} 
void Imprimir(int Value){
  Serial.print("El sensor de luz esta: ");
  if(Value>=470 && Value<500){
    Serial.print("Encendido");
  }
  else {
    Serial.print("Apagado");
  }
  Serial.print("\n");
  delay(100);
}
