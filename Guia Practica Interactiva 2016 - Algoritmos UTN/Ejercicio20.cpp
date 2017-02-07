//============================================================================
// Name        : Ejercicio20.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================



#include <iostream>
using namespace std;

int main() {
	
	int a, maximo = 0;
	int i = 0;

	cout << "Ingrese 10 valores numericos" << endl;
	while(i < 10){
		
		cin >> a;
		
		if(a > maximo){
			maximo = a;
		}

		i++;
	}

	cout << "El valor maximo es: " << maximo << endl;

	return 0;
}



