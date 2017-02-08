//============================================================================
// Name        : Ordenamiento.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo Practico Algoritmos-Matematica Discreta
//============================================================================


#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


using namespace std;


int main()
{
    int val,i,j,p;                                              //DECLARO VARIABLES
    cout<<"Ingrese cantidad de valores a ordenar"<<endl;        //INGRESO CANTIDAD DE VALORES
    cin>>val;                                                   //GUARDO CANTIDAD DE VALORES
    int vect[val];
    int auxa,auxb;
    system("cls");                                              //LIMPIO PANTALLA
    cout<<"ingrese un valor"<<endl;                             //INGRESO PRIMER VALOR
    cin>>vect[0];                                               //GUARDO PRIMER VALOR
    system("cls");                                              //LIMPIO PANTALLA
    for(i=1;i<val;i++)                                          //CICLO PARA INTRODUCIR RESTO DE VALORES
        {
            cout<<"ingrese otro valor"<<endl;                   //INTRODUZCO VALORES RESTANTES
            cin>>vect[i];                                       //GUARDO VALORES RESTANTES
            system("cls");                                      //LIMPIO PANTALLA
        }
        i=0;
        p=0;
    for(i=0;i<val;i++)                           //INICIO EL ORDENAMIENTO DE LOS DATOS INGRSADOS, A ESTE PROCEDIMIENTO SE LO CONOCE COMO BURBUJEO//
        {
            for(j=0;j<val-i;j++)
                {
                    auxa = vect[j];
                    auxb = vect[j+1];
                    if(auxa>auxb)
                        {
                           vect[j]=auxb;
                           vect[j+1]=auxa;
                           p = p+1;
                        }
                }
            p = p+1;
        }
    cout <<"Conjunto ordenado:"<< endl;                  //MUESTRA POR PANTALLA EL CONJUNTO DE VALORES ORDENADOS DE MENOR A MAYOR
    i=0;
    for(i=0;i<val;i++)
        {
        cout <<vect[i]<< "  ";
        }
        cout <<""<< endl;
        cout <<"La cantidad de pasos por los que paso el ordenamiento fueron: "<< endl;     //MUESTRA LOS PASOS POR LOS QUE PASO EL PROGRAMA PARA ORDENAR EL CONJUNTO
        cout << p << endl;
        getch ();
        return 0;
}
