#include "Instructor.h"

Instructor::Instructor() {
	cedula = 0;
	telefono = 0;
	fechaNacimiento = 0;
	nombre = "Sin Definir";
	especilidad = 'S';
}
Instructor::Instructor(int cedula, int telefono, int fechaNacimiento, string nombre, bool especialidad) {
	this->cedula = cedula;
	this->telefono = telefono;
	this->fechaNacimiento = fechaNacimiento;
	this->nombre = nombre;
	this->especilidad = especialidad;
}
void Instructor::setCedula(int cedula) {
	this->cedula = cedula;
}
void Instructor::setTelefono(int telefono) {
	this->telefono = telefono;
}
void Instructor::setFechaNacimiento(int fechaNacimiento) {
	this->fechaNacimiento = fechaNacimiento;
}
void Instructor::setNombre(string nombre) {
	this->nombre = nombre;
}
void Instructor::setEspecialidad(bool especialidad) {
	this->especilidad = especialidad;
}
