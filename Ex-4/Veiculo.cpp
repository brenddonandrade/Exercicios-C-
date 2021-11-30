#include <iostream>
#include <string>
using namespace std;

#include "Veiculo.h"

  //construtor e destrutor
  Veiculo::Veiculo(string m, int t, float c){
    setMarca(m);
    setTanque(t);
    setConsumo(c);
  }
  Veiculo::~Veiculo() {
    cout << "Objeto(Veiculo) destruído\n" << endl;
  }

  //getters
  string Veiculo::getMarca() { return marca; }
  int Veiculo::getTanque() { return tanque; }
  float Veiculo::getConsumo() { return consumo; }

  //setters
  void Veiculo::setMarca(string m) { marca = m; }
  void Veiculo::setTanque(int t) { tanque = t; }
  void Veiculo::setConsumo(float c) { consumo = c; } 
  
  //membros
  float Veiculo::calcAutonomia(){ return tanque*consumo; }

  void Veiculo::mostra() {
    cout << "Marca: " << getMarca() << endl
         << "Tanque: " << getTanque() << " l" << endl
         << "Consumo: " << getConsumo() << " l/km" << endl
         << "Autonomia: " << calcAutonomia() << " km/tanque" << endl; 
  }