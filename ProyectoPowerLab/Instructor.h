#pragma once
#include <string>
#include "Fecha.h"

using namespace std;
class Instructor{
private:
	Fecha* fechaNacimientoCoach;
	string nombreCoach, cedulaCoach, telefonoCoach, correoCoach;
	string especialidadCoach;
	int canClientes, tamClientes;
public:
	Instructor();
	~Instructor();
	void setNombreCoach(string);
	void setCedulaCoach(string);
	void setTelefonoCoach(string);
	void setCorreoCoach(string);
	void setFechaNacimientoCoach(Fecha*);
	void setEspecialidadCoach(int);

	string getNombreCoach();
	string getCedulaCoach();
	string getTelefonoCoach();
	string getCorreoCoach();
	string getEspecialidadCoach();
	Fecha* getFechaNacimientoCoach();

	string toString();
};

