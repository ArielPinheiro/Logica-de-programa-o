// C++ code
//
// Programa para cadastrar frutas via Serial

String frutas[5];  // Vetor para armazenar 5 frutas

void setup() {
  Serial.begin(9600);
  Serial.println("****** PROGRAMA CADASTRO DE FRUTAS ******");
}

void loop() {
  // Cadastro das frutas
  for (int i = 0; i < 5; i++) {
    Serial.print("Digite o nome da fruta ");
    Serial.print(i + 1);
    Serial.println(":");
  }
    // Espera o usuário digitar algo
    while (Serial.available() == 0) {
      // aguarda entrada
    }
}