#pragma once
#include <string>
#include "Fecha.h"
#include "Cliente.h"
using namespace std;
class Instructor
{
private:
	Fecha* fechaNacimientoCoach;
	string nombreCoach, cedulaCoach, telefonoCoach, correoCoach, especialidadCoach;
	int canClientes, tamClientes;
	Cliente** clientes;
public:
	Instructor();
	~Instructor();
	void setNombreCoach(string);
	void setCedulaCoach(string);
	void setTelefonoCoach(string);
	void setCorreoCoach(string);
	void setFechaNacimientoCoach(Fecha*);
	void setEspecialidadCoach(string);

	void insertarCliente(Cliente*);
	void eliminarCliente(string);

	string getNombreCoach();
	string getCedulaCoach();
	string getTelefonoCoach();
	string getCorreoCoach();
	string getEspecialidadCoach();
	Fecha* getFechaNacimientoCoach();

	string toString();
};

