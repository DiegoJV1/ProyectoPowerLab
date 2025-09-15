#include "GrupoMuscular.h"
#include<sstream>
#include<iostream>
GrupoMuscular::GrupoMuscular() {
	can = 0;
	tam = 10;
	gm = new Ejercicio * [tam];
	for (int i = 0; i < tam; i++) {
		gm[i] = nullptr;
	}
}
GrupoMuscular::~GrupoMuscular() {
	for (int i = 0; i < tam; i++) {
		delete gm[i];
		gm[i] = nullptr;
	}
	delete[] gm;
	can = 0;
}
void GrupoMuscular::insertarEjercicio(Ejercicio* aux) {
	if (can < tam) {
		gm[can] = aux;
		can++;
	}
	else {
		cout << "Error-Grupo Muscular lleno";
	}
}
string GrupoMuscular::toString() {
	stringstream ss;
	for (int i = 0; i < can; i++) {
		cout << gm[i]->toString() << endl;
	}
	return ss.str();
}
