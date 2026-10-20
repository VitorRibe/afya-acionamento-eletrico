#ifndef SENSOR_H
#define SENSOR_H
/*Esta biblioteca reúne as funções para leitura e controle do sensor DHT11.*/

void inicializar_sensor();
float ler_temperatura();
float ler_umidade();

#endif