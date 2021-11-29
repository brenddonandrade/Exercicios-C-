#include <iostream>
#include <string>
#include "Fruta.h"
using namespace std;

int main(){
  {
    Fruta f1("Banana", "Amarela", 4, 15.5);
    f1.mostra();
  }

  {
    Fruta f2("Maça", "Vermelha", 3, 1.5);
    f2.mostra(); 
  }
    
  {
    Fruta f3("Laranja", "Verde-Amarelo-Laranja", 5, 2.1);
    f3.mostra(); 
  }

  return 0;

}