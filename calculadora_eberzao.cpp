#include <iostream>
#include <vector>
#include <string>

#include "calculadora_eber.hpp"

void TelaEber::adicione(Digito digito) {
    switch (digito) {
    case ZERO:
      std::cout << "0000\n0  0\n0  0\n0  0\n0000\n";
      break;
    case UM:
      std::cout << "  1 \n 11 \n  1 \n  1 \n1111\n";
      break;

    default:
      std::cout << "Dígito ainda não implementado!\n";
    }
  }

void TelaEber::limpe() { std::cout << "\n\n\n\n\n" }

void TelaEber::definaSinal(Sinal sinal){
    std::cout(sinal==NEGATIVO?'-------\n':'')    
}
void TelaEber::definaSeparadorDecimal(){
    std::cout << "::\n";
}
void TelaEber::definaTela() {}

void TeclaEber::pressione() {}

Teclado* TecladoEber::obtenhaTeclado(){}
void TecladoEber::definaTeclado(){}
void TecladoEber::adicioneTecla(Tecla &tecla) { teclas.push_back(&tecla); }

void CpuEber::definaCpu(Cpu &cpu) {}

Cpu* CpuEber::obtenhaCpu() {}