#pragma once
#include <string>
using namespace std;
class Instructor
{
private:
	int cedula, telefono, fechaNacimiento;
	string nombre;
	bool especilidad;
public:
	Instructor();
	Instructor(int, int, int, string, bool);
	void setCedula(int);
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

