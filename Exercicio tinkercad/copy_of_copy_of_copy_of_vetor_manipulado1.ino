/*
Faça um programa para simular a organização de uma festa para o cadastro de convidados, 
registrando as seguintes informações:

  * Nome
  * Email
  * Idade

O programa deve solicitar os dados via monitor serial, 
armazená-los em vetores, e ao final do cadastro exibir uma listagem completa dos convidados. 

OBS: A festa contratada será vip para apenas 7 convidados
*/
String Nome[6];
String Email[6];
float Idade[6];
void setup() {
  Serial.begin(9600);
  Serial.println("****** CADASTRO DE CONVIDADOS ******");
}

void loop() {//cadastra um convidado
  for (int i = 0; i <= 6; i++) {
    Serial.println("Digite Seu Nome ");
    while (!Serial.available());   
    Nome[i] = Serial.readString();
    //emails de convidados
    Serial.println("Digite o seu email ");
    while (!Serial.available());   
    Email[i] = Serial.readString();
    //Idade dos convidados
    Serial.println("Digite sua idade ");
    while (!Serial.available());   
     Idade[i] = Serial.parseFloat();
  }

  // Mostrar as frutas cadastradas
  Serial.println("Convidados Da Festa:");

  for (int i = 0; i <= 6; i+= 1) {
    Serial.println(String(i + 1) + "- O Nome:" + String(Nome[i]));
    Serial.println(String(i + 1) + "- Email:" + String(Email[i]));
    Serial.println(String(i + 1) + "- Idade:" + String(Idade[i]));
    Serial.println("---");
  }

  Serial.println("Cadastro finalizado. Aguarde 20 segundos para reiniciar...");
  delay(20000);  
}