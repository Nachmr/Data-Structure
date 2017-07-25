/**
 * @file palabra.h
 * @brief Fichero cabecera del TDA Palabra
 *
 */

#ifndef __PALABRA
#define __PALABRA

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

/**
 *  @brief T.D.A. Palabra
 *
 * Una instancia @e c del tipo de dato abstracto @c Palabra es un objeto
 * que contiene una palabra en un determinado idioma y que se convierte a 
 * una o varias otras de un lenguaje destino.
 *
 * @author Ignacio Martin Requena
 * @date Octubre 2015
 */

class Palabra {
	
private:
	/**
	 * @page repConjunto Rep del TDA Palabra
	 *
	 */
	string origen; /**< Palabra origen */
	vector<string> trads; /**< Traducciones en el idioma destino */
	
public:
	
	/**
	 * @brief Constructor por defecto de la clase. 
	 */
	Palabra();
	
	/**
	 * @brief Constructor de la clase
	 * @param p palabra origen sin traducir
	 * @param t vector de traducciones en el idioma deseado
	 * @return Crea una palabra con su traducción
	 */
	Palabra(string p, vector<string> t);   
	
	/**
	 * @brief Palabra origen
	 * @return Devuelve la palabra origen
	 */ 
	string Origen() const;
	
	/**
	 * @brief Traducciones
	 * @return Devuelve las traducciones de esa palabra en el idioma que se haya seleccionado
	 */
	vector<string> Traducciones() const;
	
};  

#endif

