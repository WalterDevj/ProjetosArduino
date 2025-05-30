const int botao = 2;
const int led = 9;

void setup() {
  // Configura o botão como entrada com pull-up interno
  pinMode(botao, INPUT_PULLUP);
  // Configura o LED como saída
  pinMode(led, OUTPUT);
}

void loop() {
  int estadoBotao = digitalRead(botao);

  // Porta NOT: inverte o estado do botão para o LED
  if (estadoBotao == HIGH) {  // botão não pressionado (pull-up)
    digitalWrite(led, HIGH);  // LED aceso
  } else {                    // botão pressionado
    digitalWrite(led, LOW);   // LED apagado
  }
}