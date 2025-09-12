#include "Medicion.h"

Medicion::Medicion() {
	fechaMedicion = nullptr;
	medidas = nullptr;
	peso = 0.0;
	altura = 0.0;
	porcenGrasa = 0.0;
	porcenMusculo = 0.0;
	porcenGrasaVisceral = 0.0;
	edadMetabolica = 0.0;
	IMC = 0.0;
	clasificacionIMC = "Sin Definir";
}
Medicion::~Medicion() {
	delete fechaMedicion;
	fechaMedicion = nullptr;
	delete medidas;
	medidas = nullptr;
}



void Medicion::setFechaMedicion(Fecha* fecha) {
	fechaMedicion = fecha;
}
void Medicion::setPeso(float p) {
	peso = p;
}
void Medicion::setAltura(float a) {
	altura = a;
}
void Medicion::setPorcenGrasa(float pg) {
	porcenGrasa = pg;
}
void Medicion::setPorcenMusculo(float pm) {
	porcenMusculo = pm;
}
void Medicion::setEdadMetabolica(float em) {
	edadMetabolica = em;
}
void Medicion::setPorcenGrasaVisceral(float pgv) {
	porcenGrasaVisceral = pgv;
}
void Medicion::setMedidas(MedidasCorporales* m) {
	medidas = m;
}


void Medicion::calculoIMC() {
	IMC = peso / (altura * altura);
}
void Medicion::clasificacionPorIMC() {
	calculoIMC();
	if (IMC < 16.00) {
		clasificacionIMC = "Delgadez severa";
	}
	else if (IMC <= 16.99) {
		clasificacionIMC = "Delgadez moderada";

	}
	else if (IMC <= 18.49) {
		clasificacionIMC = "Delgadez leve";

	}
	else if (IMC <= 24.99) {
		clasificacionIMC = "Normal";

	}
	else if (IMC <= 29.99) {
		clasificacionIMC = "Pre-obesiada";

	}
	else if (IMC <= 34.99) {
		clasificacionIMC = "Obesidad leve";

	}
	else if (IMC < 39.99) {
		clasificacionIMC = "Obesidad media";

	}
	else {
		clasificacionIMC = "Obesidad morbida";

	}
}


Fecha* Medicion:: getFecha() {
	return fechaMedicion;

}
float Medicion::getPeso() {
	return peso;
}
float Medicion::getAltura() {
	return altura;
}
float Medicion::getPorcenGrasa() {
	return porcenGrasa;
}
float Medicion::getPorcenMusculo() {
	return porcenMusculo;
}
float Medicion::getEdadMetabolica() {
	return edadMetabolica;
}
float Medicion::getPorcenGrasaVisceral() {
	return porcenGrasaVisceral;
}
float Medicion::getIMC() {
	calculoIMC();
	return IMC;
}
string Medicion::getClasificacionIMC() {
	return clasificacionIMC;
}
MedidasCorporales* Medicion::getMedidas() {
	return medidas;
}

string Medicion::toString() {
	stringstream s;

	s << "--- Reporte de Medición ---" << endl;
	s << "Fecha: ";
	if (fechaMedicion != nullptr) {
		 s << fechaMedicion->toString() << endl;
	} else {
	     s << "Sin fecha" << endl;
	}
	s << "Peso: " << peso << " kg" << endl;
	s << "Altura: " << altura << " m" << endl;
	s << "Porcentaje de Grasa: " << porcenGrasa << " %" << endl;
	s << "Porcentaje de Músculo: " << porcenMusculo << " %" << endl;
	s << "Edad Metabólica: " << edadMetabolica << " años" << endl;
	s << "Grasa Visceral: " << porcenGrasaVisceral << " %" << endl;
	calculoIMC();
	s << "IMC: " << IMC << endl;
	s << "Clasificación IMC: " << clasificacionIMC << endl;

	 if (medidas != nullptr) {
	     s << "\nMedidas corporales:" << endl;
	     s << this->medidas->toString() << endl;
	 }

	return s.str();
}