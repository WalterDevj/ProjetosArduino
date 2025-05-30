// Definições dos pinos
const int botao1 = 5;
const int botao2 = 2;
const int led = 9;

void setup() {
  pinMode(botao1, INPUT_PULLUP); // Usa resistor interno de pull-up
  pinMode(botao2, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  int estadoBotao1 = digitalRead(botao1);
  int estadoBotao2 = digitalRead(botao2);

  // Com INPUT_PULLUP, botão pressionado é LOW
  if (estadoBotao1 == LOW && estadoBotao2 == LOW) {
    digitalWrite(led, HIGH); // Acende LED
  } else {
    digitalWrite(led, LOW);  // Apaga LED
  }
}
