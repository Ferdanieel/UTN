//============================================================================
// Name        : Ejercicio25.cpp
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
    int i=0;
    int RC=0;
    int RN=0;
    int RNid=0;
    int AC=0;
    int RNSD=0;
    int Num=0;
    string color="";
    int Z=0;
    int Checker=0;
    int ACMax=0;
    int RNSDMax=0;
    int PrevNum=333;
    string PrevColor="Vacio";
    int n=0;
    cout<<"Cuantas entradas desea hacer?"<<endl;
    cin>>n;
    while(i<n){
    cout<<"Ingrese el color(Negro o Rojo):"<<endl;
    cin>>color;
    cout<<"Ingrese el numero(Entre 0 y 36)"<<endl;
    cin>>Num;

        if(PrevNum=333){
        PrevNum=Num;
        Checker=1;
        }
        else if(Num==PrevNum){
        RN++;
        RNid=Num;
        Checker=0;
        }
        else{
        RN=0;
        Checker=0;
        }

        if(Num==0){
        Z++;
                if(Checker==1){
                cout<<"El cero numero "<<Z<<" no tiene numero anterior"<<endl;
                }
                else{
                cout<<"El cero numero "<<Z<<" tiene de nuemro anterior: "<<PrevNum<<endl;
                }
        }

        if(Num<12 || Num>23){
        RNSD++;
            if(RNSD>RNSDMax){
                RNSDMax=RNSD;
            }
        }
        else{
        RNSD=0;
        }

        if(PrevColor=="Vacio"){
        PrevColor=color;
        }
            else if(color=="negro"){
                    if(color==PrevColor){
                    RC++;
                    }
                    else{
                    RC=0;
                    PrevColor=color;
                    }

        }
            else if(color==PrevColor){
            AC=0;
            }
            else{
            AC++;
                if(AC>ACMax){
                ACMax=AC;
                }
            }
    i++;
    }
    cout<<"El color negro se repitio "<<RC<<" veces"<<endl;
    cout<<"El numero "<<RNid<<" se repitio "<<RN<<" veces"<<endl;
    cout<<"Se logro altenar de colores un maximo de "<<AC<<" veces"<<endl;
    cout<<"Se logro negar la segunda decena un maximo de "<<RNSDMax<<" veces"<<endl;

return 0;
}
