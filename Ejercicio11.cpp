//============================================================================
// Name        : Ejercicio11.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	int mes, anio, bisiesto;
	int enero = 1;
	int febrero = 2;
	int marzo = 3;
	int abril = 4;
	int mayo = 5;
	int junio = 6;
	int julio = 7;
	int agosto = 8;
	int septiembre = 9;
	int octubre = 10;
	int noviembre = 11;
	int diciembre = 12;
	
	cout << "Ingrese mes y anio" << endl;
	cin >> mes >> anio;

	bisiesto = anio % 4;

	if(mes > 12 or mes < 1){
		cout << "No existe ese mes" << endl;
	}else{
		if (bisiesto == 0){
			if(mes == enero or mes == marzo or mes == mayo or mes == julio or mes == agosto or mes == octubre or mes == diciembre){
				cout << "El mes tiene 31 dias" << endl;
			}else{
				if(mes == abril or mes == junio or mes == septiembre or mes == noviembre){
					cout << "El mes tiene 30 dias" << endl;
				}else{
					cout << "El mes tiene 29 dias" << endl;
				}

			}

			
	}else{
		if(mes == enero or mes == marzo or mes == mayo or mes == julio or mes == agosto or mes == octubre or mes == diciembre){
				cout << "El mes tiene 31 dias" << endl;
			}else{
				if(mes == abril or mes == junio or mes == septiembre or mes == noviembre){
					cout << "El mes tiene 30 dias" << endl;
				}else{
					cout << "El mes tiene 28 dias" << endl;
				}

			}
	}



	}
	

	return 0;
}



