//============================================================================
// Name        : Ejercicio37.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;


int mcd(int a,int b){
   int m,r;
   while(r!=0){
         r=a%b;
         if(r==0){
          m=b;
         }
         else {
                   a=b;
                   b=r;

         }
   }
   return(m);
}

int main() {
   int a,b;
	cout << "ingrese un entero"<<endl;
	cin >> a;
	cout<<"ingrese otro entero"<<endl;
	cin>>b;
	int r=mcd(a,b);

	cout<<"el maximo comun divisor es"<<r<<endl;
      }
