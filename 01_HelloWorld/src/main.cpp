#include <Arduino.h>

// Establece el pin donde estara el led
constexpr uint8_t LED_PIN = 2;

void setup()
{
  // Configuracion del pin como salida
  pinMode(LED_PIN, OUTPUT);

  // Incia la comunicacion Serial
  Serial.begin(115200);
}

void loop()
{
  // Encender el LED
  digitalWrite(LED_PIN, 1);
  Serial.println("Estado del LED: [ENCENDIDO]");
  delay(1000);

  // Apagar el LED
  digitalWrite(LED_PIN, 2);
  Serial.println("Estado del LED: [APAGADO]");
  delay(1000);
}