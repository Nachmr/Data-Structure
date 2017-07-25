/**
  * @file Pila_max.h
  * @brief Fichero cabecera del TDA Pila max
  *
  * Gestiona fácilmente con qué especificación se va a representar la pila de mínimos
  * ya sea con un vector dinámico, una lista o una cola.
  *
  * @author Ignacio Martin Requena
  * @date Noviembre 2015
  *
  */

#define CUAL_COMPILA 1
#if CUAL_COMPILA==1
#include <Pila_max_VD.h>
#elif CUAL_COMPILA==2
#include <Pila_max_List.h>
#else
#include <Pila_max_Cola.h>
#endif

