#include <iostream>
#include <string>
using namespace std;

class Celular:public Produto{
  private:
    int ano;
    string marca;
  
  public:
    Celular(int, string, int, string, float);
    ~Celular();
    int getAno();
    string getMarca();
    void setAno(int);
    void setMarca(string);
    void mostra();
};