#pragma once
#include <string>
#include "Instructor.h"
#include "Cliente.h"
using namespace std;
class Sucursal{
private:
	int codigo, telefono;
	string provincia, canton, correoElectronico;
	Instructor** instructores = new Instructor[10];
	Cliente** clientes = new Instructor[1000];
public:
	Sucursal();
	Sucursal(int, int, string, string, string, Instructor*, Cliente*);
	void setCodigo(int);
	void setTelefono(int);
	void setProvincia(string);
	void setCanton(string);
	void setCorreoElectronico(string);
	//void setInstructor(Instructor*);
	//void setCliente(Cliente*);

};

