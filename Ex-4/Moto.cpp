#include <iostream>
#include <string>
using namespace std;

#include "Veiculo.h"
#include "Moto.h"

  //construtor e destrutor
  Moto::Moto(int tp, string m, int t, float c):Veiculo(m, t, c) {
    setTemposMotor(tp);
  }
  Moto::~Moto(){
    cout << "Objeto(moto) destruído\n" << endl;
  }

  //getters
  int Moto::getTemposMotor(){ return temposMotor; }

  //setters
  void Moto::setTemposMotor(int tp) { temposMotor = tp; }

  //membro
  void Moto::mostra(){
    cout << "Marca: " << getMarca() << endl
         << "Tanque: " << getTanque() << " l" << endl
         << "Consumo: " << getConsumo() << " l/km" << endl
         << "Autonomia: " << calcAutonomia() << " km/tanque" << endl 
         << "Tempo do Motor: " << getTemposMotor() << " anos" << endl;
  } 
