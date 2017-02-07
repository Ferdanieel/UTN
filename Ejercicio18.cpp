//============================================================================
// Name        : Ejercicio18.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================



#include <iostream>
using namespace std;

int main() {

int salario;
int i = 0;
int j = 0;
int k = 0;
int l = 0;

cout << "Ingrese sueldo de empleado" << endl;
cin >> salario;


while(salario != 0){

	if(salario < 2000){
		i++;
		//cout << "Gana menos de 2000" << endl;
	}
	if(salario >= 2000 and salario < 3000){
			j++;
			//cout << "Gana entre 2000 y 3000" << endl;
	}
	if(salario >= 3000 and salario <= 5000){
				k++;
				//cout << "Gana entre 3000 y 5000" << endl;
	}
	if(salario > 5000){
					l++;
				}

	cout << "Ingrese sueldo de empleado" << endl;
	cin >> salario;
}

cout << i << " empleados ganan menos de 2000" << endl;
cout << j << " empleados ganan entre 2000 y 3000" << endl;
cout << k << " empleados ganan entre 3000 y 5000" << endl;
cout << l << " empleados ganan mas de 5000" << endl;


	return 0;
}
