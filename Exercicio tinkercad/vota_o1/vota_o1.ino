int Idade;
void setup()
{
  
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual Sua Idade");
  while (!Serial.available());
  Idade = Serial.parseInt();
  Serial.println("Idade: " + String(Idade));
  
  
  
  if (Idade >= 18){//se sim da certo 
  Serial.println("Maior de idade");
  }else{// se não da essa resposta aqui:
  Serial.println("Menor de idade");
  }
  delay(5000);
}