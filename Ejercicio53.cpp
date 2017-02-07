//============================================================================
// Name        : Ejercicio53.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

// Prototipos
long toMin(long t);
void proceso(string, string, long, string, int &, int &, float &);
void calcPago(int ,int ,float ,int &,int &,float &);

int main() {

int num = 0;
string nom;
string dir;
long t;
string tipo;
int minEx = 0;
int minLib = 0;
float pagar = 0;

cout << "Ingrese numero de celular de 9 digitos (0 indica cambio de turno)" << endl;
cin >> num;

while(num >=0){

	cout << "Ingresar nombre del abonado" << endl;
	cin >> nom;
	cout << "Ingresar direecion del abonado(caracteres)" << endl;
	cin >> dir;
	cout << "Ingresar tiempo utilizado (formato hhmm)" << endl;
	cin >> t;
	cout << "Ingresar tipo de abono(A,B,C,D o E)" << endl;
	cin >> tipo;

	while(num != 0){
  		proceso(nom, dir, t, tipo, minEx, minLib, pagar);
		
		cout << "Ingrese numero de celular de 9 digitos (0 indica cambio de turno)" << endl;
		cin >> num;
		cout << "Ingresar nombre del abonado1" << endl;
		cin >> nom;
		cout << "Ingresar direccion del abonado(caracteres)" << endl;
		cin >> dir;
		cout << "Ingresar tiempo utilizado (formato hhmm)" << endl;
		cin >> t;
		cout << "Ingresar tipo de abono(A,B,C,D o E)" << endl;
		cin >> tipo;
				
	}

	cout << "Ingrese numero de celular de 9 digitos (0 indica cambio de turno)" << endl;
	cin >> num;
}
	return 0;
}

void proceso(string nom1, string dir1, long t1, string tipo1, int &minEx1, int &minLib1, float &pagar1){
	int costoAb1 = 0;
	float costMinEx1 = 0;
	int min1;
	if(tipo1 == "A"){
		costoAb1 = 70;
		minLib1 = 300;
		costMinEx1 = 0.09;
	}else{
		if(tipo1 == "B"){
			costoAb1 = 55;
			minLib1 = 200;
			costMinEx1 = 0.15;
			}else{
				if(tipo1 == "C"){
					costoAb1 = 40;
					minLib1 = 100;
					costMinEx1 = 0.21;
					}else{
						if(tipo1 == "D"){
							costoAb1 = 28;
							minLib1 = 60;
							costMinEx1 = 0.29;
							}else{
								if(tipo1 == "E"){
									costoAb1 = 19;
									minLib1 = 40;
									costMinEx1 = 0.37;
									}
							}
					}
			}
	}

	min1 = toMin(t1);
	calcPago(costoAb1, minLib1, costMinEx1, min1, minEx1, pagar1);

	cout << "Nombre: " << nom1 << "    " << "Direccion: " << dir1 << "    " << "Minutos Lib	res: " << minLib1 << "    " << "Minutos Excedidos: " << minEx1 << "    " << "Monto total: " << pagar1 << endl;

}

void calcPago(int costoAb2,int minLib2,float costMinEx2,int &min2,int &minEx2,float &pagar2){
	float minExPagar2;
	float subtotal2;
	minEx2 = min2 - minLib2;
	if(minEx2 > 0){
		minExPagar2 = minEx2 * costMinEx2;
	}else{
		minExPagar2 = 0;
		minEx2 = 0;
	}
subtotal2 = costoAb2 + minExPagar2;
pagar2 = subtotal2 + (subtotal2 * 0.21);

}
long toMin(long t){
	int hh, mm, minutos;
	hh = t / 100;
	mm = t % 100;
	minutos = hh * 60 + mm;
	return minutos;
}

