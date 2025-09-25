#include "ClaseGrupal.h"
#include<sstream>
ClaseGrupal::ClaseGrupal() {
	nombreClaseGrupal = "Sin Definir";
	tipo = nullptr;
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
bool ClaseGrupal::insertarCliente(Cliente* aux) {
	if (canInscritos < capacidad && aux->getContadorClases()<3) {
		inscritos[canInscritos] = aux;
		canInscritos++;
		aux->setContadorClases(aux->getContadorClases() + 1);
		return true;
	}
	else {
		return false;
	}
}
void ClaseGrupal::setCapacidad(int num) {
	this->capacidad = num;
}
void ClaseGrupal::setTipo(Especialidad* aux) {
	this->tipo = aux;
}
void ClaseGrupal::setHorario(Horario* aux) {
	this->horario = aux;
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
Especialidad* ClaseGrupal::getTipo() {
	return tipo;
}
bool ClaseGrupal::busquedaCliente(string aux) {
	for (int i = 0; i < canInscritos; i++) {
		if (inscritos[i]->getCedulaCliente() == aux) {
			return true;
		}
	}
	return false;
}
string ClaseGrupal::toString() {
	stringstream ss;
	ss << "---Clase Grupal---" << endl;
	ss << "Nombre: " << nombreClaseGrupal << endl;
	ss << "Tipo de Clase: " << tipo->getNombreEspecialidad() << endl;
	ss << "Codigo: " << codigoClaseGrupal << endl;
	ss << "Salon: " << salon << endl;
	ss << "Capacidad: " << capacidad << endl;
	ss << "Horario: " << endl;
	ss << horario->toString() << endl;
	ss << "Instructor: " << endl;
	ss << coachClase->toString() << endl;
	ss << "Clientes Inscritos: " << canInscritos << endl;
	for (int i = 0; i < canInscritos; i++) {
		ss << inscritos[i]->toStringResumen() << endl << endl;
	}
	return ss.str();
}
string ClaseGrupal::toStringSoloDatos() {
	stringstream ss;
	ss << "---Clase Grupal---" << endl;
	ss << "Nombre: " << nombreClaseGrupal << endl;
	ss << "Tipo de Clase: " << tipo->getNombreEspecialidad() << endl;
	ss << "Codigo: " << codigoClaseGrupal << endl;
	ss << "Salon: " << salon << endl;
	ss << "Capacidad: " << capacidad << endl;
	ss << "Horario: " << endl;
	ss << horario->toString() << endl;
	ss << "Instructor: " << endl;
	ss << coachClase->toString() << endl;
	return ss.str();
}