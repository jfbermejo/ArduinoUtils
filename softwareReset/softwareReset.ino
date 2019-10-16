int contador;

// Función de reset
void(* resetFunc)(void)=0;

void setup() {
  // put your setup code here, to run once:

  contador = 0;

  Serial.begin(9600);
  Serial.println("Iniciando Arduino");
}

void loop() {
  // put your main code here, to run repeatedly:

  contador++;

  Serial.print("Esta es la iteración ");
  Serial.println(contador);

  delay(3000);

  if( contador == 10){
    resetFunc();
  }

}
