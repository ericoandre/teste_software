#include <Arduino.h>

#define LEDPIN 16
#define LDRPIN A0 //Atribui A0 a variável ldr

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  float lumiz = analogRead(LDRPIN);
  Serial.print("leitura: ");
  Serial.println(lumiz);

  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
}