//============================================================================
// Name        : Ejercicio15.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a, i, factorial;
	cout << "Ingrese valor numerico" << endl;
	cin >> a;

	i = 1;
	factorial = 1;
	while(i <= a){
		factorial = factorial * i;
		i++;
	} 
	cout << "Su factorial es: " << factorial << endl;

	return 0;
}



