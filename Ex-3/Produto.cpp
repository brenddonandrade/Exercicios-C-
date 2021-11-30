#include <iostream>
#include <string>
using namespace std;

#include "Produto.h"

  //construtor e destrutor
  Produto::Produto(int c, string n, float p){
    setCod(c);
    setNome(n);
    setPreco(p);
  }

  Produto::~Produto(){
    cout << "Objeto destruído\n" << endl;
  }

  //getters
  int Produto::getCod() { return cod;}
  string Produto::getNome() { return nome;}
  float Produto::getPreco() { return preco;}

  //setters
  void Produto::setCod(int c) { cod = c;}
  void Produto::setNome(string n) { nome = n;}
  void Produto::setPreco(float p) { preco = p;}

  //membro
  float Produto::calcPrecoFinal(){ return preco*1.4; }

  void Produto::mostra() {
    cout << "Código: " << getCod() << endl
        << "Nome: " << getNome() << endl
        << "Preço: " << getPreco() << endl;
  }