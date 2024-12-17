#include <iostream>
#include <vector>
#include <string>

#include "calculadora.hpp"

class CalculadoraEber: public Calculadora
{
    Tela *tela;
    Cpu *cpu;
    Teclado *teclado;
public:
    void definaTela(Tela*);
    Tela* obtenhaTela();

    void definaCpu(Cpu*);
    Cpu* obtenhaCpu();

    void definaTeclado(Teclado*);
    Teclado* obtenhaTeclado();
};

class TecladoEber: public Teclado
{
    Cpu *cpu;
    std::vector<Tecla *> teclas;
public:
    void adicioneTecla(Tecla &tecla);

    void definaCpu(Cpu*);
    Cpu* obtenhaCpu();
};