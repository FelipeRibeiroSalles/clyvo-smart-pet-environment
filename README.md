# Clyvo Smart Pet Environment

Sistema IoT preventivo para monitoramento de ambiente pet utilizando Arduino e sensores.

---

# Sobre o Projeto

O *Clyvo Smart Pet Environment* foi desenvolvido como uma solução IoT voltada ao monitoramento preventivo do ambiente de pets, auxiliando tutores no acompanhamento contínuo das condições ambientais que podem impactar a saúde e o bem-estar animal.

A proposta faz parte da iniciativa Clyvo Care AI, cujo objetivo é facilitar o acompanhamento da saúde e da vida do pet de forma contínua, preventiva e acessível.

---

# Objetivo

Monitorar condições ambientais básicas utilizando sensores conectados ao Arduino, gerando alertas preventivos para auxiliar no cuidado diário do pet.

---

# Funcionalidades

✅ Monitoramento de temperatura ambiente  
✅ Monitoramento de luminosidade  
✅ Alertas preventivos automáticos  
✅ Acionamento de LED em situação de risco  
✅ Exibição de dados em tempo real no Monitor Serial  
✅ Sistema IoT funcional utilizando Arduino  

---

# Tecnologias Utilizadas

- Arduino UNO
- Tinkercad
- Linguagem C/C++ (Arduino)
- Sensor TMP36
- Sensor LDR
- LED
- Protoboard

---

# Componentes Utilizados

| Componente | Quantidade |
|---|---|
| Arduino UNO | 1 |
| Sensor TMP36 | 1 |
| Sensor LDR | 1 |
| LED | 1 |
| Resistores | 2 |
| Protoboard | 1 |

---

# Funcionamento do Sistema

O sistema realiza leituras contínuas de:

- Temperatura ambiente
- Intensidade luminosa

Com base nos valores coletados:

- O LED é acionado em situações de temperatura elevada;
- Alertas preventivos são exibidos no Monitor Serial;
- O sistema identifica baixa luminosidade no ambiente.

---

# Evidências do Projeto

## Ambiente Seguro
![Ambiente Seguro](images/Ambiente-Seg-Luminosidade-Adequada.jpeg)

---

## Alerta de Temperatura
![Ambiente Quente](images/Ambiente-quente.jpeg)

---

## Baixa Luminosidade
![Baixa Luminosidade](images/Luminosidade-Baixa.jpeg)

---

# Simulação no Tinkercad

Acesse a simulação do projeto:

(https://www.tinkercad.com/things/eIFX0ZuhmFU-daring-kieran/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=IQPALltH_nCpicNBdRjcay95R04LjODOq32z3L-Rodk)