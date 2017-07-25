#include "traductor.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

Traductor::Traductor(){
	lista.clear();
}

void Traductor::Add(const Palabra &p){
	lista.push_back(p);
}

vector<string> Traductor::GetTraducciones(string palab) const{
	int n = 0;
	while(n<this->lista.size() && this->lista[n].Origen() != palab)
		n++;
	return lista[n].Traducciones();
}

std::istream& operator>>(std::istream& is, Traductor &t){
	while (!is.eof()){
		string origen;
		vector<string> traduc;
		getline(is, origen, ';');
		while (is.peek() != '\n' && !is.eof()){
			string p;
			getline(is, p, ';');
			traduc.push_back(p);
		}
		is.ignore();
		Palabra p(origen, traduc);
		t.Add(p);
	}
	return is;
	
}
