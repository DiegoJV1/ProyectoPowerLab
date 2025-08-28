#pragma once
#include <string>
using namespace std;
class Instructor
{
private:
	int  telefono, fechaNacimiento;
	string nombre, cedula;
	bool especilidad;
public:
	Instructor();
	Instructor(int, int, string, string, bool);
	void setCedula(string);
	void setTelefono(int);
	void setFechaNacimiento(int);
	void setNombre(string);
	void setEspecialidad(bool);
	int getCedula();
	int getTelefono();
	int getFechaNacimiento();
	string getNombre();
	bool getEspecialidad();

};

