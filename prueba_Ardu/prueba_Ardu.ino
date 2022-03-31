    int LDR = 4; //Pin analógico 4 para la foto resistencia
    int LED = 2; //Pin digital para LED
    int valor; //Acumula el valor del LDR

    int max = 600; //Valor máximo de la fotoresistencia con luz plena
    int min = 470; //Valor mínimo de la foto resuistencia sin luz

void setup() {
    Serial.begin(9600); //Inicializa la comunicacion en serie
    pinMode(LED, OUTPUT); //Digital pin como salida
}

void loop() {
       valor = analogRead(LDR); //Lee el valor del LDR
       valor = constrain(valor, min, max); // Limita el valor entre el máximo y el mínimo
       Serial.println(valor); // Mostrar en monitor serial el valor para ajustar máx y min.
       // Acomodar valor proporcional entre 0 y 255
       // Cuando hay plena luz (máximo) --> Valor = 0
       // Cuando no hay luz (mínimo) --> Valor = 255
       valor = map(valor, max, min, 0, 255);
       analogWrite(LED, valor); // Se enciende LED segun el valor obtenido
}
