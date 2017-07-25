#include "palabra.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

Palabra::Palabra(){
	origen = ' ';
}

Palabra::Palabra(string p, vector<string> t){
	origen = p;
	trads.clear();
	for (int i=0; i<t.size(); i++)
		trads.push_back(t[i]); 
}

string Palabra::Origen() const{
	return origen;
}

vector<string> Palabra::Traducciones() const{
	return trads;
}


