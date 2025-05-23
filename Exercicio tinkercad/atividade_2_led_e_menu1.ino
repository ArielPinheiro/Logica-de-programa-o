int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 7;
int opcao;
void setup() {
  Serial.begin(9600); // Inicia comunicação serial do arduino

  pinMode(ledVerde, OUTPUT);//liga o led Verde
  pinMode(ledAmarelo, OUTPUT);//liga o led Amarelo
  pinMode(ledVermelho, OUTPUT);//liga o led Vermelho

  Serial.println("Controle de LEDS");
}

void loop(){
  
do {
    
  // Mostra o menu e da as opcões
  Serial.println(" Menu: ");
  Serial.println("1 - Ligar LED Verde");
  Serial.println("2 - Desligar LED Verde");
  Serial.println("3 - Ligar LED Amarelo");
  Serial.println("4 - Desligar LED Amarelo");
  Serial.println("5 - Ligar LED Vermelho");
  Serial.println("6 - Desligar LED Vermelho");
  Serial.println("7 - Ligar Todos");
  Serial.println("8 - Desligar Todos");
  Serial.println("0 - Sair");
  while(!Serial.available()); // Espera a pessoa digitar para continuar
  opcao = Serial.parseInt();   // não lembro oq faz
  delay(1500);   
  switch (opcao) {
    case 1: digitalWrite(ledVerde, HIGH); break;
    case 2: digitalWrite(ledVerde, LOW); break;
    case 3: digitalWrite(ledAmarelo, HIGH); break;
    case 4: digitalWrite(ledAmarelo, LOW); break;
    case 5: digitalWrite(ledVermelho, HIGH); break;
    case 6: digitalWrite(ledVermelho, LOW); break;
    case 7:
      digitalWrite(ledVerde, HIGH);
      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVermelho, HIGH);
      break;
    case 8:
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVermelho, LOW);
      break;
    case 0:
    
    default:
      Serial.println("Saindo e reiniciando o sistema ....");
    }
  }while(opcao != 0 );     
}

    
       
// Espera e carrega o menu dps de 15 segundos

