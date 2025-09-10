#include "Medicion.h"

Medicion::Medicion() {
	fechaMedicion = nullptr;
	peso = 0;
	altura = 0;
	porcenGrasa = 0;
	porcenMusculo = 0;
	porcenGrasaVisceral = 0;
	edadMetabolica = 0;
	IMC = 0;
	clasificacionIMC = "Sin Definir";
}
void Medicion::setFechaMedicion(Fecha* aux) {
	this->fechaMedicion = aux;
}
