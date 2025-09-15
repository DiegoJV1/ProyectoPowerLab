#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Instructor.h"
#include "Cliente.h"
using namespace std;
class Sucursal{
private:
	int codigo, telefono;
	string provincia, canton, correoElectronico;
	Instructor** instructores = new Instructor*[10];
	Cliente** clientes = new Cliente*[1000];
	int canInstructores = 0;
	int canClientes = 0;
public:
	Sucursal();
	Sucursal(int, int, string, string, string);
	~Sucursal();



	void setCodigo(int);
	void setTelefono(int);
	void setProvincia(string);
	void setCanton(string);
	void setCorreoElectronico(string);
	void setInstructor(Instructor*);
	void setCliente(Cliente*);

	Instructor* getInstructor(string);
	int getCodigo();
	int getTelefono();
	string getProvincia();
	string getCanton();
	string getCorreoElectronico();
	int getCanInstructores();
	int getCanClientes();

	string toString();
	string clientesSucursal();

};

