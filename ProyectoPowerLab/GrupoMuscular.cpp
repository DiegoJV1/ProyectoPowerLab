#include "GrupoMuscular.h"
#include<sstream>
#include<iostream>
using namespace std;

GrupoMuscular::GrupoMuscular() {
	can = 0;
	tam = 20;
	gm = new Ejercicio* [tam];
	for (int i = 0; i < tam; i++) {
		gm[i] = nullptr;
	}
}
GrupoMuscular::~GrupoMuscular() {
	for (int i = 0; i < can; i++) {
		delete gm[i];
		gm[i] = nullptr;
	}
	delete[] gm;
}	
void GrupoMuscular::insertarEjercicio(Ejercicio* aux) {
	if (can < tam) {
		gm[can] = aux;
		can++;
	}
	else {
		cout << "Error-Grupo muscular con el maximo de ejercicios";
	}
}
void GrupoMuscular::eliminarEjercicio(string nom) {
	for (int i = 0; i < can; i++) {
		if (gm[i]->getNombreEjercicio() == nom) {
			for (int j = i; j < tam; j++) {
				gm[j] = gm[j + 1];
			}
			can--;
		}
	}
}
string GrupoMuscular::toString() {
	stringstream ss;
	for (int i = 0; i < can; i++) {
		cout<<gm[i]->toString()<<endl;
	}
	return ss.str();
}
