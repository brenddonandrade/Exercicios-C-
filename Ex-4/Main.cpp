#include <iostream>
#include <string>
using namespace std;

#include "Veiculo.h"
#include "Carro.h"
#include "Moto.h"

int main () {
  {
    Carro c1 (3, "Fusquinha Rebaixado Wolks", 55, 4.5);
    c1.mostra();
  }

  {
    Moto m1 (15, "Honda Titan no grau", 20, 15);
    m1.mostra();
  }

  return 0;
}
