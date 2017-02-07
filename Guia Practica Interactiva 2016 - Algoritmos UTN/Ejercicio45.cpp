//============================================================================
// Name        : Ejercicio45.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

double pow(unsigned int ,unsigned int );

int main() {
	unsigned int base, exponente;
	cout << "Ingrese base y exponente" << endl;
	cin >> base >> exponente;
	pow(base, exponente);

	return 0;
}

double pow(unsigned int x,unsigned int y){

	int potencia;
	int i = 1;
	potencia = x;

	while(i < y){

		potencia = potencia * x;
		i++;
	}

	cout << "La potencia es: " << potencia << endl;

}

