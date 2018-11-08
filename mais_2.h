#ifndef UNO_INVERSOR_H
#define UNO_INVERSOR_H

#include "cartas.h"

class mais_2 : public Carta{
private:
    int _cor;
public:
    mais_2();
    virtual ~mais_2();
    virtual int get_cor();
    virtual void imprime_carta();
    void dar_cartas();
}

#endif
