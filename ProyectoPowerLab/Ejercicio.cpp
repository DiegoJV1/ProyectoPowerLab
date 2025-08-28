#include "Ejercicio.h"
#include <sstream>
Ejercicio::Ejercicio() {
	ejercicio = "Sin Definir";
	repeticiones = 0;
	series = 0;
}
Ejercicio::Ejercicio(string nombre, int reps, int series) {
	this->ejercicio = nombre;
	this->repeticiones = reps;
	this->series = series;
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
string Ejercicio::toString() {
	stringstream ss;
	ss << "Ejercicio:" << ejercicio<<"   "<<repeticiones<<"x"<<series << endl;
	return ss.str();
}
