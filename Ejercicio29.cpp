//============================================================================
// Name        : Ejercicio29.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

void mRom(int, string &);
void cRom(int, string &);
void dRom(int, string &);
void uRom(int, string &);

int main() {

	int n;
	int m, r1, c, r2, d, r3, u;
	string rst1;
	string rst2;
	string rst3;
	string rst4;


	cout << "Ingrese valor numerico entre 1 y 3999 para convertir a numeros romanos" << endl;
	cin >> n;

	m = n / 1000;
	r1 = n % 1000;
	c = r1 / 100;
	r2 = r1 % 100;
	d = r2 / 10;
	r3 = r2 % 10;
	u = r3;

	mRom(m, rst1);
	cRom(c, rst2);
	dRom(d, rst3);
	uRom(u, rst4);

	cout << rst1 << rst2 << rst3 << rst4 << endl;
	return 0;
}

void mRom(int m1, string &rst11){
	if(m1 == 1){
		rst11 = "M";
	}
	if(m1 == 2){
		rst11 = "MM";
	}
	if(m1 == 3){
		rst11 = "MMM";
	}
}
void cRom(int c1, string &rst22){
	if(c1 == 1){
		rst22 = "C";
	}
	if(c1 == 2){
		rst22 = "CC";
	}
	if(c1 == 3){
		rst22 = "CCC";
	}
	if(c1 == 4){
		rst22 = "CD";
	}
	if(c1 == 5){
		rst22 = "D";
	}
	if(c1 == 6){
		rst22 = "DC";
	}
	if(c1 == 7){
		rst22 = "DCC";
	}
	if(c1 == 8){
		rst22 = "DCCC";
	}
	if(c1 == 9){
		rst22 = "CM";
	}
}
void dRom(int d1, string &rst33){
	if(d1 == 1){
		rst33 = "X";
	}
	if(d1 == 2){
		rst33 = "XX";
	}
	if(d1 == 3){
		rst33 = "XXX";
	}
	if(d1 == 4){
		rst33 = "XL";
	}
	if(d1 == 5){
		rst33 = "L";
	}
	if(d1 == 6){
		rst33 = "LX";
	}
	if(d1 == 7){
		rst33 = "LXX";
	}
	if(d1 == 8){
		rst33 = "LXXX";
	}
	if(d1 == 9){
		rst33 = "XC";
	}
}
void uRom(int u1, string &rst44){
	if(u1 == 1){
		rst44 = "I";
	}
	if(u1 == 2){
		rst44 = "II";
	}
	if(u1 == 3){
		rst44 = "III";
	}
	if(u1 == 4){
		rst44 = "IV";
	}
	if(u1 == 5){
		rst44 = "V";
	}
	if(u1 == 6){
		rst44 = "VI";
	}
	if(u1 == 7){
		rst44 = "VII";
	}
	if(u1 == 8){
		rst44 = "VIII";
	}
	if(u1 == 9){
		rst44 = "IX";
	}
}
