#pragma once
#include <string>
#include "Fecha.h"
#include "Especialidad.h"

using namespace std;
class Instructor{
private:
	Fecha* fechaNacimientoCoach;
	string nombreCoach, cedulaCoach, telefonoCoach, correoCoach;
	Especialidad** especialidades;
	int canEspecialidades, tamEspecialidades;

public:
	Instructor();
	~Instructor();
	void setNombreCoach(string);
	void setCedulaCoach(string);
	void setTelefonoCoach(string);
	void setCorreoCoach(string);
	void setFechaNacimientoCoach(Fecha*);
	void setEspecialidadCoach(int);

	void insertarEspecialidad(Especialidad*);

	string getNombreCoach();
	string getCedulaCoach();
	string getTelefonoCoach();
	string getCorreoCoach();
	string getEspecialidadCoach();
	Fecha* getFechaNacimientoCoach();

	string toString();
};

