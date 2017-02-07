//============================================================================
// Name        : Ejercicio16.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a, i, k, suma, promedio, suma1;
	i = 0;
	suma = 0;
	k = 0;
	suma1 = 0;

	cout << "Ingrese 50 numeros enteros" << endl;

	while(i < 50){
		cin >> a;
		if(a > 100){
		
			suma = suma + a;
			k++;
		}

		if(a < -10){
			suma1 = suma1 + a;
		}

		i++;
		cout << "Ingrese 50 numeros enteros" << endl;
	}

	promedio = suma / k;


	cout << "Promedio mayores de 100 es : " << promedio << endl;
	cout << "Suma de menores de -10 : " << suma1 << endl;


	
	return 0;
}



