/* (3,0) Escrever um programa em C++ para implementar a classe Produto a seguir, incluindo sua interface. Acrescentar duas subclasses de produtos quaisquer, com pelo menos dois atributos cada (ex: arroz, feijao, camisa, bermuda, etc). Escrever o código das interfaces e o código das classes. Inclua os métodos destrutores em todas as classes. No main(), criar um objeto para cada subclasse passando valores quaisquer para seus atributos através dos métodos construtores, cada um com seu bloco interno para ativar o destrutor, em seguida os imprimir. */

#include <iostream>
#include <string>
using namespace std;

class Produto {
  private:
    int cod;
    string nome;
    float preco;
  
  public:
    Produto(int, string, float);
    ~Produto();
    int getCod();
    string getNome();
    float getPreco();
    void setCod(int);
    void setNome(string);
    void setPreco(float);
    void mostra();
    float calcPrecoFinal();
};