#pragma once
#include"Especialidad.h"
#include"Instructor.h"
#include<string>
#include"Cliente.h"
#include"Horario.h"
class ClaseGrupal{
private:
	Especialidad* tipo;
	string nombreClaseGrupal, codigoClaseGrupal, salon;
	Instructor* coachClase;
	int capacidad, canInscritos;
	Cliente** inscritos;
	Horario* horario;
public:
	ClaseGrupal();
	~ClaseGrupal();
	bool insertarCliente(Cliente*);
	void modificarCapacidadClase(int);
	void setHorario(Horario*);
	void setTipo(Especialidad*);

	void setCoachClase(Instructor*);;
	void setNombreClaseGrupal(string);
	void setCodigoClaseGrupal(string);
	void setSalon(string);
	void setCapacidad(int);

	Instructor* getCoachClase();
	int getCapacidad();
	string getNombreClaseGrupal();
	string getCodigoClaseGrupal();
	string getSalon();
	Horario* getHorario();
	Especialidad* getTipo();

	string toString();
	string toStringSoloDatos();
	bool busquedaCliente(string);

};

