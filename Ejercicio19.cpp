//============================================================================
// Name        : Ejercicio19.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================



#include <iostream>
using namespace std;

int main() {

	int m, resto, cinco;
	int i = 0;

	cout << "Ingrese un valor numerico" << endl;
	cin >> m;

	while(i < m){

		resto = i % 3;
		cinco = i % 5;

		if(resto == 0 and cinco != 0){
			cout << "Multiplo: " << i << endl;

		}

		i++;
	}

	return 0;
}



