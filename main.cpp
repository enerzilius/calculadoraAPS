#include <iostream>
#include <vector>
#include <string>

#include "calculadora_eber.hpp" // ! import

int main() {
  TeclaEber tecla1;
  tecla1.pressione();

  TecladoEber teclado1;
  teclado1.adicioneTecla(tecla1);

  TelaEber t1;
  t1.adicione(UM);
  t1.limpe();
  t1.definaSinal(NEGATIVO);
  t1.adicione(UM);
  t1.definaSeparadorDecimal();
  t1.adicione(ZERO);

  return 0;
}
