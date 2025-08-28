#pragma once
#include <string>
#include"GrupoMuscular.h"
using namespace std;
class Rutina{
private:
	GrupoMuscular *piernas, *pecho, *tricep, *bicep, *espalda, *hombro;
public:
	Rutina();
	void editarRutina();
	string toString();
};

