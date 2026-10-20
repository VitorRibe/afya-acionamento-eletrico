# Afya - Acionamentos Elétricos Programados
## Definição do projeto
Este projeto trata-se de um termostato construído em cima da linguagem Arduino, uma versão do C++. 

A ideia principal por trás do projeto é acionar um fan a partir do momento que o ambiente atingir uma determinada temperatura. 

## Hardwares utilizados
- NodeMCU 8266
- Sensor de temperatura e umidade DHT11
- Relé 5v de um canal
- Air Cooler 12v.

## Tensões do circuito
O projeto conta com duas linhas de tensão que devem ser cuidadosamente separadas. Caso a ligação seja feita incorretamente, a placa NodeMCU, o Sensor DHT11 e o módulo relé poderão ser queimados. 

### Linha de 5v
Esta linha é alimentada por uma fonte 5V - 2A. Demarcada no kit com a fita azul.

Nesta linha serão ligados:
- NodeMCU
- Sensor DHT11
- Circuito de acionamento do Relé

### Linhas de 12V
Esta linha é alimentada por uma fonte 12V - 1A. Demarcada no kit com a fita vermelha.

Nesta linha será ligado:
- Circuito de carga do Relé

## Pinagem
### Sensor DHT11
- Pino S -> D2
- Pino do meio -> 3V3
- Pino - -> GND

### Relé
- Pino da esquerda -> D5
- Pino do meio -> VCC
- Pino da direita -> GND

### Fonte 5v
- Cabo laranja -> trilha + (VCC)
- Cabo preto -> trilha - (GND)