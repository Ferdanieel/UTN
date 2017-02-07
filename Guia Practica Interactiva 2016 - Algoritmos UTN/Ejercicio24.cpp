//============================================================================
// Name        : Ejercicio24.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main(){

	int valor;
	int suma = 0 ;
	int subcon = 0;
	int subconmax = 0;
	int posmax;
	int i = 0;
	int promedio, max = 0;
	int min = 0;
	int max1 = 0;
	cout << "Ingrese valores, 0 para crear un subconjunto y un numero negatico para terminar" << endl;
	cin >> valor;

	while(valor >= 0){
		
			while(valor !=0){

				suma = suma + valor;
				i++;
				
				if(valor > max){
				max = valor;
				posmax = i;
				}

				if(min == 0){
				min = valor;
				}
				if(valor < min){
				min = valor;
				}
				cin >> valor;
			
			}
			subcon++;
			if(max > max1){
				max1 = max;
				subconmax = subcon;
			}
			if(i == 0){
				cout << "El subconjunto no tiene valores" << endl;
				cin >> valor;
			}else{
				promedio = suma / i;
				cout << "Promedio  de valores del subconjunto " << subcon << " es: " << promedio << endl;
				cout << "Subconjunto: " << subcon << " Valor minimo: " << min << endl;
	           	
	           	suma = 0; 
	           	min = 0;
	           	i = 0;
	           	cin >> valor;
			}
			
	}		

	cout << "Total de subconjuntos procesados: " << subcon << endl;
	cout << "Maximo del conjunto:  " << max << " .Subconjunto que lo contiene: " << subconmax << " .Posicon relativa: " << posmax << endl;
		

	return 0;
}
