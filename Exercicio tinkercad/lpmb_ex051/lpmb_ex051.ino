/*
5
Faça um programa que receba a medida em centímetros e exiba esse
número em polegadas. OBS: Uma polegada equivale a 2.54
centímetros.
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  float cm;

  Serial.println("Digite a medida em centimetros:");
  while (!Serial.available());
  cm = Serial.parseFloat();

  float polegadas = cm * 2.54;

  Serial.println("Em polegadas: " + String(polegadas));

  delay(5000);// aguarda 5 segundo
  
}