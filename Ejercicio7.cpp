//============================================================================
// Name        : Ejercicio7.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	int a, b, c;
	int fecha = 0;
	cout << "Ingrese año, mes y dia aleatorio" << endl;
	cin >> a >> b >> c;

	fecha = a * 10000;
	b = b * 100;
	fecha = fecha + b;
	fecha = fecha + c;
	
	cout << fecha << endl;

	return 0;
}
