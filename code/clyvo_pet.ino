// ======================================================
// CLYVO SMART PET ENVIRONMENT
// Sistema IoT Preventivo para Monitoramento Pet
// FIAP - Disruptive Architectures: IoT, IOB & Generative IA
// ======================================================

// ----------------------
// PINOS UTILIZADOS
// ----------------------

int ldrPin = A0;
int tempPin = A1;
int ledPin = 13;

// ======================================================
// CONFIGURACAO INICIAL
// ======================================================

void setup() {

  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);

  Serial.println("======================================");
  Serial.println("      CLYVO SMART PET ENVIRONMENT     ");
  Serial.println("======================================");
  Serial.println("Sistema Preventivo de Monitoramento");
  Serial.println("Inicializando sensores...");
  Serial.println("======================================");
}

// ======================================================
// LOOP PRINCIPAL
// ======================================================

void loop() {

  // ----------------------
  // LEITURA DA LDR
  // ----------------------

  int ldrValue = analogRead(ldrPin);

  // ----------------------
  // LEITURA DO TMP36
  // ----------------------

  int tempValue = analogRead(tempPin);

  float voltage = tempValue * (5.0 / 1023.0);

  float temperatureC = (voltage - 0.5) * 100;

  // ======================================================
  // EXIBICAO DOS DADOS
  // ======================================================

  Serial.println("\n--------------------------------------");

  Serial.print("Temperatura Atual: ");
  Serial.print(temperatureC);
  Serial.println(" C");

  Serial.print("Luminosidade Atual: ");
  Serial.println(ldrValue);

  // ======================================================
  // ANALISE DE TEMPERATURA
  // ======================================================

  if (temperatureC < 26) {

    digitalWrite(ledPin, LOW);

    Serial.println("STATUS: Ambiente seguro para o pet.");

  }

  else if (temperatureC >= 26 && temperatureC < 30) {

    digitalWrite(ledPin, LOW);

    Serial.println("ATENCAO: Temperatura moderada.");
    Serial.println("Recomendado monitoramento preventivo.");

  }

  else {

    digitalWrite(ledPin, HIGH);

    Serial.println("ALERTA PREVENTIVO!");
    Serial.println("Ambiente quente para o pet.");
    Serial.println("Recomendado resfriamento imediato.");

  }

  // ======================================================
  // ANALISE DE LUMINOSIDADE
  // ======================================================

  if (ldrValue < 500) {

    Serial.println("Luminosidade baixa detectada.");

  }

  else {

    Serial.println("Luminosidade adequada.");

  }

  // ======================================================

  delay(2000);
}