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
	nombreCliente = "Sin definir";
	cedulaCliente = "0";
	telefonoCliente = "0";
	correoCliente = "Sin definir";
	generoCliente = "Sin Definir";

	delete coach;
	coach = nullptr;
	delete rutinaCliente;
	rutinaCliente = nullptr;

	for (int i = 0; i < can; i++) {
		delete historialMedicion[i];
		historialMedicion[i] = nullptr;
	}
	delete[] historialMedicion;
	can = 0;
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
void Cliente::setGeneroCliente(string gen) {
	this->generoCliente = gen;
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
		historialMedicion[0] = nullptr;
		for (int i = 0; i < can; i++) {
			historialMedicion[i] = historialMedicion[i + 1];
			can--;
		}
		historialMedicion[can] = aux;
		can++;
	}
}
Medicion* Cliente:: buscarPorFecha(Fecha* aux) {
	for (int i = 0; i < can; i++) {
		if (historialMedicion[i]->getFecha() == aux) {
			return historialMedicion[i];
		}
	}
}



