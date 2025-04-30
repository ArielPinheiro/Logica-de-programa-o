// C++ code
//
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
  
  
  
  if (Idade >= 16){//se sim da certo 
  Serial.println("Voto Obrigatorio");
  }else{// se não da essa resposta aqui:
  Serial.println("Sem idade para votar");
  }
  delay(5000);
}