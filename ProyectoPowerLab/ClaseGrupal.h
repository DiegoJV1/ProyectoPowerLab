#pragma once
#include"Instructor.h"
#include<string>
#include"Cliente.h"
class ClaseGrupal{
private:
	string nombreClaseGrupal, codigoClaseGrupal, salon;
	Instructor* coachClase;
	int capacidad, canInscritos;
	Cliente** inscritos;
public:
	ClaseGrupal();
	~ClaseGrupal();
	void insertarCliente(Cliente*);

	void setCoachClase(Instructor*);
	void setCapacidad(int);
	void setNombreClaseGrupal(string);
	void setCodigoClaseGrupal(string);
	void setSalon(string);

	Instructor* getInstructor();
	int getCapacidad();
	string getNombreClaseGrupal();
	string getCodigoClaseGrupal();
	string getSalon();


};

