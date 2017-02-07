//============================================================================
// Name        : Ejercicio30.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;


int main()
{
    int Num=0;
    int Div=1;
    int i=1;
     cout<<"Ingrese un numero:"<<endl;
     cin>>Num;
        while(i<Num){
            if((Num%i)==0){
            Div++;
            }
        i++;
        }
        if(Div>2 || Num==1){
            cout<<"Su numero elejido no es primo"<<endl;
        }
        else{
        cout<<"Su numero elejido si es primo"<<endl;
        }
        
return 0;
}
