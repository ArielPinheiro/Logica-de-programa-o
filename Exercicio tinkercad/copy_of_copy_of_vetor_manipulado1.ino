// C++ code
//
String frutas[5];
float precoFrutas[5];
float qntfrutas[5];
void setup() {
  Serial.begin(9600);
  Serial.println("****** PROGRAMA CADASTRO DE FRUTAS ******");
}

void loop() {//cadastra uma fruta
  for (int i = 0; i < 5; i++) {
    Serial.println("Digite o nome da fruta para cadastrar ");
    while (!Serial.available());   
      frutas[i] = Serial.readString();
    //quantas frutas tem no estoque
    Serial.println("Digite a quantidade de frutas no estoque ");
    while (!Serial.available());   
      qntfrutas[i] = Serial.parseFloat();
    //cadastrar o preço da frutas
    Serial.println("Digite o preco da fruta para cadastrar ");
    while (!Serial.available());   
     precoFrutas[i] = Serial.parseFloat();
  }

  // Mostrar as frutas cadastradas
  Serial.println("Frutas cadastradas:");

  for (int i = 0; i < 5; i+= 1) {
    Serial.println(String(i + 1) + "- O Nome:" + String(frutas[i]));
    Serial.println(String(i + 1) + "- No Estoque:" + String(qntfrutas[i]));
    Serial.println(String(i + 1) + "- O Preco:" + String(precoFrutas[i]));
    Serial.println("---");
  }

  Serial.println("Cadastro finalizado. Aguarde 10 segundos para reiniciar...");
  delay(2000);  
}