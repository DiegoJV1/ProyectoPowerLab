#pragma once
#include <sstream>
#include <iostream>
#include "MedidasCorporales.h"
#include "Fecha.h"

using namespace std;

class Medicion{
private:
	Fecha* fechaMedicion;
	float peso, altura, porcenGrasa, porcenMusculo, edadMetabolica, porcenGrasaVisceral, IMC, ingestaProteinaMaxima, ingestaProteinaMinima;
	MedidasCorporales* medidas;
	string clasificacionIMC, tipoPaciente, generoPaciente, ejercita;
	int vasosAgua;

public:
	Medicion();
	Medicion(double, double, int, int, int);
	~Medicion();
	void setFechaMedicion(Fecha*);
	void setPeso(float);
	void setAltura(float);
	void setPorcenGrasa(float);
	void setPorcenMusculo(float);
	void setEdadMetabolica(float);
	void setPorcenGrasaVisceral(float);
	void setMedidas(MedidasCorporales*);
	void setGeneroPaciente(char);
	void setEjercita(string);
	
	void calculoIMC();
	void clasificacionPorIMC();
	void calculoVasosAgua();
	void calculoIngestaProteina();

	Fecha* getFecha();
	float getPeso();
	float getAltura();
	float getPorcenGrasa();
	float getPorcenMusculo();
	float getEdadMetabolica();
	float getPorcenGrasaVisceral();
	float getIMC();
	float getIngestaProteinaMaxima();
	float getIngestaProteinaMinima();
	int getVasosAgua();
	string getGeneroPaciente();
	string getEjercita();

	string getClasificacionIMC();
	MedidasCorporales* getMedidas();

	string toString();

};

