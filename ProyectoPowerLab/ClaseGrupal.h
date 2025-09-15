#pragma once
#include"Instructor.h"
#include<string>
#include"Cliente.h"
#include"Horario.h"
class ClaseGrupal{
private:
	string nombreClaseGrupal, codigoClaseGrupal, salon;
	Instructor* coachClase;
	int capacidad, canInscritos;
	Cliente** inscritos;
	Horario* horario;
public:
	ClaseGrupal();
	~ClaseGrupal();
	void insertarCliente(Cliente*);
	void modificarCapacidadClase(int);
	void setHorario(Horario*);

	void setCoachClase(Instructor*);;
	void setNombreClaseGrupal(string);
	void setCodigoClaseGrupal(string);
	void setSalon(string);

	Instructor* getCoachClase();
	int getCapacidad();
	string getNombreClaseGrupal();
	string getCodigoClaseGrupal();
	string getSalon();
	Horario* getHorario();

	string toString();

};

