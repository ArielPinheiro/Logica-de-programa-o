/*
6
Faça um programa que receba a medida em polegadas e exiba esse número em
centímetros.
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  float pol = 0;

  Serial.println("Digite a medida em polegadas:");
  while (!Serial.available());
  pol = Serial.parseFloat();

  float cm = pol * 2.54;

  Serial.println("Em centimetros: " + String(cm));

  delay(5000);// aguarda 5 segundo
}
