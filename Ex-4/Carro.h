#include <iostream>
#include <string>
using namespace std;

class Carro:public Veiculo {
  private:
    int portas;

  public:
    Carro(int, string, int, float);
    ~Carro();
    int getPortas();
    void setPortas(int);
    void mostra();
};