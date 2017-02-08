//============================================================================
// Name        : Listas Enlazadas.cpp
// Author      : Daniel Fernandez
// Version     : v1
// Copyright   : License-Free Software
// Description : Trabajo Practico Algoritmos-Matematica Discreta
//============================================================================

#include <iostream>
using namespace std;


template <typename T> struct Nodo
{
T info;
Nodo<T>* left;
Nodo<T>* right;
};

struct Alumno{
	int legajo;
	int dni;
	string nombre;
};

void Agregar(Nodo<Alumno>*& p, Alumno x){

	Nodo<Alumno>* nuevo = new Nodo<Alumno>();
	nuevo->info = x;
	nuevo->left = NULL;
	nuevo->right = NULL;

	if(p == NULL){
		p = nuevo;
	}
	else if(x.legajo < p->info.legajo){
		Agregar(p->left,x);
	}
	else if(x.legajo > p->info.legajo){
		Agregar(p->right,x);
	}

	cout << "El legajo ha sido agregado exitosamente" << endl<< endl<< endl;
};

void Eliminar(Nodo<Alumno>*& p, int l){

	bool found = false;
	Nodo<Alumno>* actual = p;
	Nodo<Alumno>* predecesor = NULL;

	if(actual == NULL){
		cout << "No hay Legajos" << endl<< endl<< endl;
		return;
	}

	while(actual != NULL){
		if(actual->info.legajo == l){
			found = true;
			break;
		}else{
			predecesor = actual;
			if(l > actual->info.legajo){
				actual = actual->right;
			}else{
				actual = actual->left;
			}
		}
	}

	if(!found){
		cout << "El legajo no se encuentra en los registros" << endl<< endl<< endl;
		return;
	}

// Case 1 : One child
	if((actual->left == NULL && actual->right != NULL) || (actual->left != NULL && actual->right == NULL)){
		if(actual->left == NULL && actual->right != NULL){
			if(predecesor->left == actual){
				predecesor->left = actual->right;
				delete actual;
				actual = NULL;
				cout << "El legajo ha sido eliminado exitosamente" << endl<< endl<< endl;
			}else{
				predecesor->right = actual->right;
				delete actual;
				actual = NULL;
				cout << "El legajo ha sido eliminado exitosamente" << endl<< endl<< endl;
			}
		}else{
			if(predecesor->left == actual){
				predecesor->left = actual->left;
				delete actual;
				actual = NULL;
				cout << "El legajo ha sido eliminado exitosamente" << endl<< endl<< endl;
			}else{
				predecesor->right = actual->left;
				delete actual;
				actual = NULL;
				cout << "El legajo ha sido eliminado exitosamente" << endl<< endl<< endl;

			}
		}
		return;
	}

	// CASE 2 No child (leaf)
	if(actual->left == NULL && actual->right == NULL){
		if(predecesor == NULL){
			delete actual;
			cout << "El legajo ha sido eliminado exitosamente" << endl<< endl<< endl;
		}else{

		if(predecesor->left == actual){
			predecesor->left = NULL;
		}else{
			predecesor->right = NULL;
		}
		delete actual;
		cout << "El legajo ha sido eliminado exitosamente" << endl<< endl<< endl;
		return;
		}
	}

	//CASE 3 Two Childs
	if(actual->left != NULL && actual->right != NULL){
		Nodo<Alumno>* check = actual->right;
		// right child has no child
		if((check->left == NULL)  && (check->right == NULL)){
			actual = check;
			delete check;
			actual->right = NULL;
			cout << "El legajo ha sido eliminado exitosamente" << endl<< endl<< endl;
		}else // right child has children
			{
			if((actual->right)->left != NULL){
				Nodo<Alumno>* izqActual;
				Nodo<Alumno>* izqActualPred;
				izqActualPred = actual->right;
				izqActual = (actual->right)->left;
				while(izqActual->left != NULL){
					izqActualPred = izqActual;
					izqActual = izqActual->left;
				}
				actual->info.legajo = izqActual->info.legajo;
				actual->info.dni = izqActual->info.dni;
				actual->info.nombre = izqActual->info.nombre;

				delete izqActual;
				izqActualPred->left = NULL;
				cout << "El legajo ha sido eliminado exitosamente" << endl<< endl<< endl;
			}else{
				Nodo<Alumno>* temp = actual->right;
				actual->info.legajo = temp->info.legajo;
				actual->info.dni= temp->info.dni;
				actual->info.nombre = temp->info.nombre;
				actual->right = temp->right;
				delete temp;
				cout << "El legajo ha sido eliminado exitosamente" << endl<< endl<< endl;

			}
		}
		return;
	}

};

void buscarImprimir(Nodo<Alumno>* p, int l){
	bool found = false;
		Nodo<Alumno>* actual = p;

		if(actual == NULL){
			cout << "No hay Legajos" << endl<< endl<< endl;
			return;
		}

		while(actual != NULL){
			if(actual->info.legajo == l){
				found = true;
				break;
			}else{
				if(l > actual->info.legajo){
					actual = actual->right;
				}else{
					actual = actual->left;
				}
			}
		}

		if(!found){
			cout << "No existe el legajo" << endl<< endl<< endl;
		}else{
			cout << "Legajo: "<<actual->info.legajo << endl;
			cout << "Dni: "<<actual->info.dni << endl;
			cout << "Nombre: "<<actual->info.nombre << endl<< endl<< endl;
		}



}


int main() {

	Nodo<Alumno>* p = NULL;
	char r;
	Alumno a;
	int legajo;

	do
	{

		cout << "Presiona A para agregar un legajo" << endl;
		cout << "Presiona B para buscar y imprimir un legajo e informacion" << endl;
		cout << "Presiona E para eliminiar un legajo" << endl;
		cout << "Presiona F para Finalizar" << endl<< endl;
		cin >> r;

		switch(r){
		case 'A':   cout << "Ingrese legajo" << endl;
					cin >> a.legajo;
					cout << "Ingrese dni" << endl;
					cin >> a.dni;
					cout << "Ingrese nombre" << endl;
					cin >> a.nombre;
					Agregar(p,a);
			break;
		case 'E':   cout << "Ingrese legajo" << endl;
					cin >> legajo;
					Eliminar(p,legajo);
			break;
		case 'B':   cout << "Ingrese legajo" << endl;
					cin >> legajo;
					buscarImprimir(p,legajo);
			break;
		default:;
		}

	}
	while(r != 'F');

	system("pause");
	return 0;
}