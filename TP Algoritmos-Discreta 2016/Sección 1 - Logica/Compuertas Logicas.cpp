//============================================================================
// Name        : Compuertas Logicas.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo Practico Algoritmos-Matematica Discreta
//============================================================================


#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

	bool p;
	bool q;
	bool r;
	bool solv;
	bool solv1;

	cout << "Dada la expresion: [(p -> q)^(p -> r)] -> (p -> r)" << endl;
	cout << "Ingrese valor de p: (1 o 0)" << endl;
	cin>> p;
	cout << "Ingrese valor de q: (1 o 0)" << endl;
	cin>> q;
	cout << "Ingrese valor de r: (1 o 0)" << endl;
	cin>> r;
	solv = !((!p|q)&(!p|r))|(!p|r);
	cout << "Valor de verdad de la expresion: "<< solv << endl<< endl;

	p=q=r=0;
	cout << "Dada la expresion: [(-p ^ q) v -r] <-> [r ^ -(p ^ -q)]" << endl;
	cout << "Ingrese valor de p: (1 o 0)" << endl;
	cin>> p;
	cout << "Ingrese valor de q: (1 o 0)" << endl;
	cin>> q;
	cout << "Ingrese valor de r: (1 o 0)" << endl;
	cin>> r;
	solv1 = (!((!p&q)|!r)|(r&!(p&!q)))&(!(r&!(p&!q))|((!p&q)|!r));
	cout << "Valor de verdad de la expresion: "<< solv1<< endl;

	system("pause");
return 0;

}
