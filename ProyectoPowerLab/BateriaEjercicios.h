#pragma once
#include "Ejercicio.h"
class BateriaEjercicios{
private:
	int can;
	int tam;
	Ejercicio** bateria=nullptr;
public:
	BateriaEjercicios();
	~BateriaEjercicios();
	void insertarEjercicio(Ejercicio*);
	Ejercicio* buscarEjercicio(string);
	string toString();
};

