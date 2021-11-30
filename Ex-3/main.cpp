#include <iostream>
#include <string>
using namespace std;

#include "Produto.h"
#include "Celular.h"
#include "PC.h"

int main() {
  {
    Celular c1 (2018, "Xiaomi", 1633520, "Mi 8 Lite", 950.00);
    c1.mostra();
  }

  {
    PC p1 ("Ryzen 5 3600", 16, 1555234, "PC Alien Monster", 4500.00);
    p1.mostra();
  }
}