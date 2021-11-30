#include <iostream>
#include <string>
using namespace std;

#include "Veiculo.h"
#include "Carro.h"

  //construtor e destrutor
  Carro::Carro(int p, string m, int t, float c):Veiculo(m, t, c){
    setPortas(p);
  }
  Carro::~Carro() {
    cout << "Objeto(carro) destruído\n" << endl;
  }

  //getters
  int Carro::getPortas() { return portas; }

  //setters
  void Carro::setPortas(int p) { portas = p; }

  void Carro::mostra() {
    cout << "Marca: " << getMarca() << endl
         << "Tanque: " << getTanque() << " l" << endl
         << "Consumo: " << getConsumo() << " l/km" << endl
         << "Autonomia: " << calcAutonomia() << " km/tanque" << endl 
         << "Numero de Portas: " << getPortas() << " portas" << endl;
  }


  