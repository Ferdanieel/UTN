//============================================================================
// Name        : Mostrar.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo Practico - Archivo Binario - Pablo Sznajdleder
//============================================================================

#include <iostream>
#include <string.h>
#include <windows.h>
#include <stdio.h>
#include <ctime>

using namespace std;

//TAD's (Tipos abstractos de Datos)

struct Date{
	int year ;
	int month;
	int day ;
};

struct Flag{
	char fg;
};

struct CString{
	Flag f;
	int lenght;
	char c[255];
};

struct RegType{
	int codF;
	CString desF;
};

struct RegData{
	int fieldFull;
	int codF;
	CString ContF;
};

struct Header{
	int serial;
	CString s;
	Date d;
	int cantF;
	RegType type;
	int cantR;
};

struct Main{
	RegData m;
};

// Funciones

void writeInteger(FILE*f,int i){
	fwrite(&i,2,1,f);

};

void writeDate(FILE*f, Date d){
	int i=0;
	int day;
	int month;
	int year;

	day  = d.day << 11;
	month = d.month << 7;

	if (d.year >= 2000){
		year = d.year - 2000;
	}else{
		year = 1999 + 100 - d.year;
	}

	i = day + month + year;
	writeInteger(f,i);

};

void updateDate(FILE*f){
	Date d;
	time_t now = time(0);
	tm *ltm = localtime(&now);

	int curr = ftell(f);
	d.month = 1 + ltm->tm_mon;
	d.day = ltm->tm_mday;
	d.year = 1900 + ltm->tm_year;

	fseek(f,curr - 2,SEEK_SET);
	writeDate(f,d);
	fseek(f,curr,SEEK_SET);
};

int longitud(string s){
	int i =0;

	for(int j=0; s[j] != '\0';j++){
		i++;
	}

	return i;
};

int readByte(FILE*f){
	char b = 0;
	fread(&b,1,1,f);
	return b;
};

int readInteger(FILE* f){

	int b = 0;
	fread(&b, 2,1,f);

	if((b << 24) == 0x00000000){
		b = b >> 8;
	}

	return b;
};

string readCString(FILE*f){

	string s;
	CString c;

	c.lenght = readByte(f);

	for(int i=0;i < c.lenght;i++){

		fread(&c.c[i],1,1,f);
		s = s + c.c[i];
	}

	return s;
};

Date readDate(FILE*f){
	Date d;
	int i = 0;

	i = readInteger(f);

	d.year = i & 0x00007F;

	if(d.year < 100){
		d.year = d.year + 2000 ;
	}else{
		d.year = 1999 - d.year +100;
	};
	d.month = (i = i >> 7) & 0x000F;
	d.day = (i = i >> 4);


	updateDate(f);

	return d;
};

RegType readRegType(FILE*f){

	RegType t;

	t.codF = readByte(f);
	t.codF = t.codF << 8;
	t.codF = t.codF + readByte(f);

	t.desF.lenght = readByte(f);

	for(int i = 0; i < t.desF.lenght; i++){
		fread(&t.desF.c[i],sizeof(char),1,f);
	}

	return t;
};


void mostrarRegType(FILE* f, Header& c){
		string a;
		for(int i=0;i < c.type.desF.lenght;i++){
			  a = a + c.type.desF.c[i];
		}

		cout << "Campo [codigo: " << c.type.codF << ", " << "descripcion: " << a << "]" <<endl;


		string b;
		for(int i = 0; i < c.cantF - 1; i++){
			b = "";
			c.type = readRegType(f);

			for(int i=0;i < c.type.desF.lenght;i++){
					b = b + c.type.desF.c[i];
			}
			cout << "Campo [codigo: " << c.type.codF << ", " << "descripcion: " << b << "]" <<endl;
		}
};

RegData readRegData(FILE*f){
	RegData m;

	m.fieldFull = readInteger(f);
	m.codF = readInteger(f);
	m.ContF.lenght = readByte(f);

	for(int i = 0; i < m.ContF.lenght;i++){
		fread(&m.ContF.c[i],sizeof(char),1,f);
	}
	return m;
};


void mostrarHeader(FILE* f ,Header& c, string s, Date d ){
	cout << "Nro. de Serie: " << c.serial <<endl;
	cout << "Full Filename: " << s <<endl;
	cout << "Fecha Modificacion: " << d.year << "/" << d.month << "/"<< d.day <<endl;

	cout << "Cantidad de campos customizados: " << c.cantF << endl;

	mostrarRegType(f,c);
	c.cantR = readInteger(f);
	cout << "Cantidad de Registros: " << c.cantR << endl << endl;;

};

void mostrarMain(FILE*f,Main m,Header& c){

	for(int i = 0; i < c.cantR; i++){

		string p;
		for(int k=0; k < m.m.ContF.lenght; k++){
			p = p + m.m.ContF.c[k];
		}

		if(m.m.codF == 1){
			cout << "Nombre : " << p << endl;
		}
		if(m.m.codF == 2){
			cout << "Telefono : " << p << endl;
		}
		if(m.m.codF == 3){
			cout << "Direccion : " << p << endl;
		}
		if(m.m.codF == 4){
			cout << "Email : " << p << endl;;
		}

		string r ;
		for(int j = 0; j < m.m.fieldFull - 1; j++){
			r = "";
			m.m.codF = readInteger(f);
			r =  readCString(f);

			if(m.m.codF == 1){
				cout << "Nombre: " << r << endl;
			}
			if(m.m.codF == 2){
				cout << "Telefono: " << r << endl;
			}
			if(m.m.codF == 3){
				cout << "Direccion: " << r << endl;
			}
			if(m.m.codF == 4){
				cout << "Email: " << r << endl;;
			}
		}

		cout << endl;
		m.m = readRegData(f);

	}

};



int main() {

	Header c;
	Main m;
	string s;
	string a;
	Date d;

	FILE* f = fopen("DEMO.dat","rb+");

//	while(!feof(f)){
	c.serial = readInteger(f);
	s = readCString(f);
	d = readDate(f);
	c.cantF = readInteger(f);
	c.type = readRegType(f);

	mostrarHeader(f,c,s,d);

	m.m = readRegData(f);

	mostrarMain(f,m,c);
//	}

	fclose(f);
	system("pause");

	return 0;
}
