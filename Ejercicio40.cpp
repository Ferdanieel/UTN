//============================================================================
// Name        : Ejercicio40.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

void separarFecha(long, int&, int&, int&);

int main()
{

   int fecha;
   cout << "Ingrese una fecha con el formato aaammdd: " ;
   cin >> fecha;

   return 0;
}

void separarFecha(long fecha, int& dia, int& mes, int& anio)
   {
      int x = 0;

      anio = fecha / 10000;
      x = fecha % 10000;
      mes = x / 100;
      dia = x % 100;
   }
