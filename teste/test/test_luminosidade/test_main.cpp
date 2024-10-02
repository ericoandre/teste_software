#ifdef UNITY_TEST

#include <Arduino.h>
#include <unity.h>

#define LDRPIN A0 //Atribui A0 a variável ldr

// Teste para verificar se a leitura de luminosidade é válida
void test_luminosidade_reading() {
  float lumiz = analogRead(LDRPIN);
  TEST_ASSERT(lumiz >= 15 && lumiz <= 500);  // luminosidade válida para o LDR
}

int runUnityTests(void) {
  UNITY_BEGIN();
  RUN_TEST(test_humidity_reading);
  return UNITY_END();
}

/**
  * For native dev-platform or for some embedded frameworks
  */
int main(void) {
  return runUnityTests();
}

/**
  * For Arduino framework
  */
void setup() {
  delay(2000);
  runUnityTests();
}

void loop() {}

#endif