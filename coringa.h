#ifndef UNO_INVERSOR_H
#define UNO_INVERSOR_H

#include "cartas.h"

class coringa : public Carta{
public:
    coringa();
    virtual ~coringa();
    virtual void imprime_carta();
    void escolhe_cor();
}

#endif
