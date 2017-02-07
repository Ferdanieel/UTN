//============================================================================
// Name        : Ejercicio50.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int calcularBilletes(int& monto,int denom){

   int cant=monto/denom;
   monto=monto%denom;
   return cant;
}

int main() {
	int suma;
	cout<<"Ingrese un valor"<<endl;
	cin>>suma;

	   cout<<"cantidad de billetes de $100"<<" "<<calcularBilletes(suma,100)<<endl;
	   suma=suma%100;
	   cout<<"cantidad de billetes de $50"<<" "<<calcularBilletes(suma,50)<<endl;
	   suma=suma%50;
	   cout<<"cantidad de billetes de $20"<<" "<<calcularBilletes(suma,20)<<endl;
	   suma=suma%20;
	   cout<<"cantidad de billetes de $10"<<" "<<calcularBilletes(suma,10)<<endl;
	   suma=suma%10;
	   cout<<"cantidad de billetes de $5"<<" "<<calcularBilletes(suma,5)<<endl;
	   suma=suma%5;
	   cout<<"cantidad de billetes de $1"<<" "<<calcularBilletes(suma,1)<<endl;

}
