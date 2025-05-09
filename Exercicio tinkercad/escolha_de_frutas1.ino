// C++ code
//
 
 void setup()
{
 Serial.begin(9600);
}
void loop()
{
Serial.println("Escolha uma fruta");
Serial.println(" 1-Banana");
Serial.println(" 2-Maca");
Serial.println(" 3-Tomate");
Serial.println(" 4-Laranja");
while(!Serial.available());
int opcao = Serial.parseInt();
switch(opcao)
{
  case 1:
    Serial.println("Opcao escolhida Banana");
  break;
   case 2:
    Serial.println("Opcao escolhida maca");
  break;
   case 3:
    Serial.println("Opcao escolhida tomate");
  break;
   case 4:
    Serial.println("Opcao escolhida laranja");
  break;
  default:
  Serial.println("Nao temos essa opcao");
}
Serial.println("");
}