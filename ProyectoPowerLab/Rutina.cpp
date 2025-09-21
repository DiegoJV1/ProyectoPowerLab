#include "Rutina.h"
#include<iostream>
#include<sstream>
using namespace std;
Rutina::Rutina() {
	can = 0;
	tam = 100;
	ejercicios =new Ejercicio * [tam];

	for (int i = 0; i < tam; i++) {
		ejercicios[i] = nullptr;
	}
}
Rutina::~Rutina() {
	for (int i = 0; i < tam; i++) {
		delete ejercicios[i];
	}
	can = 0;
	delete[] ejercicios;
}
void Rutina::insertarEjercicio(Ejercicio* aux) {
	if (can < tam) {
		ejercicios[can] = aux;
		can++;
	}
	else {
		cout << "ERROR-Rutina llena.";
	}
}
string Rutina::toString() {
	stringstream ss;
	ss << "Pecho: " << endl;
	for (int i = 0; i < can; i++) {
		if (ejercicios[i]->getMusculo() == 1) {
			ss << ejercicios[i]->toString()<<endl;
		}
	}
	ss << "\nTricep: " << endl;
	for (int i = 0; i < can; i++) {
		if (ejercicios[i]->getMusculo() == 2) {
			ss << ejercicios[i]->toString() << endl;
		}
	}
	ss << "\nBicep: " << endl;
	for (int i = 0; i < can; i++) {
		if (ejercicios[i]->getMusculo() == 3) {
			ss << ejercicios[i]->toString() << endl;
		}
	}
	ss << "\nPierna: " << endl;
	for (int i = 0; i < can; i++) {
		if (ejercicios[i]->getMusculo() == 4) {
			ss << ejercicios[i]->toString() << endl;
		}
	}
	ss << "\n	Espalda: " << endl;
	for (int i = 0; i < can; i++) {
		if (ejercicios[i]->getMusculo() == 5) {
			ss << ejercicios[i]->toString() << endl;
		}
	}
	return ss.str();
}