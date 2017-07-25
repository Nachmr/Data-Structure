
#include<Pila_max_List.h>

using namespace std;

Elemento Pila_max:: tope(){
	return l.Get(l.end());

}

void Pila_max::poner(int d){
	Elemento nuevo;
	nuevo.dato = d;
	if(l.begin() == l.end()){
		nuevo.maximo = d;
	}else{
		Elemento anterior = tope();
		nuevo.maximo = (d > anterior.maximo) ? d : anterior.maximo;
	}
	l.Insertar(l.end(), nuevo);
}


void Pila_max::quitar(){
	l.Borrar(--l.end());
}

bool Pila_max:: vacia(){
	return (l.begin() == l.end());
}




