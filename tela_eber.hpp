#include "calculadora.hpp"

class Tela: public Tela // interface
{
public:
    virtual void adicione(Digito digito) = 0;
    virtual void limpe() = 0;
    virtual void definaSinal(Sinal) = 0;
    virtual void definaSeparadorDecimal() = 0;
};