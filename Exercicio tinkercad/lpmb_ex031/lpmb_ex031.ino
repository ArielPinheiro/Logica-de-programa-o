/*
Faça um programa que receba um número e exiba o seu dobro.



*/
void setup() {
  Serial.begin(9600);
}

void loop() {
  int numero;

  Serial.println("Digite um numero:");
  while (!Serial.available());
  numero = Serial.parseInt();

  Serial.println("O dobro de " + String(numero) + " e " + String(numero * 2));

  delay(5000);// aguarda 5 segundo
}
