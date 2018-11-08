#ifndef UNO_BARALHO_H
#define UNO_BARALHO_H

#include "cartas.h"

class Baralho : Carta{
private:
  int num_cartas = 52;
public:
  Baralho();
  virtual ~Baralho();
  virtual void imprime_carta();
  void get_num_cartas();
  void distribui_cartas();
  void embaralha_cartas();

}

#endif
