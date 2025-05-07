void setup() {
  Serial.begin(9600);
}
  
void loop() {
  long numero;
  Serial.println("Digite um numero:");
  while (!Serial.available());

  numero = Serial.parseInt();
  while (Serial.available());

  if (numero % 2 == 0) {
    Serial.print("Numero par: ");
    Serial.println(numero);
  }

  delay(2000); // Espera 2 segundos antes de repetir
}