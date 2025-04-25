/* 04
Faça um programa que receba o nome, o peso e a altura de uma
pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
/ (altura * altura).
*/

String nome = "";
float peso = 0.0, altura = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Digite seu nome:");
  while (!Serial.available());
  nome = Serial.readString();

  Serial.println("Digite seu peso (kg):");
  while (!Serial.available());
  peso = Serial.parseFloat();

  Serial.println("Digite sua altura (m):");
  while (!Serial.available());
  altura = Serial.parseFloat();

  float imc = peso / (altura * altura);

  Serial.println("Nome: " + nome);
  Serial.println("IMC: " + String(imc));

  delay(5000);// aguarda 5 segundo
  
}