#pragma once
#include <string>
#include"GrupoMuscular.h"
using namespace std;
class Rutina{
private:
	GrupoMuscular* pecho;
	GrupoMuscular* tricep;
	GrupoMuscular* bicep;
	GrupoMuscular* pierna;
	GrupoMuscular* espalda;
	GrupoMuscular* hombro;

public:
	Rutina();
	void setPecho(GrupoMuscular*);
	void setTricep(GrupoMuscular*);
	void setBicep(GrupoMuscular*);
	void setPierna(GrupoMuscular*);
	void setEspalda(GrupoMuscular*);
	void setHombro(GrupoMuscular*);

	GrupoMuscular* getPecho();
	GrupoMuscular* getTricep();
	GrupoMuscular* getBicep();
	GrupoMuscular* getPierna();
	GrupoMuscular* getEspalda();
	GrupoMuscular* getHombro();

	string toString();
};

