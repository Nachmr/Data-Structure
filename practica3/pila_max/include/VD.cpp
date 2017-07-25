
#include <cassert>
#include <iostream>

using namespace std;

template <class T>
void VD<T>::Copiar(const VD <T> & v){
	reservados = v.reservados;
	datos = new T [reservados];
	nelementos = v.nelementos;
	for(int i = 0; i < nelementos; i++){
		datos[i] = v.datos[i];
	}
}


template <class T>
void VD<T>::Resize(int tam){
	T *aux = new T[tam];
	int maximo = (nelementos<tam) ? nelementos: tam;

	for(int i = 0; i < maximo; i++){
		aux[i] = datos[i];
	}

	nelementos = maximo;
	reservados = tam;
	delete [] datos;
	datos = aux;
}

template <class T>
VD<T>::VD(int tam){
	reservados = tam;
	nelementos = 0;
	datos = new T[reservados];
}

template <class T>
VD<T>:: VD(const VD <T> & v){
	Copiar(v);
}

template <class T>
VD<T>::~VD(){
	if(nelementos!= 0){
		delete [] datos;
	}
}

template <class T>
int VD<T> :: Tam(){
	return nelementos-1;
}


template <class T>
void VD<T>:: Imprimir(){
	for(int i = 0; i < nelementos; i++){
		cout << datos[i] <<" ";
	}
}

template <class T>
T& VD<T>:: operator[](int posicion){
	return datos[posicion];
}

template <class T>
const T & VD<T>:: operator[](int posicion) const{
	return datos[posicion];
}

template <class T>
void VD<T>:: Insertar(T elemento){
	if(nelementos >= reservados/2){
		Resize(reservados*2);
	}

	datos[nelementos] = elemento;
	nelementos++;
}

template <class T>
void VD<T> :: Borrar(int posicion){
	assert(posicion>= 0 && posicion < nelementos);
	for(int i = posicion; i < nelementos-1; i++)
		datos[i] = datos[i+1];


	nelementos--;
	if(reservados/4 >= nelementos)
		Resize(reservados/2);
}

template <class T>
VD <T> & VD<T>:: operator=(const VD <T> & v){
	if(this!= &v){
		if(datos!= 0){
			delete [] datos;
		}

		Copiar(v);
		return *this;
	}
}










































