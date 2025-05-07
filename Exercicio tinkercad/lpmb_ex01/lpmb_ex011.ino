/*
1-Faça um programa que receba a idade de uma pessoa em anos e
imprima essa idade em: Meses, Dias, Horas, Minutos.
*/

void setup() {
  Serial.begin(9600);
}

void loop() {

 int idade;
  
  //Entrada de Dados 
  Serial.println("Digite sua idade em anos:");
  while (!Serial.available());
  idade = Serial.parseInt();
  
  //Processamento
  long meses = idade * 12;// meses em um ano
  long dias = idade * 365;// dias em um ano
  long horas = dias * 24;// horas em um ano
  long minutos = horas * 60;// minutos em um ano
  
  //Saida-----
  Serial.println("Sua idade em meses: " + String(meses));
  Serial.println("Sua idade em dias: " + String(dias));
  Serial.println("Sua idade em horas: " + String(horas));
  Serial.println("Sua idade em minutos: " + String(minutos));
  
  delay(5000);// aguarda 5 segundo
}