#include "ClaseGrupal.h"
#include<sstream>
ClaseGrupal::ClaseGrupal() {
	nombreClaseGrupal = "Sin Definir";
	codigoClaseGrupal = "Sin Definir";
	salon = "Sin Definir";
	coachClase = nullptr;
	capacidad = 100;
	canInscritos = 0;
	inscritos = new Cliente * [capacidad];
	for (int i = 0; i < capacidad; i++) {
		inscritos[i] = nullptr;
	}
	horario = nullptr;
}
ClaseGrupal::~ClaseGrupal() {
	for (int i = 0; i < capacidad; i++) {
		delete inscritos[i];
		inscritos[i] = nullptr;
	}
	delete[] inscritos;
	canInscritos = 0;
}
void ClaseGrupal::insertarCliente(Cliente* aux) {
	if (canInscritos < capacidad) {
		inscritos[canInscritos] = aux;
		canInscritos++;
	}
	else {
		cout << "Clase Llena";
	}
}
void ClaseGrupal::setHorario(Horario* aux) {
	horario = aux;
}
void ClaseGrupal::modificarCapacidadClase(int num) {
	this->capacidad = num;
}
void ClaseGrupal::setCoachClase(Instructor* aux) {
	this->coachClase = aux;
}
void ClaseGrupal::setNombreClaseGrupal(string nom) {
	this->nombreClaseGrupal = nom;
}
void ClaseGrupal::setCodigoClaseGrupal(string cod) {
	this->codigoClaseGrupal = cod;
}
void ClaseGrupal::setSalon(string salonaux) {
	this->salon = salonaux;
}
Instructor* ClaseGrupal:: getCoachClase() {
	return coachClase;
}
int ClaseGrupal::getCapacidad() {
	return capacidad;
}
string ClaseGrupal::getNombreClaseGrupal() {
	return nombreClaseGrupal;
}
string ClaseGrupal::getCodigoClaseGrupal() {
	return codigoClaseGrupal;
}
string ClaseGrupal::getSalon() {
	return salon;
}
Horario* ClaseGrupal::getHorario() {
	return horario;
}
string ClaseGrupal::toString() {
	stringstream ss;
	ss << "---Clase Grupal---" << endl;
	ss << "Nombre: " << nombreClaseGrupal << endl;
	ss << "Codigo: " << codigoClaseGrupal << endl;
	ss << "Salon: " << salon << endl;
	ss << "Capacidad: " << capacidad << endl;
	ss << "Horario: " << endl;
	ss << horario->toString() << endl;
	ss << "Instructor: " << endl;
	ss << coachClase->toString() << endl;
	ss << "Clientes Inscritos: " << canInscritos << endl;
	for (int i = 0; i < canInscritos; i++) {
		ss << inscritos[i]->toString() << endl << endl;
	}
	return ss.str();
}