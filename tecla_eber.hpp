#include "calculadora.hpp"

class TeclaEber: public Tecla
{
Teclado *teclado;
public:
    void pressione() ;
    void definaTeclado(Teclado*);
    Teclado* obtenhaTeclado();
};