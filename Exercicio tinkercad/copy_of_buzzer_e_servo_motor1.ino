/*
tipoDeRetorno nomeDaVariavel*/

#include <Servo.h>

int ledVerde = 2;
int ledVermelho = 8;
int ledAzul1 = 4;
int ledAzul2 = 7;
int ledAzul3 = 13;
Servo porta;

int acertos = 0;

void setup() {
  Serial.begin(9600);

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
  pinMode(ledAzul3, OUTPUT);

  porta.attach(9); // Pino 9 para o servo
  porta.write(0); // Porta fechada

  randomSeed(analogRead(0));
}

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700) {
  for (int i = 1; i <= qtdPontos; i++) {
    Serial.print(".");
    delay(tempo);
  }
  Serial.println();
}

void desenhaCabecalho() {
  Serial.println("\n\n--- JOGO DA SABEDORIA DESBALANCEADA ---\n");
}

void loop() {
  acertos = 0;

  desenhaCabecalho();
  Serial.println("AVISO: ACERTE 3 VEZES PARA ENTRAR NA FORTALEZA!");
  Serial.println("Digite 3 para começar.");

  while (!Serial.available());
  int iniciar = Serial.parseInt();
  if (iniciar != 3) return;

  // Apaga todos os LEDs azuis
  digitalWrite(ledAzul1, LOW);
  digitalWrite(ledAzul2, LOW);
  digitalWrite(ledAzul3, LOW);

  while (acertos < 3) {
    Serial.println("Digite um palpite de 1 a 6:");
    while (!Serial.available());
    int palpite = Serial.parseInt();
    int dado = random(1, 7);

    desenhaPontinhos();

    Serial.println("Seu palpite: " + String(palpite));
    Serial.println("Numero do dado: " + String(dado));

    if (palpite == dado) {
      Serial.println("Parabens, voce acertou!\n");
      digitalWrite(ledVerde, HIGH);
      delay(1000);
      digitalWrite(ledVerde, LOW);
      acertos++;

      if (acertos == 1) digitalWrite(ledAzul1, HIGH);
      else if (acertos == 2) digitalWrite(ledAzul2, HIGH);
      else if (acertos == 3) digitalWrite(ledAzul3, HIGH);
    } else {
      Serial.println("Errou! Desafio reiniciado!\n");
      digitalWrite(ledVermelho, HIGH);
      delay(2000);
      digitalWrite(ledVermelho, LOW);
      acertos = 0;
      digitalWrite(ledAzul1, LOW);
      digitalWrite(ledAzul2, LOW);
      digitalWrite(ledAzul3, LOW);
    }
  }

  // Abre a porta com o servo motor
  Serial.println("Você conquistou as joias da sabedoria! A porta se abre...");
  for (int pos = 0; pos <= 90; pos += 1) {
    porta.write(pos);
    delay(15);
  }

  delay(5000); // Espera antes de reiniciar
  for (int pos = 90; pos >= 0; pos -= 1) {
    porta.write(pos);
    delay(15);
  }
}