//============================================================================
// Name        : Clasificador.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo Practico Algoritmos-Matematica Discreta
//============================================================================

#include<iostream>
#include<stdlib.h>

using namespace std;

int esPrimo(int Num)
{
	int Div =1;
	int i = 1;
	while(i<Num){
		if((Num%i)==0){
			Div++;
		}
		i++;
	}
	if(Div>2 || Num==1){
		return 0;
	}
	else{
		return 1;
	}


}

int main() {

	int c=0;

	cout << "Ingrese cantidad de numeros"<< endl;
	cin >> c;
	int ar[c];
	int ar1[2][c];

	for(int i =0; i <= c-1;i++){
		cout << "Ingrese numero"<< endl;
		cin >> ar[i];
	}


	int cont=0;
	int cont1=0;
	for(int i =0; i < c;i++){
		if(esPrimo(ar[i])== 1){
			ar1[0][cont] = ar[i];
			cont++;
		}
		if(esPrimo(ar[i])== 0){
			ar1[1][cont1] = ar[i];
			cont1++;
		}
	}

	cout << "Numeros primos :";
	for(int i =0; i < cont; i++){
		cout << ar1[0][i];
	}

	cout << endl;

	cout << "Numeros no primos :";
	for(int i =0; i < cont1; i++){
		cout << ar1[1][i];
	}
	cout << endl<<endl;


    system("pause");

	return 0;
}
