//============================================================================
// Name        : Ejercicio14.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a, b, i, producto;

	cout << "Ingrese dos valores numericos" << endl;
	cin >> a >> b;

	i = 0;
	producto = 0;

	while(i < b){

		producto = producto + a;
		i++;
	}

	cout << "El producto entre ambos es: " << producto << endl;
	
	return 0;
}



