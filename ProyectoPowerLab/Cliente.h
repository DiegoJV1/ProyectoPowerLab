#pragma once
#include <string>
#include "Instructor.h"
using namespace std;

class Cliente
{
private:
	int cedula, telefono, fechaNacimiento, fechaInscripcion;
	string nombre, genero;
	Instructor* coach;
public:
	Cliente();
	Cliente(int, int, int, int, string, string, Instructor*);
	void setCedula(int);
	void setTelefono(int);
	void setFechaNacimiento(int);
	void setNombre(string);
	void setGenero(string);
	void setInstructor(Instructor*);
	int getCedula();
	int getTelefono();
	int getFechaNacimiento();
	string getNombre();
	string getGenero();
	Instructor getInstructor();
};

