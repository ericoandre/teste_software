#ifdef UNITY_TEST

#include <Arduino.h>
#include <unity.h>

int soma(int a, int b){
  return a+b;
}

void teste_soma(void) {
  RUN_TEST(TEST_ASSERT_EQUAL(soma(2,3), 5);
}

int runUnityTests(void) {
  UNITY_BEGIN();
  RUN_TEST(teste_soma);
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