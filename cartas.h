#ifndef UNO_CARTAS_H
#define UNO_CARTAS_H
#include "string.h"

class Carta{
private:
  int _num;
  int _cor;
public:
  virtual ~Carta(){};
  virtual int get_num() = 0;
  virtual string get_cor() = 0;
  virtual void imprime_carta() = 0;
}

#endif
