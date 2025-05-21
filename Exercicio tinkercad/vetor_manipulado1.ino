// C++ code
//
	void setup()
{
	Serial.begin(9600);
}

	void loop()
{
 	String Nomes[4] = {"Eduardo", "Lucas", "Rafa", "Salgado"};
      int idades[4];
      for(int i = 0; i < 4; i++){
        Serial.println("Digite a idade de: " + Nomes[i]);
        while(!Serial.available());
        idades[i] = Serial.parseInt();
}     
	//exibir os dados do array
      for(int i = 0; i < 4; i++)
{
      Serial.println(String(i + 1) + "- O Nome:" +Nomes[i]);
      Serial.println(" Idade: " + String(idades[i]));
      Serial.println();

}
  	  delay(10000);//Delay de 2 segundos
} 	//fim do loop
