//============================================================================
// Name        : Ejercicio46.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

void raiz(double a, double b, double c, bool& ok){
double x1, x2;
double discri;
discri = b*b-4*a*c;

if( discri>=0 ){
	discri = sqrt(discri);
	x1 = (-b+discri)/(2*a);
	x2 = (-b-discri)/(2*a);
	ok = true;
}else{
	ok = false;
	}

}
