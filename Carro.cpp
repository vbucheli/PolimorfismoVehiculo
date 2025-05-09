#include "Carro.h"
#include "Vehiculo.h"
#include <iostream>

using namespace std;

Carro::Carro() {
  this->numeroChasis = 0;
  this->potenciaMotor = 0;
}

Carro:: ~Carro() {}

void Carro::mover() { cout << "El carro se empezó a mover"; }

void Carro::mover(int cantidadGasolina) {
  cout << "El carro con gasolina se mueve a: " << cantidadGasolina * 40 << "Km."
       << endl;
}

void Carro::mover(float volumenGas) {
  if (volumenGas == 0)
    cout << "El carro no se puede mover" << endl;
  else
    cout << "El carro con gas se mueve a: " << volumenGas * 50 << "Km.";
}

void Carro::acelerar(int cantidadGasolina) {
  cout << "La velocidad del carro es: " << cantidadGasolina * potenciaMotor
       << "km/h";
}

void Carro::acelerar(float volumenGas) {
  cout << "La velocidad del carro es: " << volumenGas * potenciaMotor << "km/h";
}

void Carro::setPotenciaMotor(int potenciaMotor) {
  this->potenciaMotor = potenciaMotor;
}