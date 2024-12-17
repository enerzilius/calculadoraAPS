#include <iostream>
#include <vector>
#include <string>
#include "tecla_eber.hpp"

void TeclaEber::pressione() {}

void TeclaEber::definaTeclado(Teclado* teclado) { this-> teclado = teclado; }
Teclado* TeclaEber::obtenhaTeclado(){return this->teclado;}