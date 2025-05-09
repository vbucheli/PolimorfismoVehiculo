#include "Vehiculo.h"
#ifndef CARRO_H
#define CARRO_H

// Aqui se implementa la relación de herencia
class Carro : public Vehiculo {
private:
  int potenciaMotor;

public:
  Carro();
  virtual ~Carro();
  // Sobreescritura de métodos. Polimorfismo
  virtual void mover(int cantidadGasolina);
  virtual void mover();
  virtual void mover(float volumenGas);
  virtual void acelerar(int cantidadGasolina);
  virtual void acelerar(float volumenGas);

  // Setter y Getter
  int getPotenciaMotor();
  void setPotenciaMotor(int potenciaMotor);

};

#endif