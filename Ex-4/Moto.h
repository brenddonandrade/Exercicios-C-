#include <iostream>
#include <string>
using namespace std;

class Moto:public Veiculo {
  private:
    int temposMotor;

  public:
    Moto(int, string, int, float);
    ~Moto();
    int getTemposMotor();
    void setTemposMotor(int);
    void mostra();
};