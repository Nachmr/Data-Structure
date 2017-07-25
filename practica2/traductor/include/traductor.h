/**
 * @file traductor.h
 * @brief Fichero cabecera del TDA Traductor
 *
 */

#ifndef __TRADUCTOR
#define __TRADUCTOR

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "palabra.h"

using namespace std;

/**
 *  @brief T.D.A. Traductor
 *
 * Una instancia @e c del tipo de dato abstracto @c Traductor es un objeto
 * que contiene un vector de TDA Palabra en un determinado idioma y que se encarga de 
 * traducir la palabra origen que le pasamos y devolver su traducción.
 *
 * @author Ignacio Martin Requena
 * @date Octubre 2015
 */

class Traductor{
private:
	
	/**
	 * @page repConjunto Rep del TDA Traductor
	 *
	 */
	vector<Palabra> lista; /** < Array de elementos Palabra*/
public:
	
	/**
	 * @brief Constructor por defecto de la clase. 
	 */
	Traductor();
	
	/**
	 * @brief Añade una palabra al vector lista
	 * @param p palabra a añadir
	 */ 
	void Add(const Palabra &p);
	
	/**
	 * @brief Devuelve las traducciones de la palabra a traducir
	 * @param palab string con el origen de la palabra a buscar
	 * @return Devuelve vector traducciones de palabra cuyo origen es palab
	 */ 
	vector<string> GetTraducciones(string palab) const;
	
	/**
	 * @brief Sobrecarga del operador >>
	 * @param is istream
	 * @param t Objeto de tipo Traductor que vamos a usar
	 * @return Devuelve el istream is para que se puedan concatenar
	 */ 
	friend istream &operator>>(istream &is, Traductor &t);
	
};

#endif
