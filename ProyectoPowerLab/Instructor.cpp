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
	fechaNacimientoCoach = nullptr;
}
Instructor::~Instructor() {
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
void Instructor::setEspecialidadCoach(int espaux) {
	
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
	return ss.str();

}



