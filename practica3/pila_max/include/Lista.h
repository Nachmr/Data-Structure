/**
  * @file Lista.h
  * @brief Fichero cabecera del TDA Lista
  *
  * Gestiona una secuencia de elementos con facilidades para la inserción y
  * borrado de elementos en cualquier posicion
  */

#ifndef __LISTA_H__
#define __LISTA_H__

#include<cassert>

/**
  * @brief T.D.A. CeldaLista usado para la implementación de lista. Contiene un dato y un enlace al siguiente de ésta.
  */
template <class T>
struct CeldaLista{
	T elemento;
	CeldaLista *siguiente;
};


template<class T>
class Lista;

/**
  * @brief T.D.A. Posicion
  *
  * Una instancia @e p del tipo de dato abstracto posicion es básicamente un puntero a una celda
  * de una lista enlazada.
  */
template<class T>
class Posicion {
private:

/**
  * @page repPosicion Rep del TDA Posicion
  *
  * @section faPosicion Función de abstracción
  *
  * Un objeto válido @e p del TDA Posicion es:
  *
  * fA(p) = {p.puntero, p.primera}
  *
  */
	CeldaLista<T> *puntero;
	CeldaLista<T> *primera;
public:

/**
  * @brief Constructor por defecto de la clase
  * @post Puntero y primera quedan inicializados a 0
  */
	Posicion<T>();

/**
  * @brief Sobrecarga del operador ++: avanza el puntero de Posición
  */
	Posicion<T> & operator++();

/**
  * @brief Sobrecarga del operador --: retrocede el puntero de Posición
  */
	Posicion<T> & operator--();

/**
  * @brief Sobrecarga del operador == . Compara 2 posiciones
  * @retval Booleano con el valor de la igualdad
  */
	bool operator ==(const Posicion<T> & p);

/**
  * @brief Sobrecarga del operador != . Compara 2 posiciones
  * @retval Booleano con el valor de la (des)igualdad
  */
	bool operator !=(const Posicion<T> & p);

	friend class Lista<T>;
};

/**
  * @brief T.D.A. Lista
  *
  * Una instancia @e l del tipo de dato abstracto Lista sobre un dominio @e T es una sucesión finita de
  * elementos del mismo tipo (@e T). En una lista las operaciones tanto de insercción como de borrado
  * y consulta se pueden realizar en cualquier posición de ésta.
  *
  * @author Víctor Fernández Poyatos
  * @date Noviembre 2014
  */

template <class T>
class Lista{
private:
/**
  * @page repLista Rep del TDA Lista
  *
  * @section invLista Invariante de la representación
  *
  * Un objeto válido @e l del TDA Lista representa:
  *
  * fA(l) = {(primera->elemento(=0), primera->siguiente, (primera->sig->elemento, primera->siguiente->siguiente), ...(Total elementos) ,
  * (primera->siguiente->siguiente->... (Total elementos)->dato, primera->siguiente->siguiente->...(Total elementos)->siguiente(=0)}
  *
  */

	CeldaLista<T> *cab;
	CeldaLista<T> *ultima;

public:

/**
  * @brief Constructor por defecto de lista
  */
	Lista();

/**
  * @brief Constructor de copia de la clase
  * @param l Lista que se desea copiar
  */
	Lista(const Lista <T> & l);

/**
  * @brief Destructor
  */
	~Lista();

/**
  * @brief Sobrecarga del operador de asignación
  * @param l Lista que se desea copiar
  */
	Lista<T>& operator=(const Lista <T> & l);

/**
  * @brief Modifica el valor de una posicion.
  * @param p Posicion que se desea modificar
  * @param e Elemento por el que se desea sustituir el que había inicialmente en la celda apuntada por la posicion
  */
	void Set(Posicion<T> p, T e);

/**
  * @brief Obtiene el valor que hay en una posición
  * @param p Posición que se desa examinar.
  */
	T Get(Posicion<T> p) const;

/**
  * @brief Inserta un elemento en la posición indicada
  * @param p Posición en la que se desea insertar el elemento
  * @param e Elemento que se desea insertar
  * @retval Devuelve la posición al elemento insertado
  */
	Posicion<T> Insertar(Posicion<T> p, T e);

/**
  * @brief Borra la celda indicada por posición
  * @param p Posición que se desea borrar
  * @retval Devuelve la posición al elemento siguiente
  */
	Posicion<T> Borrar(Posicion<T> p);

/**
  * @brief Devuelve la posición que indica el comienzo de la lista
  * @retval Posición que indica el comienzo de la lista
  */
	Posicion<T> begin() const;

/**
  * @brief Devuelve la posición que indica el final de la lista
  * @retval Posición que indica el final de la lista
  */
	Posicion<T> end() const;

};
#include<Lista.cpp>
#endif //__LISTA_H__

