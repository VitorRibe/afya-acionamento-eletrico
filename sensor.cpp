#include <DHT.h>
#include <Arduino.h>
#include "sensor.h"

#define DHTPIN D2
#define DHTTYPE DHT11
//#define DELAY 2000 // Mantenha no minimo 2000ms pois o sensor de temperatura é lento :)

DHT dht(DHTPIN, DHTTYPE);

void verifique(float medicao) {
  if (isnan(medicao)) {
    Serial.println("Falha na leitura do sensor DHT11! Verifique o cabeamento.");
    return;
  }
}


void inicializar_sensor() {
  dht.begin();
  Serial.println("Sensor de Temperatura e Umidade Inicializado!");
}

float ler_umidade() {
  //delay(DELAY);
  float u = dht.readHumidity();
  verifique(u);
  return u;
}

float ler_temperatura() {
  //delay(DELAY);
  float t = dht.readTemperature();
  verifique(t);
  return t;
}

