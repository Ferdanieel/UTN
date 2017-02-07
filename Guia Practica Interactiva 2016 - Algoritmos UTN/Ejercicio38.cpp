//============================================================================
// Name        : Ejercicio38.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int factorial(int n)
{
   int f = 0;

   if ( n <= 1 )
   {
      f = 1;
   }
   else
   {
      f = n * factorial(n-1);
   }

   return f;
}


int main()
{

   int x;
   cout << "Ingrese un valor: " ;
   cin >> x ;

   int fact = factorial(x);

   cout << fact << endl;

   return 0;
}
