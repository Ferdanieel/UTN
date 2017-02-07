//============================================================================
// Name        : Ejercicio34-2.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int i = 0;
      int x = 0;
      int sumneg = 0;
      int cont1 = 0;
      int cont2 = 0;
      int prom = 0;
      int sumpos = 0;
      int n = 0;

      cout << "Ingrese la cantidad de valores a ingresar: " ;
      cin >> n ;

      while ( i < n )
      {
         cout << "Ingrese un valor: " ;
         cin >> x ;

         if ( x != 0 )
         {
            if ( x < 0)
            {
               sumneg = sumneg + x;
            }
            else
            {
               cont2++;
               sumpos = sumpos + x;
               prom = sumpos / cont2;
            }
         }
         else
         {
            cont1++;
         }
         i++;
      }

      cout << "Cantidad de ceros: " << cont1 << endl;
      cout << "Promedio positivos: " << prom << endl;
      cout << "Suma negativos: " << sumneg << endl;

   return 0;
}
