#pragma once
#include <string>
using namespace std;
class Ejercicio{
private:
	string ejercicio;
	int repeticiones, series;
public:
	Ejercicio();
	Ejercicio(string, int, int);
	void setNombreEjercicio(string);
	void setRepeticionesEjercicio(int);
	void setSeriesEjercicio(int);
	string getNombreEjercicio();
	int getRepeticionesEjercicio();
	int getSeriesEjercicio();
	string toString();
};

