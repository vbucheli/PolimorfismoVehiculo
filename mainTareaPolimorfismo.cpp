/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-29
  Fecha última modificación: 2020-12-17
  Versión: 0.1
  Licencia: GPL
*/

/**
  Utilidad para la asignatura: mostrar polimorfismo

  HISTORIA:
  Tengo varias figuras geométricas (Elipse, Rectangulo y Triangulo) que heredan de Figura, donde está la funcionalidad común a todas.
  Y ahora, además, se emplea el polimorfismo.
*/

#include"Elipse.h"
#include"Rectangulo.h"
#include"Triangulo.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<Figura *> misFiguras;
  
  misFiguras.push_back(new Elipse(0, 0, 3, 5));
  misFiguras.push_back(new Rectangulo(0, 0, 4, 7));
  misFiguras.push_back(new Triangulo(0, 0, 8, 3));
  
  for(int cualFigura=0; cualFigura<misFiguras.size(); cualFigura++)
    cout << "La figura " << cualFigura << " tiene un perímetro de " << misFiguras[cualFigura]->perimetro() << " y un área de " << misFiguras[cualFigura]->area() << endl;

  for(int cualFigura=0; cualFigura<misFiguras.size(); cualFigura++)
    misFiguras[cualFigura]->agrandar(2);

  for(int cualFigura=0; cualFigura<misFiguras.size(); cualFigura++)
    cout << "La figura " << cualFigura << " tiene un perímetro de " << misFiguras[cualFigura]->perimetro() << " y un área de " << misFiguras[cualFigura]->area() << endl;

  for(int cualFigura=0; cualFigura<misFiguras.size(); cualFigura++)
  {
    delete misFiguras[cualFigura];
    misFiguras[cualFigura] = nullptr;
  }
  
  return 0;
}
