#include <Pila_max.h>
#if CUAL_COMPILA==1
	#include <Pila_max_VD.h>
#elif CUAL_COMPILA==2
	#include <Pila_max_List.h>
#else
	#include <Pila_max_Cola.h>
#endif


