// Definições dos pinos
const int botao1 = 5;
const int botao2 = 2;
const int led = 9;

void setup() {
  pinMode(botao1, INPUT_PULLUP); // Botão 1 como entrada com pull-up
  pinMode(botao2, INPUT_PULLUP); // Botão 2 como entrada com pull-up
  pinMode(led, OUTPUT);          // LED como saída
}

void loop() {
  int estadoBotao1 = digitalRead(botao1); // Lê botão 1
  int estadoBotao2 = digitalRead(botao2); // Lê botão 2

  // Porta lógica NAND: LED apaga só se os dois forem pressionados
  if (!(estadoBotao1 == LOW && estadoBotao2 == LOW)) {
    digitalWrite(led, HIGH); // Acende o LED
  } else {
    digitalWrite(led, LOW);  // Apaga o LED
  }
}
