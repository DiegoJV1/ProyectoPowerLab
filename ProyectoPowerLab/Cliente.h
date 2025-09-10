#pragma once
#include <string>
#include "Instructor.h"
#include"Medicion.h"
#include"Rutina.h"
#include"Fecha.h"
using namespace std;

class Cliente{
private:
	string nombreCliente, cedulaCliente, telefonoCliente, correoCliente, generoCliente;
	Instructor* coach;
	int can, tam;
	Medicion** historialMedicion;
	Rutina* rutinaCliente;
public:
	Cliente();
	~Cliente();
	void setNombreCliente(string);
	void setCedulaCliente(string);
	void setTelefonoCliente(string);
	void setCorreoCliente(string);
	void setGeneroCliente(string);
	void setCoach(Instructor*);
	void setRutina(Rutina*);

	void insertarMedicion(Medicion*);
	Medicion* buscarPorFecha(Fecha*);
	Medicion* buscarMasActual();

	string getNombreCliente();
	string getCedulaCliente();
	string getTelefonoCliente();
	string getCorreoCliente();
	string getGeneroCliente();
	Instructor* getCoach();
	Rutina* getRutinaCliente();

	string toString();



};

