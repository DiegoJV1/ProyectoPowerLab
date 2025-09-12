#pragma once
#include <sstream>
#include <iostream>
#include "MedidasCorporales.h"
#include "Fecha.h"

using namespace std;

class Medicion{
private:
	Fecha* fechaMedicion;
	float peso, altura, porcenGrasa, porcenMusculo, edadMetabolica, porcenGrasaVisceral, IMC;
	MedidasCorporales* medidas;
	string clasificacionIMC;
public:
	Medicion();
	~Medicion();
	void setFechaMedicion(Fecha*);
	void setPeso(float);
	void setAltura(float);
	void setPorcenGrasa(float);
	void setPorcenMusculo(float);
	void setEdadMetabolica(float);
	void setPorcenGrasaVisceral(float);
	void setMedidas(MedidasCorporales*);
	
	void calculoIMC();
	void clasificacionPorIMC();

	Fecha* getFecha();
	float getPeso();
	float getAltura();
	float getPorcenGrasa();
	float getPorcenMusculo();
	float getEdadMetabolica();
	float getPorcenGrasaVisceral();
	float getIMC();
	string getClasificacionIMC();
	MedidasCorporales* getMedidas();

	string toString();

};

