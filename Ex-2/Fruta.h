/* 2,0) Desenhar o UML de uma classe que represente uma fruta para um menu de saladas de frutas. Utilize como atributos os dados que forem interessantes para o usuário do cadastro. Escrever um programa em C++ para a classe, incluindo atributos privados e os respectivos métodos getters & setters. Utilize métodos construtor, destrutor e escreva a classe e o main em arquivos separados. No método main(), criar três objetos da classe (cada um com seu bloco interno para ativar o destrutor), atribuir valores aos atributos e os imprimir. */


////////////////////////////////////////////////////////////////////////////
//                                 Fruta                                  //
////////////////////////////////////////////////////////////////////////////
// - nome: string                                                         //
// - cor: string                                                          //
// - quantidade: int                                                      //
// - massa: double                                                        //
////////////////////////////////////////////////////////////////////////////
// + <<create>> Fruta(n: string, c: string, f: string, q: int, m: double) //
// + <<detroy>> ~Fruta()                                                  //
// + getNome(): string                                                    //
// + setNome(n: string): void                                             //
// + getCor(): string                                                     //
// + setCor(c: string): void                                              //
// + getQuantidade(): int                                                 //
// + setQuantidade(q: int): void                                          //
// + getMassa(): double                                                   //
// + setMassa(m: double): void                                            //
//////////////////////////////////////////////////////////////////////////// 



#include <iostream>
#include <string>
using namespace std;

class Fruta {
  private:
    string nome, cor, familia;
    int quantidade;
    double massa;

  public:
  //construtor e destrutor
    Fruta(string n, string c, int q, double m){
      setNome(n);
      setCor(c);
      setQuantidade(q);
      setMassa(m);
    }

    ~Fruta() {
      cout << "Objeto destruído\n" << endl;
    }


  //getters
  string getNome() { return nome; }
  string getCor() { return cor; }
  int getQuantidade() { return quantidade; }
  double getMassa() { return massa; }

  //setters
  void setNome(string n) { nome = n; } 
  void setCor(string c) { cor = c; } 
  void setQuantidade(int q) { quantidade = q; } 
  void setMassa(double m) { massa = m; } 

  //membros
  void mostra() {
    cout << "Nome: " << getNome() << endl
         << "Cor: " << getCor() << endl
         << "Quantidade: " << getQuantidade() << " peças" << endl
         << "Massa(referente a massa gravitacional): \n" << getMassa() << " kg\n" << endl;
  }
};
