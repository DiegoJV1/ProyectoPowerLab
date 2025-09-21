#include "Cliente.h"
#include<sstream>
#include<iostream>
using namespace std;

Cliente::Cliente() {
	fechaInscripcionCliente = nullptr;
	fechaNacimientoCliente = nullptr;
	nombreCliente = "Sin definir";
	cedulaCliente = "0";
	telefonoCliente = "0";
	correoCliente = "Sin definir";
	generoCliente = "Sin Definir";
	contadorClases = 0;

	coach = nullptr;
	rutinaCliente = nullptr;

	can = 0;
	tam = 10;
	historialMedicion = new Medicion * [tam];

	for (int i = 0; i < tam; i++) {
		historialMedicion[i] = nullptr;
	}
}
Cliente::~Cliente() {
	for (int i = 0; i < can; i++) {
		delete historialMedicion[i];
	}
	delete[] historialMedicion;
}

void Cliente::setFechaInscripcionCliente(Fecha* aux) {
	this->fechaInscripcionCliente = aux;
}
void Cliente::setFechaNacimientoCliente(Fecha* aux) {
	this->fechaNacimientoCliente = aux;
}
void Cliente::setContadorClases(int num) {
	this->contadorClases = num;
}
void Cliente::setNombreCliente(string nom) {
	this->nombreCliente = nom;
}
void Cliente::setCedulaCliente(string ced) {
	this->cedulaCliente = ced;
}
void Cliente::setTelefonoCliente(string tel) {
	this->telefonoCliente = tel;
}
void Cliente::setCorreoCliente(string correo) {
	this->correoCliente = correo;
}
void Cliente::setGeneroCliente(char gen) {
	if (gen == 'H') {
		this->generoCliente = "hombre";
	}
	else {
		this->generoCliente = "mujer";
	}
}
void Cliente::setCoach(Instructor* aux) {
	this->coach = aux;
}
void Cliente::setRutina(Rutina* aux) {
	this->rutinaCliente = aux;
}

void Cliente::insertarMedicion(Medicion* aux) {
	if (can < tam) {
		historialMedicion[can] = aux;
		can++;
		ordenarMedicionesPorFecha();
	}
	else {
		ordenarMedicionesPorFecha();
		delete historialMedicion[0];
		for (int i = 0; i < tam - 1; i++) {
			historialMedicion[i] = historialMedicion[i + 1];
		}
		historialMedicion[can] = aux; 
		ordenarMedicionesPorFecha();
	}
}
void Cliente:: ordenarMedicionesPorFecha() {
	Medicion* menor = historialMedicion[0];
	Medicion* aux = nullptr;
	for (int i = 1; i < can; i++) {
		if (historialMedicion[i]->getFecha()->getAnnio()<menor->getFecha()->getAnnio()) {
			delete aux;
			aux = menor;
			menor = historialMedicion[i];
			historialMedicion[i] = aux;
		}
		else if (historialMedicion[i]->getFecha()->getAnnio() == menor->getFecha()->getAnnio() && historialMedicion[i]->getFecha()->getMes() < menor->getFecha()->getMes()) {
			delete aux;
			aux = menor;
			menor = historialMedicion[i];
			historialMedicion[i] = aux;
		}
		else if (historialMedicion[i]->getFecha()->getAnnio() == menor->getFecha()->getAnnio() && historialMedicion[i]->getFecha()->getMes() == menor->getFecha()->getMes() && historialMedicion[i]->getFecha()->getDia() < menor->getFecha()->getDia()) {
			delete aux;
			aux = menor;
			menor = historialMedicion[i];
			historialMedicion[i] = aux;
		}
	}
}
Medicion* Cliente::buscarMasActual() {
	Medicion* actual = historialMedicion[0];
	for (int i = 0; i < can; i++) {
		if (historialMedicion[i]->getFecha()->getAnnio() > actual->getFecha()->getAnnio()){
			actual = historialMedicion[i];
		}
		else if (historialMedicion[i]->getFecha()->getAnnio()==actual->getFecha()->getAnnio() && historialMedicion[i]->getFecha()->getMes() > actual->getFecha()->getMes()) {
			actual = historialMedicion[i];
		}
		else if (historialMedicion[i]->getFecha()->getAnnio() == actual->getFecha()->getAnnio() && historialMedicion[i]->getFecha()->getMes() == actual->getFecha()->getMes() && historialMedicion[i]->getFecha()->getDia() > actual->getFecha()->getDia()) {
			actual = historialMedicion[i];
		}
	}
	return actual;
}

int Cliente::getContadorClases() {
	return contadorClases;
}
string Cliente::getNombreCliente() {
	return nombreCliente;
}
string Cliente::getCedulaCliente() {
	return cedulaCliente;
}
string Cliente::getTelefonoCliente() {
	return telefonoCliente;
}
string Cliente::getCorreoCliente() {
	return correoCliente;
}
char Cliente::getGeneroCliente() {
	if (generoCliente == "hombre") {
		return 'H';
	}
	else {
		return 'M';
	}
}
Instructor* Cliente:: getCoach() {
	return coach;
}
Rutina* Cliente::getRutinaCliente() {
	return rutinaCliente;
}
Fecha* Cliente::getFechaInscripcionCliente() {
	return fechaInscripcionCliente;
}
Fecha* Cliente::getFechaNacimientoCliente() {
	return fechaNacimientoCliente;
}

string Cliente::toString() {
	stringstream ss;
	ss << "Nombre:" << nombreCliente << endl;
	ss << "Cedula:" << cedulaCliente << endl;
	ss << "Fecha de Nacimiento: " << endl;
	ss << fechaNacimientoCliente->toString() << endl;
	ss << "Fecha de Inscripcion: " << endl;
	ss << fechaInscripcionCliente->toString() << endl;
	ss << "Telefono:" << telefonoCliente << endl;
	ss << "Correo Electronico:" << correoCliente << endl;
	ss << "Genero:" << generoCliente << endl;
	ss << "Cantidad de Clases inscritas: " << contadorClases << endl;
	ss << "------------------------------------------------" << endl;
	ss << "Coach:" << endl;
	ss << coach->toString() << endl;
	ss<< "------------------------------------------------" << endl;
	if (rutinaCliente != nullptr) {
		ss << "Rutina:" << endl;
		ss << rutinaCliente->toString() << endl;
		ss << "------------------------------------------------" << endl;
	}
	else {
		ss << "Rutina: Sin asignar" << endl;
	}
	if (can > 0) {
		ss << "Registro de Mediciones:" << endl;
		for (int i = 0; i < can; i++) {
			ss << historialMedicion[i]->toString() << endl << endl;
		}
	}
	else {
		ss << "Registro de Mediciones: Sin asignar" << endl;
	}
	ss << "------------------------------------------------" << endl;
	return ss.str();
}

string Cliente::toStringRutina() {
	stringstream ss;
	ss<<"----Rutina del Cliente----" << endl;
	ss << rutinaCliente->toString();
	return ss.str();
}
string Cliente::toStringResumen() {
	stringstream ss;
	ss << "Nombre:" << nombreCliente << endl;
	ss << "Cedula:" << cedulaCliente << endl;
	ss << "Fecha de Nacimiento: " << endl;
	ss << fechaNacimientoCliente->toString() << endl;
	ss << "Genero:" << generoCliente << endl;
	ss << "Cantidad de Clases inscritas: " << contadorClases << endl;
	return ss.str();
}
