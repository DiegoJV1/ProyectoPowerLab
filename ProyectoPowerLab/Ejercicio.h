#pragma once
#include <string>
using namespace std;
class Ejercicio{
private:
	string ejercicio;
	int repeticiones, series;
	string musculo;
public:
	Ejercicio();
	Ejercicio(string, int, int, int);
	void setMusculo(int);
	void setNombreEjercicio(string);
	void setRepeticionesEjercicio(int);
	void setSeriesEjercicio(int);
	string getNombreEjercicio();
	int getRepeticionesEjercicio();
	int getSeriesEjercicio();
	int getMusculo();
	string toString();
};

