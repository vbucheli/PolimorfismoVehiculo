#include "Vehiculo.h"
#ifndef MOTO_H
#define MOTO_H

class Moto : public Vehiculo {
private:
  int potenciaMotor;

public:
  Moto();
  virtual ~Moto();
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