// C++ code
//
 int idade = 0;
 void setup()
{
 Serial.begin(9600);
}
 void loop()
{
  Serial.println("Qual sua idade");
  while (!Serial.available());
  idade = Serial.parseInt(); 
  if (idade >= 0 && idade <=9){
  Serial.println("Apenas filmes infantis");
  } else if (idade >= 10 && idade <= 13){
  Serial.println("Filmes infantis e infantojuvenis");
  } else if (idade >= 14 && idade <=17){
  Serial.println("Filmes ate a classificaçao 14 anos");
  } else if (idade >= 18 && idade <=59){
  Serial.println("Todos os tipos de filme");
  } else if (idade >= 60 && idade < 120){
  Serial.println("Todos os tipos de filmes e ainda ganha desconto");
  } else {
  Serial.println("Idade invalida coloque novamente sua idade");
  } 
  delay(3000);
}