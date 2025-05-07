String nome = "";
long salario = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Qual nome do funcionario:");
  while (!Serial.available());
  nome = Serial.readString();

  Serial.println("Salario do funcionario:");
  while (!Serial.available());
  salario = Serial.parseInt();

  if (salario <= 500) {
    percentual = percentual * ;
  } else {
    Serial.println("Sem acrescimos no salario infelizmente");
  }
  Serial.println("Nome do funcionario: " + String(nome));
  Serial.println("Salario: " + String(salario));
}
 
 

