//============================================================================
// Name        : Ejercicio42.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Guía Práctica Interactiva - Modulo 1
//============================================================================

#include <iostream>
using namespace std;

int factorial(int n){

   int f=1,i=1;
   while(i<=n){
      f=f*i;
      i++;
   }
   return f;
}

bool esMultiplo(int a, int b){
   if(a%b==0){
      return true;
   }
   else{

   return false;
}
}

int main() {
   int a;
   int b,c,d,e=0;
	while((a>0)&&(a!=0)){
	   cout<<"ingrese un numero natural";
	   cin>>a;

	   cout<<"factorial de"<<a<<"  "<<factorial(a)<<endl;

	   if((esMultiplo(a,3))==true){
	      b++;
	   }
	   if((esMultiplo(a,5))==true){
	      c++;
	   }
	   if((esMultiplo(a,7))==true){
	      d++;
	   }
	   if(((esMultiplo(a,3))==true) &&((esMultiplo(a,5))==true)){
	      e++;
	   }
	}

	cout<<b<<"son multiplos de 3"<<endl;
   cout<<c<<"son multiplos de 5"<<endl;
   cout<<d<<"son multiplos de 7"<<endl;
   cout<<e<<"son multiplos de 3 y 5"<<endl;

}

