#include "BateriaEjercicios.h"
#include<sstream>
#include<iostream>
using namespace std;

BateriaEjercicios::BateriaEjercicios() {
	can = 0;
	tam = 10000;
	bateria = new Ejercicio* [tam];
	for (int i = 0; i < tam; i++) {
		bateria[i] = nullptr;
	}
}
BateriaEjercicios::~BateriaEjercicios() {
	for (int i = 0; i < can; i++) {
		delete bateria[i];
		bateria[i] = nullptr;
	}
	delete[] bateria;
}	
void BateriaEjercicios::insertarEjercicio(Ejercicio* aux) {
	if (can < tam) {
		bateria[can] = aux;
		can++;
	}
	else {
		cout << "Error-Bateria de ejercicos llena";
	}
}
Ejercicio* BateriaEjercicios::buscarEjercicio(string aux) {
	for (int i = 0; i < can; i++) {
		if (bateria[i]->getNombreEjercicio() == aux) {
			return bateria[i];
		}
	}
}
string BateriaEjercicios::toString() {
	stringstream ss;
	for (int i = 0; i < can; i++) {
		cout<< bateria[i]->toString()<<endl;
	}
	return ss.str();
}
