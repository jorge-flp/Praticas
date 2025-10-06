// Atividade 3: Semáforo de Trânsito
int ledVermelho = 13;
int ledAmarelo = 12;
int ledVerde = 11;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // LED verde aceso por 3 segundos
  digitalWrite(ledVerde, HIGH);
  delay(3000);
  digitalWrite(ledVerde, LOW);

  // LED amarelo pisca 3 vezes
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledAmarelo, HIGH);
    delay(500);
    digitalWrite(ledAmarelo, LOW);
    delay(500);
  }

  // LED vermelho aceso por 3 segundos
  digitalWrite(ledVermelho, HIGH);
  delay(3000);
  digitalWrite(ledVermelho, LOW);

  // O ciclo recomeça automaticamente
}
