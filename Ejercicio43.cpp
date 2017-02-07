//============================================================================
// Name        : Ejercicio43.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;


void facComun(int &, int &); //Calcula factor comun

int main() {

	int num, den;

	cout << "Ingrese numerador y denominador" << endl;
	cin >> num >> den;

	facComun(num, den);

	return 0;
}

void facComun(int num1, int den1){

	if(den1==1){
		cout << num1 << "/" << den1;
	}else{

	int b=2;

	while(b <= num1){
		if(den1 % b == 0 && num1 % b == 0){
			den1 = den1 / b;
			num1 = num1 / b;
			cout << num1 << "/"<< den1 << endl;
		}else{
		b++;
		}
		
	}

	}
}

