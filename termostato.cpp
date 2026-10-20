#include "sensor.h"
#include "rele.h"

#define TEMP_ACIONAMENTO 33.0

void monitorar_temperatura() {
  float temperatura = ler_temperatura();

  if (temperatura >= TEMP_ACIONAMENTO) {
    ligar_rele();
  } else {
    desligar_rele();
  }
}