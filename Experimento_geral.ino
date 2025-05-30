// Pinos dos componentes
const int botao = 2;
const int led1 = 5;
const int led2 = 6;
const int led3 = 9;

void setup() {
  // Configura o botão como entrada com pull-up interno
  pinMode(botao, INPUT_PULLUP);

  // Configura os LEDs como saídas
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // Lê o estado do botão
  int estadoBotao = digitalRead(botao);

  // Lógica: botão pressionado (LOW) → acende LEDs
  if (estadoBotao == LOW) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}