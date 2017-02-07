//============================================================================
// Name        : Ejercicio4.cpp
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
		cout << a << " es mayor que " << b << endl;
	}else{
		cout << b << " es mayor que " << a << endl;
	}

	return 0;
}
