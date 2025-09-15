#include "Instructor.h"
#include<sstream>
#include<iostream>
using namespace std;

Instructor::Instructor() {
	nombreCoach = "Sin definir";
	cedulaCoach= "Sin definir";
	telefonoCoach= "Sin definir";
	correoCoach= "Sin definir";
	fechaNacimientoCoach = nullptr;
	
	canEspecialidades = 0;
	tamEspecialidades = 8;
	especialidades = new Especialidad * [tamEspecialidades];
	for (int i = 0; i < tamEspecialidades; i++) {
		especialidades[i] = nullptr;
	}
}
Instructor::~Instructor() {
	for (int i = 0; i < tamEspecialidades; i++) {
		delete especialidades[i];
		especialidades[i] = nullptr;
	}
	delete[] especialidades;
	canEspecialidades = 0;
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
void Instructor::insertarEspecialidad(Especialidad* aux) {
	if (canEspecialidades < tamEspecialidades) {
		especialidades[canEspecialidades] = aux;
		canEspecialidades++;
	}
	else {
		cout << "ERROR";
	}
}
bool Instructor::buscarEspecialidadCoach(string aux) {
	for (int i = 0; i < canEspecialidades; i++) {
		if (especialidades[i]->getNombreEspecialidad() == aux) {
			return true;
		}
	}
	return false;
}

string Instructor::toString() {
	stringstream ss;
	ss << "Nombre:" << nombreCoach << endl;
	ss << "Cedula:" << cedulaCoach << endl;
	ss << "Telefono:" << telefonoCoach << endl;
	ss << "Correo Electronico:" << correoCoach << endl;
	ss << "Fecha Nacimiento:" << fechaNacimientoCoach << endl;
	ss << "Especialidades:"<< endl<<endl;
	for (int i = 0; i < canEspecialidades; i++) {
		ss<<especialidades[i]->toString() << endl;
	}
	ss << "------------------------------------------------" << endl;
	return ss.str();

}



