#ifndef VEHICULO_H
#define VEHICULO_H

class Vehiculo {
protected:
  int numeroChasis;

public:
  Vehiculo();
  void setNumeroChasis();
  void setNumeroChasis(int numeroChasis);
  void setNumeroChasis(int numeroChasisA,int numeroChasisB);
  int getNumeroChasis();
 
  
virtual void mover();
virtual void mover(int cantidadGasolina);
virtual void mover(float volumenGas);
  virtual void acelerar();
  virtual ~Vehiculo();
};

#endif