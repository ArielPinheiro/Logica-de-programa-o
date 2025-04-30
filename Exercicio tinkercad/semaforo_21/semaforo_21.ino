String cor = "";
String vermelho = "";
String verde = "";

void setup()
{
  Serial.begin(9600);
}
  void loop()
{
  Serial.println("A cor do Sinal e Verde ou Vermelho?");
  while ( !Serial.available() ); 
  cor = Serial.readString();
  
  if (cor == "vermelho" , cor == "verde")
  Serial.println("Pare");
  else
  Serial.println("Siga");
    
  delay (4000);
}