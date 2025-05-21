void setup()
{
	Serial.begin(9600);
  	randomSeed(analogRead(0));//inicia e normaliza a porta randomica para evitar o mesmo valor
}

void loop() 
{
	Serial.println(" ");
  	Serial.println(" ");
	Serial.println("--- PROGRAMA JOGO DE DADOS ---");
	Serial.println(" ");
	Serial.println(" ");

  //pedir o palpite do usuario
  	Serial.println("Digite um palpite de 1 a 6");
    while(!Serial.available());
  	int palpite = Serial.parseInt();
  //sortear o dado
    int numeroSorteado = random(1, 7);//gera um numero aleatorio entre 1 a 6
  	Serial.println("Seu palpite: " + String(palpite));
    Serial.println("Numero do dado: " + String(numeroSorteado));
  	if(palpite == numeroSorteado) {
  	Serial.println("Parabens, voce acertou!");
}   else {
    Serial.println("Que pena, tente outra vez!");	
}
  	delay(1000);
}//fim do jogo