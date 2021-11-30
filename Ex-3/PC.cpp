#include <iostream>
#include <string>
using namespace std;

#include "Produto.h"
#include "PC.h"

  //contrutor e destrutor
  PC::PC(string pro, int r, int c, string n, float p):Produto(c, n, p){
    setProcessador(pro);
    setRam(r);
  }
  PC::~PC(){
    cout << "Objeto(processador) destruído\n" << endl;
  }

  //getters
  string PC::getProcessador(){ return processador; }
  int PC::getRam() { return ram; }

  //setters
  void PC::setProcessador(string pro) { processador = pro; }
  void PC::setRam(int r) { ram = r; }

  //membros
  void PC::mostra(){
    cout << "Código: " << getCod() << endl
         << "Nome: " << getNome() << endl
         << "Preço: " << "R$ " << getPreco() << endl
         << "Preço total: " << "R$ " << calcPrecoFinal() << endl
         << "Processador: " << getProcessador() << endl
         << "Ram: " << getRam() << " GB\n" << endl;
  }

