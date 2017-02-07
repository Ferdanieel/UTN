//============================================================================
// Name        : Ejercicio27.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    int Tinf=0;
    int Min=0;
    int Vlor=0;
    int G34=0;
    int TL=0;
    int TM=0;
    int TG=0;
    int Checker=0;
    string Motiv="";
    string G="";
    string MinMotiv="";
    while(Checker==0){
        cout<<"Ingrese el tipo de infraccion:"<<endl;
        cin>>Tinf;
        if(Tinf==0){
            Checker=1;
        }
        else{
            cout<<"Ingrese el motivo de la multa:"<<endl;
            cin>>Motiv;
            cout<<"Ingrese el valor de la multa:"<<endl;
            cin>>Vlor;
            cout<<"Ingrese la gravedad de la multa:"<<endl;
            cin>>G;
            if(G=="L"){
                TL=TL+Vlor;
            }
            else if(G=="M"){
                TM=TM+Vlor;
            }
            else{
                TG=TG+Vlor;
            }

    if(Tinf==3 || Tinf==4){
       if(G=="G"){
       G34++;
       }
    }
    if(Min==0){
        Min=Vlor;
        MinMotiv=Motiv;
    }
    else if(Vlor<Min){
        Min=Vlor;
        MinMotiv=Motiv;
    }
    }
    }
    cout<<"El motivo de la multa mas barata fue: "<<MinMotiv<<endl;
    if(G34>3){
        cout<<"CLAUSURAR FABRICA"<<endl;
    }
    
    cout<<"Valor total de las multas leves: "<<TL<<endl;
    cout<<"Valor total de las multas medianas: "<<TM<<endl;
    cout<<"Valor total de las multas graves: "<<TG<<endl;

return 0;
}
