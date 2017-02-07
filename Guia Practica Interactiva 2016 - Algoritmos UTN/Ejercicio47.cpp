//============================================================================
// Name        : Ejercicio47.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

void sumarHora(long , long , long &);

int main() {

	long hora, tiempo;
	long respuesta;
	cout << "Ingrese una hora y un tiempo ambos con formato hhmmss" << endl;
	cin >> hora >> tiempo;
	

 sumarHora(hora, tiempo, respuesta);

 cout << "La suma de esas hora es: " << respuesta << endl;

}

void sumarHora(long h, long t, long& res){

	int hora1, hora2, hora3, minuto1, minuto2, minuto3, segundo1, segundo2, segundo3;
	int restohora1, restohora2;
	int resminuto, ressegundo;
	int reshora;

	hora1 = h / 10000;
	restohora1 = h % 10000;	
	minuto1 = restohora1 / 100;
	segundo1 =	restohora1 % 100;

	hora2 = t / 10000;
	restohora2 = t % 10000;
	minuto2 = restohora2 / 100;
	segundo2 =	restohora2 % 100;


	segundo3 = segundo1 + segundo2;
	minuto3 = minuto1 + minuto2;
	hora3 = hora1 + hora2;

	if(segundo3 >= 60){
		ressegundo = segundo3 - 60;
		minuto3++;
	}else{
		ressegundo = segundo3;
	}

	if(minuto3 >= 60){
		resminuto = minuto3 - 60;
		hora3++;
	}else{
		resminuto = minuto3;
	}

	if(hora3 >= 24){
		reshora = hora3 - 24;
	}else{
		reshora = hora3;
	}

	res = (reshora * 10000) + (resminuto * 100) + ressegundo;
}
