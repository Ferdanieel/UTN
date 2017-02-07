//============================================================================
// Name        : Ejercicio17.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

void proceso( int, int, int &, int &, int &);
void validar(int, int, int);

int main() {

	int k = 0;
	int p = 0;
	int cont = 0;
	int codEq = 0;
	int pg = 0;
	int pe = 0;
	int pp = 0;

	cout << "Ingrese cantidad de equipos" << endl;
	cin >> k;

	p = ((k *(k-1)) / 2);

	while(cont < k){

		cout << "Ingrese codigo de equipo" << endl;
		cin >> codEq;
		proceso(p, codEq, pg, pe, pp);
		cont++;

	}

	cout << "Partidos ganados" << pg << endl;
	cout << "Partidos empatados" << pe << endl;
	cout << "Partidos perdidos" << pp << endl;

	validar(pg, pe, k);
	return 0;
}

void proceso(int part,int codEqui,int &parg,int &pare,int &parp ){
	int s = 0;
	int puntaje = 0;

	while(s < part){
		char resultado;
		cout << "Ingrese resultado: G (partido ganado)  E (partido empatados)  P (partido perdido)" << endl;
		cin >> resultado;

		if(resultado == 'G'){
			puntaje = puntaje + 3;
			parg++;
		}

		if(resultado == 'E'){
			puntaje = puntaje + 1;
			pare++;
		}

		if(resultado == 'P'){
			parp++;
		}

		s++;
		part--;
	}

	cout << "Equipo " << codEqui << endl;
	cout << "Puntaje : " << puntaje << endl;
}

void validar(int parg,int pare,int cant){

	if((parg + pare) == (cant * (cant - 1)) / 2){
		cout << "Valido" << endl;
	}else{
		cout << "No valido" << endl;
	}
}
