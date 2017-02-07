//============================================================================
// Name        : Ejercicio49.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int main() {

int num1;
int billdos = 0;
int billcinco = 0;
int billdiez = 0;
int billveinte = 0;
int billcincuenta = 0;
int billcien = 0;

cout << "Ingrese suma de dinero" << endl;
cin >> num1;

while(num1 >= 100){
	num1 = num1 - 100;
	billcien++;
}

while(num1 >= 50 and num1 < 100){
	num1 = num1 - 50;
	billcincuenta++;
}

while(num1 >= 20 and num1 < 50){
	num1 = num1 - 20;
	billveinte++;
}

while(num1 >= 10 and num1 < 20){
	num1 = num1 - 10;
	billdiez++;
}

while(num1 >=5 and num1 < 10){
	num1 = num1 - 5;
	billcinco++;
}

while(num1 >= 2 and num1 < 5){
	num1 = num1 - 2;
	billdos++;
}

cout << "Se necesitan : " << endl;
cout << billcien << " billetes de cien" << endl;
cout << billcincuenta << " billetes de cincuenta" << endl;
cout << billveinte << " billetes de veinte" << endl;
cout << billdiez << " billetes de diez" << endl;
cout << billcinco << " billetes de cinco" << endl;
cout << billdos << " billetes de dos" << endl;

return 0;
}




