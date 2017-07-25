/**
  * @file VD.h
  * @brief Fichero cabecera del TDA VD(Vector dinámico)
  *
  * Gestiona una secuencia de elementos con facilidades para la inserción y
  * borrado de elementos en cualquier posicion
  */

#ifndef __VD_H__
#define __VD_H__

#include <cassert>


/**
  * @brief T.D.A. VD
  *
  * Una instancia @e v del tipo de dato abstracto VD sobre un dominio @e T es una sucesión finita de
  * elementos del mismo tipo (@e T). En un vector las operaciones tanto de insercción como de borrado
  * y consulta se pueden realizar en cualquier posición de éste.
  *
  * @author Ignacio Martin Requena
  * @date Noviembre 2015
  */

template <class T>
class VD{
private:

/**
  * @page repVD Rep del TDA VD
  *
  * Un objeto válido @e v del TDA VD representa:
  *
  * fA(v) = {v.datos[0], v.datos[1], ... , v.datos[nelementos-1]
  *
  */

	T *datos;
	int nelementos;
	int reservados;

/**
  * @brief Copia de VD para uso privado
  * @param v Vector que se desea copiar
  */
	void Copiar(const VD <T> & v);

/**
  * @brief Redimensionamiento de un VD
  * @param tam Tamaño nuevo del vector
  */
	void Resize(int tam);

public:

/**
  * @brief Constructor por defecto y con parametros
  * @param tam Tamaño del vector que se va a crear, por defecto 10
  */
	VD (int tam = 10);

/**
  * @brief Constructor de copia
  * @param v Vector al que va a ser igual el nuevo vector a construir
  */
	VD (const VD <T> & v);

/**
  * @brief Destructor la clase
  */
	~VD();

/**
  * @brief Devuelve el número de elementos del vector
  * @retval Número de elementos del vector
  */

	int Nelementos(){
		return nelementos;
	}

/**
  * @brief Acceso a un elemento del vector con posibilidad de modificarlo
  * @param posicion Elemento al que se quiere acceder
  * @pre 0<= posicion < n
  * @retval Elemento leido
  */
	T & operator[](int posicion);

/**
  * @brief Acceso a un elemento del vector sin posibilidad de modificarlo
  * @param posicion Elemento al que se quiere acceder
  * @pre 0<= posicion < n
  * @retval Elemento leido
  */
	const T & operator[](int posicion) const;

/**
  * @brief Inserta un elemento al final del vector
  * @param elemento Elemento del tipo T que se desea insertar
  * @post Se amplia la capacidad del vector si es necesario
  */
	void Insertar(T elemento);

/**
  * @brief Elimina un elemento del vector
  * @param posicion Posicion que se desea eliminar
  * @post Se reduce la capacidad del vector si es necesario
  */
	void Borrar(int posicion);

/**
  * @brief Sobrecarga del operador =
  * @param v Vector al que se desea igualar
  * @retval Se devuelve una referencia al vector igualado
  */
	VD <T> & operator=(const VD <T> & v);

/**
  * @brief Muestra los elementos del vector por pantalla
  * @post Los elementos son mostrados por la salida estandar
  */
	void Imprimir();

/**
  * @brief Devuelve el tamaño del vector (numero de elementos útiles)
  * @retval El numero de elementos del vector
  */

	int Tam();

};

#include <VD.cpp>
#endif //__VD_H__


