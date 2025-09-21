#pragma once
#include <string>
#include"Ejercicio.h"
using namespace std;
class Rutina{
private:
	Ejercicio** ejercicios;
	int can, tam;

public:
	Rutina();
	~Rutina();

	void insertarEjercicio(Ejercicio*);

	string toString();
};

