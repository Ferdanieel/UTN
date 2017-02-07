//============================================================================
// Name        : Ejercicio31.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {

int num;
int i = 1;

cout << "Ingrese valor numerico positivo" << endl;
cin >> num;

while(i <= num){

	int j = 1;
	int num1;
	int cont = 0;

	while(j <= i){
		num1 = i % j;
		if(num1 == 0){
			cont++;
		}
		j++;
	}

	if(cont == 2){
		cout << "Numero primo: " << i << endl;
	}

	i++;
}

return 0;
}
