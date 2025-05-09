#include "Moto.h"
#include <iostream>

using namespace std;

Moto::Moto() {
  this->potenciaMotor = 0;
}

Moto::~Moto() {}

void Moto::mover() { cout << "La moto se empezó a mover, utiliza casco."; }

void Moto::mover(int cantidadGasolina) {
  if (cantidadGasolina <= 3)
    cout << "La moto con gasolina se mueve a: " << cantidadGasolina * 80 << "Km."
       << endl;
}

void Moto::mover(float volumenGas) {
  if (volumenGas == 0)
    cout << "La moto no se puede mover" << endl;
  else
    cout << "La moto con gas se mueve a: " << volumenGas * 100 << "Km.";
}

void Moto::acelerar(int cantidadGasolina) {
  cout << "La velocidad de la moto es: " << cantidadGasolina * potenciaMotor
       << "km/h";
}

void Moto::acelerar(float volumenGas) {
  cout << "La velocidad de la moto es: " << volumenGas * potenciaMotor << "km/h";
}

void Moto::setPotenciaMotor(int potenciaMotor) {
  if (potenciaMotor <= 1000)
    this->potenciaMotor = potenciaMotor;
  else
    cout << "Error";
}
