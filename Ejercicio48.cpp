//============================================================================
// Name        : Ejercicio48.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

bool esPrimo(int );

int main() {

int num1;
cout << "Ingrese numero para determinar si es primo" << endl;
cin >> num1;

cout << esPrimo(num1) << endl;

}

bool esPrimo(int n){
	int num2, cont;
	int i = 1;
	while(i <= n){
		num2 = n % i;
		if(num2 == 0){
			cont++;
		}
		i++;
	}

	if(cont == 2){
		return true;
	}else{
		return false;
	}

}

