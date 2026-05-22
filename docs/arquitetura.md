# Arquitetura do Projeto

## Fluxo do Sistema

Sensores → Arduino → MQTT → Node-RED → Dashboard IoT

---

## Sensores

- TMP36 → monitoramento de temperatura
- LDR → monitoramento de luminosidade

---

## Atuadores

- LED de alerta preventivo

---

## Tecnologias Utilizadas

- Arduino UNO
- Tinkercad
- Node-RED
- MQTT (HiveMQ Broker)
- Dashboard IoT
- Linguagem C/C++ (Arduino)

---

## Comunicação MQTT

Os dados de temperatura são enviados utilizando o protocolo MQTT através do broker público HiveMQ.

O Node-RED recebe os dados MQTT e realiza o processamento em tempo real para atualização do dashboard IoT.

---

## Funcionamento do Sistema

O Arduino realiza leituras contínuas dos sensores de temperatura e luminosidade.

As informações são processadas e transmitidas utilizando MQTT para o Node-RED, responsável pelo monitoramento em tempo real.

O dashboard apresenta:

- Temperatura atual
- Histórico de temperatura
- Alertas preventivos
- Indicadores visuais de risco

---

## Objetivo

Demonstrar uma solução IoT preventiva para monitoramento de ambientes destinados a pets, utilizando sensores, comunicação MQTT e dashboard em tempo real.
