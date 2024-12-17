#include "calculadora.hpp"

class CpuEber: public Cpu 
{
Tela *tela;
public:
    void definaTela(Tela*);
    Tela* obtenhaTela();
};