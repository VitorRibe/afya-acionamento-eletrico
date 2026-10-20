#include "sensor.h"
#include "rele.h"
#include "termostato.h"

#define intervalo_leitura 10 // em segundos. Mantenha no minimo 2s pois o sensor de temperatura é lento :)

void setup() {
  Serial.begin(115200);
  inicializar_sensor();
  inicializar_rele();
}

void loop() {
  delay(intervalo_leitura * 1000);  

  float umidade = ler_umidade();
  float temperatura = ler_temperatura();

  Serial.print("Umidade: ");
  Serial.print(umidade);
  Serial.print("%\tTemperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  monitorar_temperatura();
}
