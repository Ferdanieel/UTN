//============================================================================
// Name        : Ejercicio12.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int edad;
	cout << "Ingrese edad" << endl;
	cin >> edad ;

	if (edad <= 12){
		cout << "Usted es menor" << endl;
	}else{
		if (edad > 12 and edad < 19){
			cout << "Usted es cadete" << endl;
		}else{
			if (edad > 18 and edad <= 26){
				cout << "Usted es juvenil" << endl;
			}else{
				cout << "Usted es mayor" << endl;
			}
		}
	}

	
	
	return 0;
}



