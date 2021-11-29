/*(1,0) Desenhar o UML de uma classe que represente uma pessoa para uma agenda de e-mails, fones e
outros dados que forem interessantes. Escrever um programa em C++ para a classe, incluindo atributos
privados e os respectivos métodos getters & setters. No método main(), criar três objetos da classe, atribuir
valores aos atributos e os imprimir.*/

// /////////////////////////////////////////////////////////////////////
//                             Pessoa                                 //
////////////////////////////////////////////////////////////////////////
//  - nome: string                                                    //
//  - email: string                                                   //
//  - fone: int                                                       //
//  - sexo: char                                                      // 
//  - idade: int                                                      // 
////////////////////////////////////////////////////////////////////////
// + <<create>> Pessoa(n: string, e: string, f: long, s: char, i: int)//
// + <<destroy>> ~Pessoa()                                            //
// + getNome(): string                                                //
// + setNome(n: string): void                                         //
// + getEmail(): string                                               //
// + setEmail(e: string): void                                        //
// + getFone(): int                                                   //
// + setFone(f: int): void                                            //
// + getSexo(): char                                                  //
// + setSexo(s: char): void                                           //
// + getIdade(): int                                                  //
// + setIdade(i: int): void                                           //
////////////////////////////////////////////////////////////////////////

//string ou char[], qual a diferença?


#include <iostream>
#include <string>
using namespace std;

class Pessoa {
  private:
    //atributos
    char sexo;
    string nome, email;
    int idade;
    long fone;

  public:
    //construtor e destrutor
    Pessoa (string n, string e, long f, char s, int i){
      setNome(n);
      setEmail(e);
      setFone(f);
      setIdade(i);
      setSexo(s);
    }

    ~Pessoa() {
      cout << "Objeto destruído\n" << endl;
    }

    //metodos getters
    string getNome() { return nome; }
    string getEmail() { return email; }
    char getSexo() { return sexo; }
    long getFone() { return fone; } 
    int getIdade() { return idade; }

    //metodos setters
    void setNome(string n) { nome = n; }
    void setEmail(string e) { email = e; }
    void setSexo(char s) { sexo = s; }
    void setFone(long f) { fone = f;}
    void setIdade(int i) { idade = i; }

    //membros
    void mostra(){
      cout << "Nome: " << getNome() << endl
           << "Email: " << getEmail() << endl
           << "Telefone: " << getFone() << endl
           << "Sexo: " << getSexo() << endl
           << "Idade: " << getIdade() << " anos\n" << endl;
    }
};

int main(){
  {
    Pessoa p1("Pedro", "pedrojose@gmail.com", 24999785822, 'm', 38);
    p1.mostra();
  }

  {
    Pessoa p2("Joao", "joaomarcos@gmail.com", 24994520815, 'm', 30);
    p2.mostra();
  }

  {
    Pessoa p3("Joaquim", "joaquingomes@gmail.com", 24999854125, 'm', 15);
    p3.mostra();
  }

  return 0;
}

