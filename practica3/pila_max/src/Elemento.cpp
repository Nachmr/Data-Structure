
#include<iostream>
#include<Elemento.h>


using namespace std;

ostream& operator<< (ostream & os, const Elemento & e){
	return os << e.dato <<' ' <<e.maximo <<' ';
}

void Elemento:: SetDato(int e){
	dato = e;
}

void Elemento:: Setmaximo(int e){
	maximo = e;
}

int Elemento:: GetDato(){
	return dato;
}

int Elemento:: Getmaximo(){
	return maximo;
}



