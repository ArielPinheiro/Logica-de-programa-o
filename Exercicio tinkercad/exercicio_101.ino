float preco = 0;
float percentual = 0;
float precoVenda = 0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println("Qual o preco de compra do produto?");
  while (!Serial.available());
  preco = Serial.parseFloat();
  
  Serial.println("Qual o percentual de lucro (%):");
  while (!Serial.available());
  percentual = Serial.parseFloat();
  
  precoVenda = preco + (preco * (percentual / 100));
  
  Serial.print("Preco de venda: R$ ");
  Serial.println(precoVenda);

  if (percentual <= 50) {
    Serial.println("Atencao: o produto sera vendido com margem de lucro muito pequena.");
  }

  delay(5000);
}