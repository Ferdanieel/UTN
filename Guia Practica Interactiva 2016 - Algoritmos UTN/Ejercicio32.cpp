//============================================================================
// Name        : Ejercicio32.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include "main.h"
#include <iostream>
using namespace std;


int main()
{
    int Num=0;
    int Pos=0;
    int PrevA=0;
    int PrevB=1;
    int i=0;
     
    cout<<"Ingrese la posicion del numero en la succeion de fibonacci que desea buscar:"<<endl;
    cin>>Pos;
        while(i<Pos){
            Num=(PrevA+PrevB);
            PrevA=PrevB;
            PrevB=Num;
            i++;
        }
        
        cout<<"Su numero elejido es el:"<<Num<<endl;

return 0;
}
