#ifndef UNO_INVERSOR_H
#define UNO_INVERSOR_H

#include "cartas.h"

class Inversor : public Carta{
private:
  int _cor;
public:
  Inversor();
  virtual ~Inversor();
  virtual int get_cor();
  virtual void imprime_carta();
  void inverte_direcao();
}

#endif
