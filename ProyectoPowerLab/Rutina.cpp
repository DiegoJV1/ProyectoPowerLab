#include "Rutina.h"
#include<iostream>
#include<sstream>
using namespace std;
Rutina::Rutina() {
	pecho = nullptr;
	tricep = nullptr;
	bicep = nullptr;
	pierna = nullptr;
	espalda = nullptr;
	hombro = nullptr;
}
void Rutina::setPecho(GrupoMuscular* aux) {
	this->pecho=aux;
}
void Rutina::setTricep(GrupoMuscular* aux) {
	this->tricep = aux;
}
void Rutina::setBicep(GrupoMuscular* aux) {
	this->bicep = aux;
}
void Rutina::setPierna(GrupoMuscular* aux) {
	this->pierna = aux;
}
void Rutina::setEspalda(GrupoMuscular* aux) {
	this->espalda = aux;
}
void Rutina:: setHombro(GrupoMuscular* aux) {
	this->hombro = aux;
}

GrupoMuscular* Rutina::getPecho() {
	return pecho;
}
GrupoMuscular* Rutina::getTricep() {
	return tricep;
}
GrupoMuscular* Rutina::getBicep() {
	return bicep;
}
GrupoMuscular* Rutina::getPierna() {
	return pierna;
}
GrupoMuscular* Rutina::getEspalda() {
	return espalda;
}
GrupoMuscular* Rutina::getHombro() {
	return hombro;
}

string Rutina::toString() {
	stringstream ss;
	ss << "----Rutina de Ejercicios----" << endl;
	ss << "Pecho y Tricep:" << endl;
	ss << pecho->toString() << endl << endl;
	ss << tricep->toString() << endl << endl;
	ss << "Bicep:" << endl;
	ss << bicep->toString() << endl << endl;
	ss << "Piernas:" << endl;
	ss << pierna->toString() << endl << endl;
	ss << "Espalda:" << endl;
	ss << espalda->toString() << endl << endl;
	return ss.str();
}