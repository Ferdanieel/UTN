//============================================================================
// Name        : Ejercicio23.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int valor, valor1, valor2, valor3;
	int promedio = 0;
	int maxn = 0;
	int suma = 0;
	int i = 0;
	int minp = 0;
	int minvalor = 0;
	cout << "Ingrese valores numericos positivos y negativos. Finalize con 0" << endl;
	cin >> valor;

	while(valor != 0){

		suma = valor + suma;
		//Maximo Negativo
		if(valor < 0){
			valor1 = valor;
		}

		if(maxn == 0){
			maxn = valor1;
		}

		if(valor1 >= maxn){
			maxn = valor1;
		}

		// Minimo Positivo
		if(valor > 0){
			valor2 = valor;
		}

		if(minp == 0){
			minp = valor2;
		}

		if(valor2 <= minp){
			minp = valor2;
		}

		//El valor mínimo dentro del rango -17 y 26.
		if(valor > -17 and valor < 26){
			valor3 = valor;
		}

		if(minvalor == 0){
			minvalor = valor3;
		}

		if(valor3 <= minvalor){
			minvalor = valor3;
		}

		//El promedio de todos los valores ingresados
		i++;


		cout << "Ingrese valores numericos positivos y negativos. Finalize con 0" << endl;
		cin >> valor;
	}

	promedio = suma / i;


	cout << "El valor maximo negativo es: " << maxn << endl;
	cout << "El valor minimo positivo es: " << minp << endl;
	cout << "El valor minimo entre -17 y 26: " << minvalor << endl;
	cout << "El promedio de todos los valores ingresados: " << promedio << endl;


	return 0;
}