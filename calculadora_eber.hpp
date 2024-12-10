#include <iostream>
#include <vector>
#include <string>

#include "calculadora.hpp"

class TelaEber: public Tela{
public:
    void adicione(Digito digito);
    void limpe();
    void definaSinal(Sinal);
    void definaSeparadorDecimal();
};

class CpuEber: public Cpu
{
    Tela *tela;
public:
    void definaCpu(Cpu*);
    Cpu* obtenhaCpu();
};

class TeclaEber: public Tecla
{
Teclado *teclado;
public:
    void pressione() ;

    void definaTeclado(Teclado*);
    Teclado* obtenhaTeclado();
};

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