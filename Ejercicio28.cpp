//============================================================================
// Name        : Ejercicio28.cpp
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
   string ora="";
   string palabra="";
   string inalet="vacio";
   string caract="";
   string max="vacio";
   int a=0;
   int e=0;
   int i=0;
   int o=0;
   int u=0;
   int checker=0;
   int cantPalab=0;
   int countM=0;
   int countP=0;
   int pos=0;
   int countPM=0;
   cout<<"Ingrese su oracion, recuerde que debe separar las palabras con guiones bajos y terminar la oracion con un punto"<<endl;
        cin>>ora;
    while(checker==0){
        caract=ora[pos];
            if(caract=="."){
            checker=1;
            }
            else{
                if(caract=="_"){
                palabra=inalet;
                inalet="vacio";
                cantPalab++;
                    if(max=="vacio"){
                    max=palabra;
                    }
                    else{
                            while(countM<max.length()){
                                countM++;
                            }
                             while(countP<palabra.length()){
                                countP++;
                            }
                            if(countP>countM){
                            max=palabra;
                            }
                    }
                }
                else{
                    if(caract=="a"){
                    a++;
                    }
                    if(caract=="e"){
                    e++;
                    }
                    if(caract=="i"){
                    i++;
                    }
                    if(caract=="o"){
                    o++;
                    }
                    if(caract=="u"){
                    u++;
                    }
                if(inalet=="vacio"){
                inalet=caract;
                }
                else{
                inalet=inalet+caract;
                }
                }
            }
        pos++;
    }
    cout<<"Cantidad de veces que aparece la vocal A: "<<a<<endl;
    cout<<"Cantidad de veces que aparece la vocal E: "<<e<<endl;
    cout<<"Cantidad de veces que aparece la vocal I: "<<i<<endl;
    cout<<"Cantidad de veces que aparece la vocal O: "<<o<<endl;
    cout<<"Cantidad de veces que aparece la vocal U: "<<u<<endl;
    while(countPM<max.length()){
    countPM++;
    }
    cout<<"Cantidad de letras que tiene la palabra mas larga: "<<countPM<<endl;
    cout<<"Cantidad de palabras en la oracion: "<<cantPalab<<endl;




return 0;
}
