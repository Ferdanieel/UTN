//============================================================================
// Name        : Ejercicio51.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;


int main() {

	int x1,x2,y1,y2,perimetro;
	int a=0,n=0;

	while(a<20){
	   cout<<"ingrese x1"<<endl;
	   cin>>x1;
	   cout<<"ingrese y1"<<endl;
	   cin>>y1;
	   cout<<"ingrese x2"<<endl;
	   cin>>x2;
	   cout<<"ingrese y2"<<endl;
	   cin>>y2;



	   int lado1=(fabs(x2-x1));
	   int lado2=(fabs(y2-y1));


	   if(lado1==lado2){
	      perimetro=(lado1*4);
	      cout<<"perimetro"<<" "<<perimetro<<endl;
	   }
	   else{
	      n++;
	   }

	   a++;
	}
   cout<<"cantidad de rectangulos que no son cuadrados"<<" "<<n<<endl;
}
