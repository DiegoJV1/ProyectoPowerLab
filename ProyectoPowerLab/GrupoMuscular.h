#pragma once
#include "Ejercicio.h"
class GrupoMuscular{
private:
	int can;
	int tam;
	Ejercicio** gm;
public:
	GrupoMuscular();
	~GrupoMuscular();
	void insertarEjercicio(Ejercicio*);
	string toString();
};

