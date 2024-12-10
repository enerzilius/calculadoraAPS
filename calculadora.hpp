#include <iostream>
#include <vector>
#include <string>

/* Cabeçalho */
class Calculadora;
class Tecla;
class Cpu;
class Teclado;
class Tecla;

enum Digito
{
    ZERO,
    UM,
    DOIS,
    TRÊS,
    QUATRO,
    CINCO,
    SEIS,
    SETE,
    OITO,
    NOVE
};
enum Operacao
{
    SOMA,
    SUBTRAÇÃO,
    MULTIPLICAÇÃO,
    DIVISÃO,
    RADICIAÇÃO,
    PORCENTAGEM
};
enum Controle
{
    LIGA_LIMPA_ERRO,
    DESLIGA,
    MEMÓRIA_SOMA,
    MEMÓRIA_SUBTRAÇÃO,
    MEMÓRIA_LEITURA_LIMPEZA,
    IGUAL,
    PONTO_FLUTUANTE
};

enum Sinal{POSITIVO, NEGATIVO};

/* Implementações */

class Tela // interface
{
public:
    virtual void adicione(Digito digito) = 0;
    virtual void limpe() = 0;
    virtual void definaSinal(Sinal) = 0;
    virtual void definaSeparadorDecimal() = 0;
};

class Cpu
{
public:
    virtual void definaCpu(Cpu*) = 0;
    virtual Cpu* obtenhaCpu() = 0;
};

class Tecla
{
public:
    virtual void pressione() = 0;

    virtual void definaTeclado(Teclado*) = 0;
    virtual Teclado* obtenhaTeclado() = 0;
};

class Calculadora
{
public:
    virtual void definaTela(Tela*) = 0;
    virtual Tela* obtenhaTela() = 0;

    virtual void definaCpu(Cpu*) = 0;
    virtual Cpu* obtenhaCpu() = 0;

    virtual void definaTeclado(Teclado*) = 0;
    virtual Teclado* obtenhaTeclado() = 0;
};

class Teclado
{
public:
    virtual void adicioneTecla(Tecla &tecla) = 0;

    virtual void definaCpu(Cpu*) = 0;
    virtual Cpu* obtenhaCpu() = 0;
};
