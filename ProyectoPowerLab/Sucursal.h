#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Instructor.h"
#include "Cliente.h"
#include"ClaseGrupal.h"
using namespace std;
class Sucursal{
private:
	int codigo, telefono;
	string provincia, canton, correoElectronico;
	Instructor** instructores;
	Cliente** clientes;
	int canInstructores, canClientes, canClases;
	ClaseGrupal** clases;

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
	void setClaseGrupal(ClaseGrupal*);

	Instructor* getInstructor(string);
	int getCodigo();
	int getTelefono();
	string getProvincia();
	string getCanton();
	string getCorreoElectronico();
	int getCanInstructores();
	int getCanClientes();
	Cliente* getCliente(string);
	ClaseGrupal* getClaseGrupal(string);

	string toString();
	string clientesSucursal();

};
