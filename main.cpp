#include "Carro.h"
#include "Moto.h"
//#include "Vehiculo.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  /*
  Vehiculo carro;
  carro.setNumeroChasis(50);
  carro.setNumeroChasis();
  carro.setNumeroChasis(100,50);
  cout << carro.getNumeroChasis();
  

  Vehiculo *miVehiculo;

   miVehiculo = new Carro;
   miVehiculo->mover();
   cout << endl;
  
   miVehiculo = new Moto;
   miVehiculo->mover(3.2f);
 */

  vector<Vehiculo *> misVehiculos;
  misVehiculos.push_back(new Carro);
  misVehiculos.push_back(new Moto);
  misVehiculos.push_back(new Carro;
  misVehiculos.push_back(new Moto);
  misVehiculos.push_back(new Carro);
  misVehiculos.push_back(new Carro);
  misVehiculos.push_back(new Moto);
  misVehiculos.push_back(new Carro);
  misVehiculos.push_back(new Moto);
  misVehiculos.push_back(new Carro);
  misVehiculos.push_back(new Moto);
  misVehiculos.push_back(new Moto);
  for (int i = 0; i < misVehiculos.size(); i++) {
    misVehiculos.at(i)->mover();
    cout << endl;
  }

  // miMoto.mover(5);
  // miMoto.mover(0.0f);
  // miMoto.setPotenciaMotor(100);
  // miMoto.acelerar(20);

  // miCarro.mover(0.0f);
  // miCarro.setPotenciaMotor(100);
  // miCarro.acelerar(20);
 
  //eliminar los objetos y los punteros
  return 0;
}