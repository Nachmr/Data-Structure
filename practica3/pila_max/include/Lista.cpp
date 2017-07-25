
#include<cassert>

using namespace std;

template<class T>
Posicion<T>::Posicion(){
	puntero = 0;
	primera = 0;
}

template<class T>
Posicion<T> & Posicion<T>::operator++(){
	puntero = puntero->siguiente;
	return *this;
}


template<class T>
Posicion<T> & Posicion<T>::operator--(){
	assert(puntero != primera);
	CeldaLista <T> * aux = primera;
	while(aux->siguiente != puntero){
		aux = aux->siguiente;
	}
	puntero = aux;
	return *this;
}

template<class T>
bool Posicion<T>:: operator ==(const Posicion<T> & p){
	return p.puntero == puntero;
}

template<class T>
bool Posicion<T>::operator !=(const Posicion<T> & p){
	return p.puntero != puntero;
}


template<class T>
Lista<T>::Lista(){
	ultima = cab = new CeldaLista<T>;
	cab -> siguiente = 0;
}

template<class T>
Lista<T>::Lista(const Lista <T> & l){
	cab = new CeldaLista<T>;
	CeldaLista<T> *src = l.cab;
	ultima = cab;

	while(src->siguiente!= 0){
		ultima-> siguiente = new CeldaLista<T>;
		src = src->siguiente;
		ultima = ultima->siguiente;
		ultima-> elemento = src->elemento;
	}

	ultima->siguiente = 0;
}

template<class T>
Lista<T>::~Lista(){
	CeldaLista<T> *aux;
	while(cab->siguiente!= 0){
		aux = cab;
		cab = cab->siguiente;
		delete aux;
	}
}

template<class T>
Lista<T>& Lista<T>:: operator=(const Lista <T> & l){

	Lista<T> aux(l);
	CeldaLista <T> *p;
	p = this->cab;
	this->cab = aux.cab;
	aux.cab = p;
	p = this->ultima;
	this->ultima = aux.ultima;
	aux.ultima = p;
	return *this;
}

template<class T>
void Lista<T>::Set(Posicion<T> p, T e){
	p.puntero->siguiente->elemento = e;
}

template<class T>
T Lista<T>::Get(Posicion<T> p) const{
	if(p == end()){
		return p.puntero->elemento;
	}else{
	return p.puntero->siguiente->elemento;
	}
}

template<class T>
Posicion<T> Lista<T>:: Borrar(Posicion<T> p){
	assert(p!= end());
	CeldaLista<T> *q = p.puntero->siguiente;
	p.puntero->siguiente = q->siguiente;
	if(q == ultima){
		ultima = p.puntero;
	}
	delete q;
	return p;
}

template<class T>
Posicion<T> Lista<T>::Insertar(Posicion<T> p, T e){
	CeldaLista<T> *q = new CeldaLista<T>;
	q->siguiente = p.puntero->siguiente;
	p.puntero->siguiente = q;
	q->elemento = e;
	if(p.puntero == ultima){
		ultima = q;
	}
	return p;
}

template<class T>
Posicion<T> Lista<T>:: begin() const{
	Posicion <T> p;
	p.puntero = p.primera = cab;
	return p;
}

template<class T>
Posicion<T> Lista<T>:: end() const{
	Posicion <T> p;
	p.puntero = ultima;
	p.primera = cab;

	return p;
}















