void setup() {
  Serial.begin(9600);
  while (!Serial); // Aguarda conexão serial

  Serial.println("Digite um numero inteiro:");
  while (!Serial.available());

  int numero = Serial.parseInt();

  if (numero >= 0) {
    Serial.println("O numero eh positivo.");
  } else {
    Serial.println("O numero eh negativo.");
  }
}

void loop() {
  // Vazio porque tudo está no setup()
}