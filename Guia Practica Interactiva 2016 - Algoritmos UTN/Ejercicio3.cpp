//============================================================================
// Name        : Ejercicio3.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//quinta parte, resto de division y septima parte
	int a, quinta, resto, septima;
	
	cout << "Ingrese un valor numerico" << endl;
	cin >> a;

	quinta = a / 5;
	resto = a % 5;
	septima = quinta / 7;

	cout << "Quinta parte: " << quinta << endl << "Resto de la division por 5: " << resto << endl << "Septima parte de la quinta parte: " << septima << endl;

	return 0;
}
