#include "Vehiculo.h"
#include <cstdlib>

Vehiculo::Vehiculo() { this->numeroChasis = 0; }
Vehiculo::~Vehiculo() {}
void Vehiculo::mover(int cantidadGasolina){}
void Vehiculo::mover(float volumenGas){}
void Vehiculo::mover() {}
void Vehiculo::acelerar() {}
void Vehiculo::setNumeroChasis(int numeroChasis){
  this->numeroChasis = numeroChasis;
}
void Vehiculo::setNumeroChasis(){
  this->numeroChasis = rand();
}
void Vehiculo::setNumeroChasis(int numeroChasisA, int numeroChasisB){
  if(numeroChasisA > numeroChasisB) this->numeroChasis=numeroChasisA;
  else this->numeroChasis=numeroChasisB;
}
int Vehiculo::getNumeroChasis(){
  return this->numeroChasis;
}