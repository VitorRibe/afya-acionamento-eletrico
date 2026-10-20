#include <Arduino.h>

#define PINO_RELE D5

void inicializar_rele() {
  pinMode(PINO_RELE, OUTPUT);
  digitalWrite(PINO_RELE, LOW);
}

void ligar_rele() {
  digitalWrite(PINO_RELE, HIGH);
  Serial.println("Relé ligado!");
}

void desligar_rele() {
  digitalWrite(PINO_RELE, LOW);
  Serial.println("Relé desligado!");
}