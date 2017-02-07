//============================================================================
// Name        : Ejercicio34-3.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int i = 1;
   int x = 0;
   int sumneg = 0;
   int cont1 = 0;
   int cont2 = 0;
   int prom = 0;
   int sumpos = 0;
   int ant = 16029; //Anterior es un valor elevado para que no haya posibilidades de sea igual que el primer valor ingresado...

   while ( i != 0 )
   {
      cout << "Ingrese un valor: " ;
      cin >> x;

      if ( x != ant )
      {

      if ( x != 0 )
      {
         if ( x < 0 )
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

      ant = x ;
      }
      else
      {
         if ( x != 0 )
            {
               if ( x < 0 )
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
         i = 0;
      }
   }

   cout << "Cantidad de ceros: " << cont1 << endl;
   cout << "Promedio positivos: " << prom << endl;
   cout << "Suma negativos: " << sumneg << endl;

   return 0;
}
