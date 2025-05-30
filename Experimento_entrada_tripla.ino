// Definições dos pinos
const int botao1 = 5;
const int botao2 = 2;
const int botao3 = 3;
const int led = 9;

void setup() {
  pinMode(botao1, INPUT_PULLUP); // Botão 1 como entrada com pull-up
  pinMode(botao2, INPUT_PULLUP); // Botão 2 como entrada com pull-up
  pinMode(botao3, INPUT_PULLUP); // Botão 3 como entrada com pull-up
  pinMode(led, OUTPUT);          // LED como saída
}

void loop() {
  int estadoBotao1 = digitalRead(botao1); // Lê botão 1
  int estadoBotao2 = digitalRead(botao2); // Lê botão 2
  int estadoBotao3 = digitalRead(botao3); // Lê botão 3

  int pressionados = 0; // Contador de botões pressionados

  // Conta quantos botões estão pressionados (LOW)
  if (estadoBotao1 == LOW) pressionados++;
  if (estadoBotao2 == LOW) pressionados++;
  if (estadoBotao3 == LOW) pressionados++;

  // Acende LED se exatamente dois botões estiverem pressionados
  if (pressionados == 2) {
    digitalWrite(led, HIGH); // Acende o LED
  } else {
    digitalWrite(led, LOW);  // Apaga o LED
  }
}
