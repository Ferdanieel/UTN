//============================================================================
// Name        : automata.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo Practico Algoritmos-Matematica Discreta
//============================================================================


#include <iostream>
#include <string.h>
#include <conio.h>


using namespace std;

bool control_clave(string);

int main()
{
    string ingresado;

    cout<<"Ingrese contrasena: ";
    cin >> ingresado;
    if(control_clave(ingresado)!=0)
    {
        cout<< "La contrasena es valida.\n";
    }
    else
    {
        cout<< "La contrasena es invalida.\n";
    }
    getch ();
    return 0;
}

bool control_clave(string ingresado)
{
    int i=0;
    char aux;
    bool valido=true;

    while(valido==true && ingresado[i]!='\0')
    {
        aux=ingresado[i];
        if(aux=='c')
        {
            if(ingresado[i+1]!='\0')
            {
                valido=false;
            }
            else cout<< "q1" << endl;
        }
        else
        {
            if(aux=='a' || aux=='b')
                {
                    if(ingresado[i+1]=='\0')
                    {
                        valido=false;
                        }
                    else cout<< "q0 ";
                }
                else
                {
                    if(aux!='a'||aux!='b'||aux!='c'||aux!='\0')
                        {
                            valido=false;
                    }

                }
            }
     i++;
    }
    return valido;
}
