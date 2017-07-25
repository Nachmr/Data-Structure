/**
  * @file Pila_max_Cola.h
  * @brief Fichero cabecera del TDA Pila max basado en una cola
  *
  * Gestiona una secuencia de elementos con facilidades para la inserción y
  * borrado de elementos en un extremo
  */

#include<cola.h>
#include<iostream>
#include<Elemento.h>
#ifndef _PILA_MAX_COLA_
#define _PILA_MAX_COLA_

using namespace std;


/**
  * @brief T.D.A. Pila_max_Cola
  *
  * Una instancia @e c del tipo de dato abstracto Pila_max_VD es una sucesión finita de
  * elementos del tipo @e elemento. En una pila las operaciones tanto de insercción como de borrado
  * y consulta se pueden realizar únicamente en un extremo de ésta (llamado tope).
  *
  * @author Ignacio Martin Requena
  * @date Noviembre 2015
  */


class Pila_max{
private:
/**
  * @page repPila_max_Cola Rep del TDA Pila_max_Cola
  *
  * Un objeto válido @e pc del TDA Pila_max_VD representa:
  *
  * fA(pc) = {(pc.c[begin].dato, pc.c[begin].minimo), ... ,
  * (pc.c[end].dato, pc.c[end].minimo)}
  *
  * Nota: La forma de acceder a los elementos aquí mostrada es una mera representación visual
  */


	Cola<Elemento> c;

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
