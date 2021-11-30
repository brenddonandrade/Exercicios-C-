#include <iostream>
#include <string>
using namespace std;

class PC:public Produto{
  private:
    string processador;
    int ram;
  
  public:
    PC(string, int, int, string, float);
    ~PC();
    string getProcessador();
    int getRam();
    void setProcessador(string);
    void setRam(int);
    void mostra();
};