//============================================================================
// Name        : Ejercicio26.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;


int main()
{
    int MaxId=0;
    int Count3=0;
    int Count2=0;
    int Count1=0;
    int TotalW=0;
    int IdPort=0;
    int IdCont=0;
    int W=0;
    int MaxW=0;
    int i=0;
    while(i<5){
        cout<<"Ingrese la ID del contenedor"<<endl;
        cin>>IdCont;
        cout<<"Ingrese el peso del contenedor"<<endl;
        cin>>W;
        cout<<"Ingrese la ID del puerto"<<endl;
        cin>>IdPort;
        TotalW=TotalW+W;
            if(MaxW==0){
                MaxW=W;
                MaxId=IdCont;
            }
            else{
                if(W<MaxW){
                }
                else{
                    MaxW=W;
                    MaxId=IdCont;
                }
        }

        if(IdPort==3){
            Count3++;
        }
        else if(IdPort==2){
            Count2++;
        }
        else{
            Count1++;
        }

        i++;
    }

    cout<<"Peso total del buque: "<<TotalW<<endl;
    cout<<"La ID del contenedor mas pesado es: "<<MaxId<<endl;
    cout<<"Cantidad de contenedores en el Puerto 1: "<<Count1<<endl;
    cout<<"Cantidad de contenedores en el Puerto 2: "<<Count2<<endl;
    cout<<"Cantidad de contenedores en el Puerto 3: "<<Count3<<endl;

return 0;
}
