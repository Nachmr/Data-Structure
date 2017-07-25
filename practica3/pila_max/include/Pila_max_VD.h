/**
  * @file Pila_max_VD.h
  * @brief Fichero cabecera del TDA Pila max basado en un vector dinámico
  *
  * Gestiona una secuencia de elementos con facilidades para la inserción y
  * borrado de elementos en un extremo
  */
#include <VD.h>
#include<iostream>
#include <Elemento.h>
#ifndef _PILA_MAX_VD_
#define _PILA_MAX_VD_

/**
  * @brief T.D.A. Pila_max_VD
  *
  * Una instancia @e P del tipo de dato abstracto Pila_max_VD es una sucesión finita de
  * elementos del tipo @e elemento. En una pila las operaciones tanto de insercción como de borrado
  * y consulta se pueden realizar únicamente en un extremo de ésta (llamado tope).
  *
  * @author Ignacio Martin Requena
  * @date Noviembre 2015
  */


class Pila_max{
private:

/**
  * @page repPila_max_VD Rep del TDA Pila_max_VD
  *
  * Un objeto válido @e pv del TDA Pila_max_VD representa:
  *
  * fA(pv) = {(pv.v.datos[0].dato, pv.v.datos[0].minimo), (pv.v.datos[1].dato, pv.v.datos[1].minimo), ... ,
  *  (pv.v.datos[nelementos-1].dato, pv.v.datos[nelementos-1].minimo)}
  *
  */

	VD <Elemento> v;

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






























