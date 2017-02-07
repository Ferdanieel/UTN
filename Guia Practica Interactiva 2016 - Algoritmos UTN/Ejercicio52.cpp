//============================================================================
// Name        : Ejercicio52.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main(){
	int dia, mes, anio;
	string sexo;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int n = 0;
	int minanio = 0;
	int minmes = 0;
	int mindia = 0;
	string pervieja;
	int nacoctube;
	int nac2;
	int nacmuj;

	cout << "Ingrese dia de nacimiento (2 digitos). Para finalizar digite 0" << endl;
	cin >> dia;


	while(dia != 0){

	cout << "Ingrese mes de nacimiento (2 digitos)" << endl;
	cin >> mes;

	cout << "Ingrese anio de nacimiento (4 digitos)" << endl;
	cin >> anio;

	cout << "Ingrese sexo ('M' masculino, 'F' femenino)" << endl;
	cin >> sexo;

		if(mes == 10){
			i++;
		}
		if(anio == 1990 and mes <= 07 and dia < 9){
			j++;
		} 
		if(anio <= 1989){
			k++;
		}
		if(sexo == "F" and anio == 1982 and mes == 9 and dia >= 21){
			l++;
		}
		if(sexo == "F" and anio == 1982 and mes > 9 and mes < 12){
			m++;
		}
		if(sexo == "F" and anio == 1982 and mes == 12 and dia <= 21){
			n++;
		}

		if(minanio == 0 and minmes == 0 and mindia == 0){
			minanio = anio;
			minmes = mes;
			mindia = dia;
			pervieja = sexo;
		}

		if(anio < minanio ){
			minanio = anio;
			minmes = mes;
			mindia = dia;  
			pervieja = sexo;
		}else{
			if(anio == minanio and mes < minmes){
				minanio = anio;
				minmes = mes;
				mindia = dia;  
				pervieja = sexo;
			}else{
				if(anio == minanio and mes == minmes and dia < mindia){
					minanio = anio;
					minmes = mes;
					mindia = dia;  
					pervieja = sexo;
				}
			}
		}
    cout << "Ingrese dia de nacimiento (2 digitos). Para finalizar digite 0" << endl;
	cin >> dia;

	}
nacoctube = i;
nac2 = j + k;
nacmuj = l + m + n;

cout << "Cantidad de nacimientos que hubo  en el mes  de octubre de todos los anios: " << nacoctube << endl;
cout << "Cantidad de nacimientos que hubo antes  del 9 de julio de 1990: " << nac2 << endl;
cout << "Cantidad de nacimientos de mujeres que hubo en la primavera de 1982: " << nacmuj << endl;
cout << "Sexo de la persona mas vieja: " << pervieja << endl;

return 0;
}