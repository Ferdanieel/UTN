//============================================================================
// Name        : Ejercicio10.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	int l1, l2, l3;
	cout << "Ingrese los tres valores de los lados de un triangulo" << endl;
	cin >> l1 >> l2 >> l3;

	if (l1 == l2 and l2 == l3){
		cout << "El triangulo es equilatero" << endl;
	}else{
		if(l1 == l2 or l2 == l3 or l3 == l1){
			cout << "El triangulo es isosceles" << endl;
		}else{
			cout << "El triangulo es escaleno" << endl;
		}
	}
	

	return 0;
}



