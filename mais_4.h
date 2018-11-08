#ifndef UNO_INVERSOR_H
#define UNO_INVERSOR_H

#include "cartas.h"

class mais_4 : public Carta{
public:
    mais_4();
    virtual ~mais_4();
    virtual int get_cor();
    virtual void imprime_carta();
    void dar_cartas();
}

#endif
