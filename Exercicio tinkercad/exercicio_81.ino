String nome = "";
String cargo = "";
long salario = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Qual seu nome:");
  while (!Serial.available());
  nome = Serial.readString();

  Serial.println("Qual seu cargo:");
  while (!Serial.available());
  cargo = Serial.readString();

  Serial.println("Salario:");
  while (!Serial.available());
  salario = Serial.parseInt();

  if (salario <= 1000) {
    salario = salario * 1.1;
  } else {
    Serial.println("Sem acrescimos no salario");
  }
  Serial.println("Nome do funcionario: " + String(nome));
  Serial.println("Cargo: " + String(cargo));
  Serial.println("Salario: " + String(salario));
}
 
 

