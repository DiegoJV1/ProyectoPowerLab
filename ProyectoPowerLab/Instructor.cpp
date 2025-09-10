#include "Instructor.h"
#include<sstream>
#include<iostream>
using namespace std;

Instructor::Instructor() {
	nombreCoach = "Sin definir";
	cedulaCoach= "Sin definir";
	telefonoCoach= "Sin definir";
	correoCoach= "Sin definir";
	especialidadCoach= "Sin definir";
	canClientes = 0;
	tamClientes = 1000;
	clientes = new Cliente * [tamClientes];
	for (int i = 0; i < tamClientes; i++) {
		clientes[i] = nullptr;
	}
}
void Instructor::insertarCliente(Cliente* aux) {
	if (canClientes < tamClientes) {
		clientes[canClientes] = aux;
		canClientes++;
	}
	else {
		cout << "ERROR-Vector lleno";
	}
}
void Instructor::eliminarCliente(string cedaux) {
	for (int i = 0; i < canClientes; i++) {
		if (clientes[i]->getCedulaCliente() == cedaux) {
			for (int j = i; j < canClientes + 1; j++) {
				clientes[j] = clientes[j + 1];
				canClientes--;
			}
		}
		else {
			cout << "ERROR-Cliente no encontrado";
		}
	}
}
void Instructor::setNombreCoach(string nomaux) {
	this->nombreCoach = nomaux;
}
void Instructor::setCedulaCoach(string cedaux) {
	this->cedulaCoach = cedaux;
}
void Instructor::setTelefonoCoach(string telaux) {
	this->telefonoCoach = telaux;
}
void Instructor::setCorreoCoach(string correoaux) {
	this->correoCoach = correoaux;
}
void Instructor::setFechaNacimientoCoach(Fecha* fechaaux) {
	this->fechaNacimientoCoach = fechaaux;
}
void Instructor::setEspecialidadCoach(string espaux) {
	this->especialidadCoach = espaux;
}
string Instructor::getNombreCoach() {
	return nombreCoach;
}
string Instructor::getCedulaCoach() {
	return cedulaCoach;
}
string Instructor::getTelefonoCoach() {
	return telefonoCoach;
}
string Instructor::getCorreoCoach() {
	return correoCoach;
}
Fecha* Instructor::getFechaNacimientoCoach() {
	return fechaNacimientoCoach;
}
string Instructor::getEspecialidadCoach() {
	return especialidadCoach;
}

string Instructor::toString() {
	stringstream ss;
	ss << "Nombre:" << nombreCoach << endl;
	ss << "Cedula:" << cedulaCoach << endl;
	ss << "Telefono:" << telefonoCoach << endl;
	ss << "Correo Electronico:" << correoCoach << endl;
	ss << "Fecha Nacimiento:" << fechaNacimientoCoach << endl;
	ss << "Especialidad:" << especialidadCoach << endl;
	ss << "------------------------------------------------" << endl;
	ss << "Clientes: " << endl;
	for (int i = 0; i < canClientes; i++) {
		ss<<clientes[i]->toString() << endl << endl;
	}
	

}



