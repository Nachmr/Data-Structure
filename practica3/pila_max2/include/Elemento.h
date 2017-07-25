/**
  * @file Elemento.h
  * @brief Fichero cabecera del TDA Elemento
  *
  * Contiene 2 valores enteros: un dato y un máximo.
  *
  */

#ifndef __ELEMENTO_H__
#define __ELEMENTO_H__

#include<iostream>



/**
 * @brief T.D.A. Elemento
 *
 * Una instancia del tipo de dato abstracto @e Elemento se compone de 2 valores
 * enteros, siendo uno de ellos "máximo".
 *
 * @author Ignacio Martin Requena
 * @date Noviembre 2015
 */

struct Elemento{
/**
  * @page repElemento Rep del TDA Elemento
  *
  * Un objeto válido @e e del TDA Elemento representa:
  *
  * fA(e) = {e.dato, e.maximo}
  *
  */

	int dato;
	int maximo;

};

/**
  * @brief Sobrecarga del operador <<
  * @param os Stream de salida
  * @post Se obtienen en \a os el \a dato y el \a máximo contenidos en \a e (separados por un espacio)
  */
	inline std::ostream& operator<< (std::ostream& os, const Elemento& e){
		return os <<e.dato <<' ' <<e.maximo;
	}



#endif











