//============================================================================
// Name        : Crear.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo Practico - Archivo Binario - Pablo Sznajdleder
//============================================================================

#include <iostream>
#include <limits>
#include <windows.h>
#include <stdio.h>
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

// Funciones

void writeByte(FILE* f, int i){
	fwrite(&i,1,1,f);
};

void writeInteger(FILE*f,int i){

	if(i <= 0xFF){
		i = i << 8;
		fwrite(&i,2,1,f);
	}else{
	fwrite(&i,2,1,f);
	}
};

void writeCString(FILE*f, string s ){
	int longitud = 0;
	for(int i=0; s[i] != '\0'; i++){
		longitud++;
	}

	writeByte(f,longitud);
	for(int i=0; s[i] != '\0'; i++){
		writeByte(f,s[i]);
	}


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

void writeCantCamposReg(FILE*f, int r){
	writeInteger(f,r);
};

void writeNField(FILE*f,int c1){
	writeInteger(f,c1);
};

void writeCantRegistros(FILE*f,int cantReg){
	writeInteger(f,cantReg);
};

void writeFullFields(FILE*f,int fullField){
	writeInteger(f,fullField);
};



int main(){

	FILE* f = fopen("DEMO.dat","w+b");
	int nroSerie = 0;
	char path[255];
	string pathFile ="";
	char t[255];
	string text = "";
	Date d;
	int camposReg = 4;
	int c1 = 1;
	int c2 = 2;
	int c3 = 3;
	int c4 = 4;
	int cantReg = 0;
	int fullField = 0;
	int codF = 0;


	cout << "Ingrese Numero de Serie: " << endl;
	cin >> nroSerie;
	writeInteger(f,nroSerie);


	GetFullPathName(("DEMO.dat"), 255, path, NULL);
	pathFile = path;
	writeCString(f,pathFile);

	cout << "Ingrese año: ";
	cin >> d.year;
	cout << "Ingrese mes: ";
	cin >> d.month;
	cout << "Ingrese dia: ";
	cin >> d.day;

	writeDate(f,d);
	writeCantCamposReg(f,camposReg);
	writeNField(f,c1);
	writeCString(f,"Name");
	writeNField(f,c2);
	writeCString(f,"Telephone");
	writeNField(f,c3);
	writeCString(f,"Address");
	writeNField(f,c4);
	writeCString(f,"EMail");

	cout << "Ingrese cantidad de Registros " << endl;
	cin >> cantReg;
	writeCantRegistros(f,cantReg);


//-----------------------REGISTROS--------------------------------
//-----------------------REGISTROS--------------------------------
//-----------------------REGISTROS--------------------------------

	for(int i = 0; i < cantReg; i++ ){
		cout << "---------------NUEVO REGISTRO---------------" << endl;
		cout << "Ingrese cantidad de campos llenos del registro" << endl;
		cin >> fullField;
		writeFullFields(f,fullField);

		for(int i = 0; i < fullField; i++){
			cout << "Ingrese codigo de campo : 1(name), 2(telephone), 3(Address), 4(Email)" << endl;
			cin >> codF;
			writeNField(f,codF);
			cout << "Ingrese contenido del campo" << endl;
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cin.getline(t,255);
			text = t;
			writeCString(f,text);
		}
	}

	fclose(f);
	return 0;
}
