// C++ code
//
	void setup()
{
	Serial.begin(9600);
}

void loop()
{
 	String Nomes[4] = {"Eduardo", "Lucas", "Rafa", "Salgado"};
  	Serial.println(Nomes[2]);//imprime o nome rafa que é o numero 2 pq sempre começa do 0
  	Nomes[2] = "Diogo";//Substitui o nome rafa por diogo
  	Serial.println(Nomes[2]);//imprime o nome Diogo
    int idade[5];//cria um vetor vazio/nulo tamanho 5
  	Serial.println(idade[2]);
  	
  	idade[0] =50;
  	idade[1] =55;
  	idade[2] =5;
  	idade[3] =15;
    idade[4] =12; 
  	
  	Serial.println(idade[0]);//50
    Serial.println(idade[1]);//55
    Serial.println(idade[2]);//5
    Serial.println(idade[3]);//15
	Serial.println(idade[4]);//12
  	Serial.println(idade[5]);//

  	delay(2000);//Delay de 2 segundos
}
