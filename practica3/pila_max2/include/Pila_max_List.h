/**
  * @file Pila_max_List.h
  * @brief Fichero cabecera del TDA Pila max basado en una lista enlazada con cabecera
  *
  * Gestiona una secuencia de elementos con facilidades para la inserción y
  * borrado de elementos en un extremo
  */

#include<Lista.h>
#include<iostream>
#include<Elemento.h>
#ifndef _PILA_MAX_LIST_H_
#define _PILA_MAX_LIST_H_

/**
  * @brief T.D.A. Pila_max_List
  *
  * Una instancia @e P del tipo de dato abstracto Pila_max_List es una sucesión finita de
  * elementos del tipo @e elemento, constituido por 2 enteros. En una pila las operaciones
  * tanto de insercción como de borrado y consulta se pueden realizar únicamente en un extremo de ésta (llamado tope).
  *
  * @author Ignacio Martin Requena
  * @date Noviembre 2015
  */


class Pila_max{
private:

/**
  * @page repPila_max_List Rep del TDA Pila_max_List
  *
  * @section invPila_max_List Invariante de la representación
  *
  * El invariante es:
  * l[begin+1].minimo <= l[begin].dato && l[begin+1].minimo <= l[begin].minimo,...,
  * l[end].minimo <= l[end-1].dato && l[end].minimo <= l[end-1].minimo
  *
  * @section faPila_max_List Función de abstracción
  *
  * Un objeto válido @e pl del TDA Pila_max_VD representa:
  *
  * fA(pl) = {(pl.l[begin].dato, pl.l[begin].minimo), ... ,
  * (pl.l[end].dato, pl.l[end].minimo)}
  *
  * Nota: La forma de acceder a los elementos aquí mostrada es una mera representación visual
  */

	Lista<Elemento> l;

public:

/**
  * @brief Coloca un elemento en el tope de la pila
  * @param d Elemento que se desea colocar
  */
	void poner(int d);

/**
  * @brief Quita el elemento del tope de la pila
  */
	void quitar();

/**
  * @brief Indica si esta o no vacía la pila
  * @retval Booleano que indica si la pila está o no vacía
  */
	bool vacia();

/**
  * @brief Devuelve el tope de la pila
  * @retval Elemento que hay en el tope de la pila
  */
	Elemento tope();

};

#endif




