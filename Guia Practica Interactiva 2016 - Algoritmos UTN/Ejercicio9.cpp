//============================================================================
// Name        : Ejercicio9.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;


void abs(int& );

int main() {
	
	int anio1, mes1, dia1;
	int anio2, mes2, dia2;
	int anio3, mes3, dia3;
	int resta1, resta2;
	int fecha1, fecha2, fecha3;

	cout << "Ingrese anio actual" << endl;
	cin >> anio1;

	cout << "Ingrese mes actual" << endl;
	cin >> mes1;

	cout << "Ingrese dia actual" << endl;
	cin >> dia1;

	cout << "Ingrese anio aleatorio" << endl;
	cin >> anio2;

	cout << "Ingrese mes aleatorio" << endl;
	cin >> mes2;

	cout << "Ingrese dia aleatorio" << endl;
	cin >> dia2;

	cout << "Ingrese anio aleatorio" << endl;
	cin >> anio3;

	cout << "Ingrese mes aleatorio" << endl;
	cin >> mes3;

	cout << "Ingrese dia aleatorio" << endl;
	cin >> dia3;

	fecha1 = anio1 * (1462 / 4) + mes1 * (487 / 16) + dia1;
	fecha2 = anio2 * (1462 / 4) + mes2 * (487 / 16) + dia2;
	fecha3 = anio3 * (1462 / 4) + mes3 * (487 / 16) + dia3;

	resta1 = fecha1 - fecha2;
	resta2 = fecha1 - fecha3;

	abs(resta1);
	abs(resta2);

	if(resta1 < resta2){
		cout << "La fecha mas cercana a la actual es: " << anio2 << "/" << mes2 << "/" << dia2 << endl;
	}else{
		if(resta2 < resta1){
		cout << "La fecha mas cercana a la actual es: " << anio3 << "/" << mes3 << "/" << dia3 << endl;
			}else{
			cout << "Las fechas guardan la misma distancia" << endl; }

	return 0;
}}

void abs(int& a){
	int x;
	if(a >= 0){
		x = a;
		}else{
		x = a * -1;
			}
		}


