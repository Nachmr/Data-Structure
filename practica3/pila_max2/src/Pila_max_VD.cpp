
#include <Pila_max_VD.h>

using namespace std;

void Pila_max:: poner(int d){
	Elemento poner;
	poner.dato = d;
	if(v.Nelementos() == 0){
		poner.maximo = d;
		v.Insertar(poner);
	}else{
		if(v[v.Nelementos()-1].maximo > d)
			poner.maximo = v[v.Nelementos()	-1].maximo;
		else
			poner.maximo = d;
		v.Insertar(poner);
	}
}


void Pila_max:: quitar(){
	v.Borrar(v.Nelementos()-1);
}

bool Pila_max:: vacia(){
	return (v.Nelementos() == 0);
}

Elemento Pila_max:: tope(){
	return v[v.Nelementos()-1];
}


