//============================================================================
// Name        : Ejercicio36.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

//Prototipos
void proceso(int, int, int &, int &);
void finVuelo(int, int , int &, int &, int &, int &, int &, int &, int);
void procesarSeguidilla(int &, int &, int &, int &);

int main() {
	int totGral = 0;
	int vueMaxRec = 0;
	int vueComp = 0;
	int maxVC = 0;
	int nvMaxRec = 0;
	
	int m;
	int i = 0;
	cout << "Ingrese la cantidad de vuelos al exterior" << endl;
	cin >> m;

	while(i < m){
		int nv, ca, de, pa, imp;
		int totRecVue = 0;
		int cantPas = 0;
		

		cout << "Ingrese el numero de vuelo" << endl;
		cin >> nv;
		cout << "Ingrese la cantidad de asientos" << endl;
		cin >> ca;
		cout << "Ingrese el numero de destino" << endl;
		cin >> de;
		cout << "Ingrese el numero de pasaporte de pasajero" << endl;
		cin >> pa;

		while(pa != 0){
			
         cout << "Ingrese el importe que abono el pasajero" << endl;
			cin >> imp;

			proceso(pa, imp, totRecVue, cantPas);

			cout << "Ingrese el numero de pasaporte de pasajero" << endl;
			cin >> pa;
		}

	finVuelo(totRecVue, cantPas, ca, totGral, vueMaxRec, nvMaxRec, vueComp, maxVC, nv);
		i++;
	}

	cout << "Total recaudado en el mes: " << totGral << endl;
	cout << "Cantidad de veces seguidas que se dieron vuelos completos: " << maxVC << endl;
	cout << "El numero de vuelo que mas recaudo: " << nvMaxRec << endl;

	return 0;
}


void proceso(int pa1, int imp1, int &totRecVue1, int &cantPas1){
	cout << "Numero de Pasaporte: " << pa1 << "      Importe en u$s: "<< imp1 << endl;
	totRecVue1 = totRecVue1 + imp1;
	cantPas1++;
}

void finVuelo(int totRecVue2, int cantPas2, int &ca2, int &totGral2, int &vueMaxRec2, int &nvMaxRec2, int &vueComp2, int &maxVC2, int nv2 ){

	int porcOcupados, porcLibres;
	porcOcupados = (cantPas2 * 100) / ca2;
	porcLibres = 100 - porcOcupados;
	totGral2 = totGral2 + totRecVue2;

	cout << "Total recaudado del vuelo: " << totRecVue2 << endl;
	cout << "% de asientos libres del vuelo: " << porcLibres << endl;
	cout << "% de asientos ocupados del vuelo: " << porcOcupados << endl;

	if(totRecVue2 > vueMaxRec2){
		vueMaxRec2 = totRecVue2;
		nvMaxRec2 = nv2;
	}

	procesarSeguidilla(cantPas2, ca2, vueComp2, maxVC2);
}

void procesarSeguidilla(int &cantPas3, int &ca3, int &vueComp3, int &maxVC3){
	if(cantPas3 == ca3){
		vueComp3++;
	}else{
		if(vueComp3 > maxVC3){
			maxVC3 = vueComp3;
			vueComp3 = 0;
		}
	}
}

