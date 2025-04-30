/*
7
Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
funcionário.
*/

String nome = "", cargo = "";
float salario = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Digite o nome do funcionario:");
  while (!Serial.available());
  nome = Serial.readString();

  Serial.println("Digite o cargo:");
  while (!Serial.available());
  cargo = Serial.readString();

  Serial.println("Digite o salario:");
  while (!Serial.available());
  salario = Serial.parseFloat();

  float novoSalario = salario * 1.10;

  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.println("Novo salario com 10% de aumento: " + String(novoSalario));

  delay(5000);// aguarda 5 segundo

}

