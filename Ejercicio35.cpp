//============================================================================
// Name        : Ejercicio35.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

bool primaComp( char a,char b){
   bool c;
   if(a=='P' && b=='I')
      c=false;
   else if (a=='N')
      c=false;
   else{c=true;}
   return c;
}


bool analfab( int a,char b){
   bool c;
   if(a>10 && b=='N'){
      c=true;
   }
   else{c=false;}
   return c;
}

long porcentaje(int a,int b){
   long c= a*100/b;
   return c;
}

int promedio(int a, int b){
   int c= a/b;

   return c;
}

int main() {
   int checker=0,contador=0,analf=0,totalp=0;
   int a,c,d,p,s,t,u,m=0;
   int integrantes,edad;
   string domicilio,nombre,apellido,b;
   char tipoVivienda,sexo,nivelEstudio,indicador;


   while(checker==0){
         cout<<"ingrese domicilio"<<endl;
         cin>>domicilio;
         cout<<"ingrese tipo de vivienda,puede ser: C(casa) o D (departamento) "<<endl;
         cin>>tipoVivienda;
         cout<<"ingrese la cantidad de integrantes(cero para finalizar)"<<endl;
         cin>>integrantes;

           if(integrantes==0){
              checker=1;
           }
           else{
              while(contador<integrantes){
              cout<<"ingrese nombre "<<endl;
              cin>>nombre;
              cout<<"ingrese apellido"<<endl;
              cin>>apellido;
              cout<<"ingrese edad"<<endl;
              cin>>edad;
              cout<<"ingrese sexo(M o F)"<<endl;
              cin>>sexo;
              cout<<"ingrese nivel de estudios alcanzados:"<<endl;
              cin>>nivelEstudio;
              cout<<"indica I(incompleto)o C(completo)"<<endl;
              cin>>indicador;

              //completaron estudios primarios
                         if(primaComp(nivelEstudio,indicador)==true){
                            cout<<"completo estudios primarios"<<" "<<nombre<<" "<<apellido<<" "<<edad<<" "<<sexo<<" "<<nivelEstudio<<" "<<indicador<<endl;
              //analfabetismo
                         }
                         if(analfab(edad,nivelEstudio)==true){
                                                     analf++;

                         }
                         //estudios incompleto
                                    if(indicador=='I'){
                                       if(nivelEstudio=='P'){
                                          p++;
                                       }
                                       if(nivelEstudio=='S'){
                                          s++;
                                       }
                                       if(nivelEstudio=='T'){
                                          t++;
                                       }
                                       if(nivelEstudio=='U'){
                                          u++;
                                       }
                                    }
                                    //porcentaje masc fem
                                             if(sexo=='M'){
                                                m++;
                                             }
                         c=edad+c;
                         d=d+c;

              contador++;
              totalp++;
              }
              contador=0;
              //edad promedio flia
                         cout<<"edad promedio de la flia"<<" "<<promedio(c,integrantes)<<endl;
                         c=0;
           }
           //mayor integrantes depto
           if(tipoVivienda=='D'){
                                     if(a<integrantes){
                                        a=integrantes;
                                        b=domicilio;
                                     }
           }
   }
   //analfabetismo
   cout<<"porcentaje analfabetismo"<<" "<<porcentaje(analf,totalp)<<endl;
   //mayointegrantes depto
   cout<<"domicilio flia con mayor integrantes que viven en depto:"<<" "<<b<<endl;
   //edad promedio ciudad
   cout<<"edad promedio ciudad"<<" "<<promedio(d,totalp)<<endl;
   //estudios incompletos
   cout<<"cantidad de encuestados con estudi primario incompleto"<<" "<<p<<endl;
   cout<<"cantidad de encuestados con estudi secundario incompleto"<<" "<<s<<endl;
   cout<<"cantidad de encuestados con estudi terciario incompleto"<<" "<<t<<endl;
   cout<<"cantidad de encuestados con estudi universitario incompleto"<<" "<<u<<endl;
   //porcentaje por sexo
   cout<<"porcentaje masculino"<<" "<<porcentaje(m,totalp)<<endl;
   cout<<"porcentaje femenino"<<" "<<porcentaje(totalp-m,totalp)<<endl;
}

