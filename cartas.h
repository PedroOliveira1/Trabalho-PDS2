#ifndef UNO_CARTAS_H
#define UNO_CARTAS_H
#include "string.h"

class Carta{
public:
  virtual ~Carta(){};
  virtual void get_num() = 0;
  virtual void get_cor() = 0;
  virtual void imprime_carta() = 0;
}

#endif
