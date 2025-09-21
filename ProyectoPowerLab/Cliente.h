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
	int contadorClases;
	Fecha* fechaNacimientoCliente;
	Fecha* fechaInscripcionCliente;
public:
	Cliente();
	~Cliente();
	void setFechaNacimientoCliente(Fecha*);
	void setFechaInscripcionCliente(Fecha*);
	void setNombreCliente(string);
	void setCedulaCliente(string);
	void setTelefonoCliente(string);
	void setCorreoCliente(string);
	void setGeneroCliente(char);
	void setCoach(Instructor*);
	void setRutina(Rutina*);
	void setContadorClases(int);

	void insertarMedicion(Medicion*);
	void ordenarMedicionesPorFecha();
	Medicion* buscarMasActual();

	int getContadorClases();
	string getNombreCliente();
	string getCedulaCliente();
	string getTelefonoCliente();
	string getCorreoCliente();
	char getGeneroCliente();
	Instructor* getCoach();
	Rutina* getRutinaCliente();
	Fecha* getFechaNacimientoCliente();
	Fecha* getFechaInscripcionCliente();


	string toString();
	string toStringRutina();
	string toStringResumen();


};

