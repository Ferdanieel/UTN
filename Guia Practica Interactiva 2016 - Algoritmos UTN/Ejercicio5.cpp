//============================================================================
// Name        : Ejercicio5.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	int a, b;
	cout << "Ingrese dos valores numericos" << endl;
	cin >> a >> b;

	if(a > b){
		cout << "El mayor de ambos es: " << a << endl;
		cout << "El menor de ambos es: " << b << endl;
	}else{
		if(b > a){
			cout << "El mayor de ambos es: " << b << endl;
			cout << "El menor de ambos es: " << a << endl;
		}else{
			cout << "Ambos valores son iguales" << endl;
		}
	}

	
	return 0;
}
