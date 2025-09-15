#include "Especialidad.h"
#include<sstream>

Especialidad::Especialidad() {
	nombreEspecialidad = "Sin definir";
}
void Especialidad::setNombreEspecialidad(int aux) {
	switch (aux) {
	case 1:
		this->nombreEspecialidad = "CrossFit";
		break;
	case 2:
		this->nombreEspecialidad = "HIIT";
		break;
	case 3:
		this->nombreEspecialidad = "TRX";
		break;
	case 4:
		this->nombreEspecialidad = "Pesas";
		break;
	case 5:
		this->nombreEspecialidad = "Spinning";
		break;
	case 6:
		this->nombreEspecialidad = "Cardio";
		break;
	case 7:
		this->nombreEspecialidad = "Yoga";
		break;
	case 8:
		this->nombreEspecialidad = "Zumba";
		break;
	}
}
string Especialidad::getNombreEspecialidad() {
	return nombreEspecialidad;
}
string Especialidad::toString() {
	stringstream ss;
	ss << "Especialidad: " << nombreEspecialidad << endl;
	return ss.str();
}
