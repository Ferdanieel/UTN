//============================================================================
// Name        : Ejercicio22.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string nombre;
	string mayor;
	string menor;

	int fecha = 0;
	int fecha1 = 0;
	int dia, mes, anio, rdia;
	int max = 0;
	int min = 0;

	cout << "Ingrese nombre. Escriba -fin- para finalizar" << endl;
	cin >> nombre;

	while(nombre != "fin"){
		cout << "Ingrese fecha de nacimiento" << endl;
		cin >> fecha;

		dia = fecha / 1000000;
		rdia = fecha % 1000000;
		mes = rdia / 10000;
		anio = rdia % 10000;

		fecha1 = anio * 365.25 + mes * (365.25 / 12) + dia;



		if(fecha1 > max){
			max = fecha1;
			menor = nombre;
		}

		if(min == 0){
			min = fecha1;
				}

		if(fecha1 <= min){
			min = fecha1;
			mayor = nombre;
		}

		cout << "Ingrese nombre. Escriba -fin- para finalizar" << endl;
		cin >> nombre;
	}

 	cout << "La persona de mayor edad es: " << mayor << endl;
	cout << "La persona de menor edad es: " << menor << endl;

	return 0;
}
