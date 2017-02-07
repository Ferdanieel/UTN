//============================================================================
// Name        : Ejercicio33.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int fib(int x)
{
   int a = 1;
   int b = 1;
   int c = 2;
   int i = 3;

   if ( x <= 2 )
   {
      if ( x < 2 )
      {
         cout << "1" ;
      }
      else
      {
         cout << "1, 1" ;
      }
   }
   else
   {
      cout << "1, 1, 2" ;

      while( i < x )
      {
         a = b;
         b = c;
         c = a + b;
         i++;
         cout << ", " << c ;
      }
   }

   return 0;
}

int main()
{
   int x;
   cout << "Ingrese un valor: " ;
   cin >> x;

   int f = fib(x);

   return 0;
}
