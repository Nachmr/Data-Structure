
#include<Pila_max_Cola.h>

using namespace std;

void Pila_max:: poner(int d){
	Elemento nuevo;
	nuevo.dato = d;
	if(c.num_elementos() == 0){
		nuevo.maximo = d;
	}else{
		if(tope().maximo > d){
			nuevo.maximo = tope().maximo;
		}else{
			nuevo.maximo = d;
		}
	}

	c.poner(nuevo);
}


Elemento Pila_max::tope(){
	Cola<Elemento> aux(c);

	int	nelementos = aux.num_elementos();

	for(int i = 1; i < nelementos; i++){
		aux.quitar();
	}

	return aux.frente();
}

void Pila_max::quitar(){
	Cola<Elemento> recibe;
	Cola<Elemento> da(c);

	int nelementos = da.num_elementos();
	for(int i = 1; i < nelementos; i++){
		recibe.poner(da.frente());
		da.quitar();
	}

	c = recibe;
}

bool Pila_max::vacia(){
	return (c.num_elementos() == 0);
}




















