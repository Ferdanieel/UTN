//============================================================================
// Name        : Ejercicio41.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

bool esMultiplo(int a, int b){
   if(a%b==0){
      return true;
   }
   else{

   return false;
}
}

int main() {
   int a,b;
   cout<<"ingrese un numero entero"<<endl;
   cin>>a;
   cout<<"ingrese otro numero entero"<<endl;
   cin>>b;
   int r= esMultiplo(a,b);

	cout<<a<<"es multiplo de "<<b<<" "<<r<<endl;
}
