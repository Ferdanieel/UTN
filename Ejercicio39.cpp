//============================================================================
// Name        : Ejercicio39.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

long unificarfecha(int dia, int mes, int anio)
{
   int f;

   f = ( (anio*10000) + (mes*100) + dia );

   return f;
}



int main()
{

   int dia = 0;
   int mes = 0;
   int anio = 0;

   cout << "Ingrese un dia: " ;
   cin >> dia;

   cout << "Ingrese un mes: " ;
   cin >> mes;

   cout << "Ingrese un año: " ;
   cin >> anio;

   int fecha = unificarfecha(dia, mes, anio);

   cout << "Fecha: " << fecha << endl;

   return 0;
}
