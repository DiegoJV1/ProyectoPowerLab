#include "Ejercicio.h"
#include <sstream>
Ejercicio::Ejercicio() {
	musculo = "Sin Definir";
	ejercicio = "Sin Definir";
	repeticiones = 0;
	series = 0;
}
Ejercicio::Ejercicio(string nombre, int reps, int series, int musculo) {
	this->ejercicio = nombre;
	this->repeticiones = reps;
	this->series = series;
	switch (musculo) {
	case 1:
		this->musculo = "Pecho";
		break;
	case 2:
		this->musculo = "Tricep";
		break;
	case 3:
		this->musculo = "Bicep";
		break;
	case 4:
		this->musculo = "Pierna";
		break;
	case 5:
		this->musculo = "Espalda";
		break;
	}
}
void Ejercicio::setMusculo(int musculo) {
	switch (musculo) {
	case 1:
		this->musculo = "Pecho";
		break;
	case 2:
		this->musculo = "Tricep";
		break;
	case 3:
		this->musculo = "Bicep";
		break;
	case 4:
		this->musculo = "Pierna";
		break;
	case 5:
		this->musculo = "Espalda";
		break;
	}
}
void Ejercicio::setNombreEjercicio(string nombre) {
	this->ejercicio = nombre;
}
void Ejercicio::setRepeticionesEjercicio(int reps) {
	this->repeticiones = reps;
}
void Ejercicio::setSeriesEjercicio(int series) {
	this->series = series;
}
string Ejercicio::getNombreEjercicio() {
	return ejercicio;
}
int Ejercicio::getRepeticionesEjercicio() {
	return repeticiones;
}
int Ejercicio::getSeriesEjercicio() {
	return series;
}
string Ejercicio::getMusculo() {
	return musculo;
}
string Ejercicio::toString() {
	stringstream ss;
	ss << "Ejercicio:" << ejercicio<<"   "<<repeticiones<<"x"<<series << endl;
	return ss.str();
}
