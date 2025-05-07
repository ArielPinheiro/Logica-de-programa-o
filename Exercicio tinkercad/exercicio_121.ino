void setup() {
  Serial.begin(9600);
}
void loop() {
  
  Serial.println("Digite um numero:");
  while (!Serial.available());

  int numero = Serial.parseInt();
  while (Serial.available()) Serial.read(); // Limpa o buffer

  if (numero % 2 == 0) {
    Serial.println("Par");
  } else {
    Serial.println("Impar");
  }

  delay(2000); 
}