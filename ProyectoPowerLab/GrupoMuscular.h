#pragma once
#include "Ejercicio.h"
class GrupoMuscular{
private:
	int can;
	int tam;
	Ejercicio** gm=nullptr;
public:
	GrupoMuscular();
	~GrupoMuscular();
	void insertarEjercicio(Ejercicio*);
	void eliminarEjercicio(string);
	string toString();
};

