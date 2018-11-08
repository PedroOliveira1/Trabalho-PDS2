#ifndef UNO_INVERSOR_H
#define UNO_INVERSOR_H

#include "cartas.h"

class pular : public Carta{
public:
    pular();
    virtual ~pular();
    virtual void imprime_carta();
    void pula_proximo();
}

#endif
