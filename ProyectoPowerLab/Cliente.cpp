#include "Cliente.h"
#include<sstream>
#include<iostream>
using namespace std;

Cliente::Cliente() {
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
	}
	else {
		delete historialMedicion[0];

		for (int i = 0; i < tam - 1; i++) {
			historialMedicion[i] = historialMedicion[i + 1];
		}
		historialMedicion[tam - 1] = aux; 
	}
}
Medicion* Cliente:: buscarPorFecha(Fecha* aux) {
	for (int i = 0; i < can; i++) {
		if (historialMedicion[i]->getFecha() == aux) {
			return historialMedicion[i];
		}
	}
}
Medicion* Cliente::buscarMasActual() {
	return historialMedicion[can - 1];
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
string Cliente::getGeneroCliente() {
	return generoCliente;
}
Instructor* Cliente:: getCoach() {
	return coach;
}
Rutina* Cliente::getRutinaCliente() {
	return rutinaCliente;
}

string Cliente::toString() {
	stringstream ss;
	ss << "Nombre:" << nombreCliente << endl;
	ss << "Cedula:" << cedulaCliente << endl;
	ss << "Telefono:" << telefonoCliente << endl;
	ss << "Correo Electronico:" << correoCliente << endl;
	ss << "Genero:" << generoCliente << endl;
	ss << "Cantidad de Clases inscritas: " << contadorClases << endl;
	ss << "------------------------------------------------" << endl;
	ss << "Coach:" << endl;
	ss << coach->toString() << endl;
	ss<< "------------------------------------------------" << endl;
	ss << "Rutina:" << endl;
	ss << rutinaCliente->toString() << endl;
	ss << "------------------------------------------------" << endl;
	ss << "Registro de Mediciones:" << endl;
	for (int i = 0; i < can; i++) {
		ss << historialMedicion[i]->toString() << endl << endl;
	}
	ss << "------------------------------------------------" << endl;
	return ss.str();
}

