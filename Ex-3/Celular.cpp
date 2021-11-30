#include <iostream>
#include <string>
using namespace std;

#include "Produto.h"
#include "Celular.h"

  //construtor e destrutor
  Celular::Celular(int a, string m, int c, string n, float p):Produto(c, n, p)//construtor com repasse
  {
    setAno(a);
    setMarca(m);
  }
  Celular::~Celular() {
    cout << "Objeto(celular) destruído\n" << endl;
  }

  //getters 
  int Celular::getAno() { return ano; }
  string Celular::getMarca() { return marca; }

  //setters
  void Celular::setAno(int a) { ano = a; }
  void Celular::setMarca(string m) { marca = m; }

  //membros
  void Celular::mostra() {
    cout  << "\nCódigo: " << getCod() << endl
          << "Nome: " << getNome() << endl
          << "Preço: " << "R$: " << getPreco() << endl
          << "Preço Final: " << "R$: " << calcPrecoFinal() << endl
          << "Ano: " << getAno() << endl
          << "Marca: " << getMarca() << endl;
  } 

