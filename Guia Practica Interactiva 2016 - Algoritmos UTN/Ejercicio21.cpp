//============================================================================
// Name        : Ejercicio21.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a, cant, i, k, j = 0;
	int min, num, num1 = 0;
	int max;
	
	cout << "Ingrese la cantidad de numeros que quiere ingresar" << endl;
	cin >> cant;
	a = cant;
	cout << "Ingrese "<< a << " valores numericos que se encuentren entre 0 y 100" << endl;

	while(i < cant){
		cin >> num;
		
		if(num > 0 and num < 101){
			num1 = num;

		}else{
			cout << "Ingrese numero correcto" << endl;
			i--;
		}

		if(num1 > max){
			max = num1;
			j = i;
		}
		
		if(min == 0){
			min = num1;
			}
		
		if(num1 < min){
			min = num1;
			k = i;
		}
	
		i++;
		
	}
	
	cout << "El numero mayor es: " << max << " y su posicion es: " << j + 1 << endl;
	cout << "El numero menor es: " << min << " y su posicion es: " << k + 1 << endl;

	return 0;
}