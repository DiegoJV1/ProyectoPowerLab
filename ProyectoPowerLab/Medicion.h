#pragma once
#include "MedidasCorporales.h"
#include "Fecha.h"
class Medicion{
private:
	Fecha* fechaMedicion;
	float peso, altura, porcenGrasa, porcenMusculo, edadMetabolica, porcenGrasaVisceral, IMC;
	MedidasCorporales* medidas;
	string clasificacionIMC;
public:
	Medicion();
	void setFechaMedicion(Fecha*);
	void setPeso(float);
	void setAltura(float);
	void setPorcenGrasa(float);
	void setPorcenMusculo(float);
	void setEdadMetabolica(float);
	void setPorcenGrasaVisceral(float);
	
	void calculoIMC();
	void clasificacionPorIMC();

	float getPeso();
	float getAltura();
	float getPorcenGrasa();
	float getPorcenMusculo();
	float getEdadMetabolica();
	float getPorcenGrasaVisceral();
	float getIMC();
	string getClasificacionIMC();

	string toString();

};

