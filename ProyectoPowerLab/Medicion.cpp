#include "Medicion.h"
#include<sstream>
#include<string>
#include<iostream>
using namespace std;

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
	tipoPaciente = "Paciente Regular";
	vasosAgua = 0;
	generoPaciente = "Sin definir";
	ingestaProteinaMaxima = 0.0;
	ingestaProteinaMinima = 0.0;
	ejercita = "no";
}
Medicion::~Medicion() {
	delete fechaMedicion;
	fechaMedicion = nullptr;
	delete medidas;
	medidas = nullptr;
}
void Medicion::setFechaMedicion(Fecha* fecha) {
	this->fechaMedicion = fecha;
}
void Medicion::setPeso(float p) {
	this->peso = p;
}
void Medicion::setAltura(float a) {
	this->altura = a;
}
void Medicion::setPorcenGrasa(float pg) {
	this->porcenGrasa = pg;
}
void Medicion::setPorcenMusculo(float pm) {
	this->porcenMusculo = pm;
}
void Medicion::setEdadMetabolica(float edadmeta) {
	this->edadMetabolica = edadmeta;
}
void Medicion::setPorcenGrasaVisceral(float pgv) {
	this->porcenGrasaVisceral = pgv;
}
void Medicion::setMedidas(MedidasCorporales* m) {
	this->medidas = m;
}
void Medicion::setGeneroPaciente(char gen) {
	if (gen == 'H') {
		this->generoPaciente = "hombre";
	}
	else {
		this->generoPaciente = "mujer";
	}
	
}
void Medicion::setEjercita(string aux) {
	this->ejercita = aux;
}

void Medicion::calculoIMC() {
	IMC = peso / (altura * altura);
}
void Medicion::calculoIngestaProteina() {
	ingestaProteinaMinima = 0.8 * peso;
	ingestaProteinaMaxima = 0.8 * peso;
	if (generoPaciente =="hombre" && ejercita == "si" || ejercita == "SI" || ejercita == "Si" || ejercita == "sI") {
		ingestaProteinaMinima = 1.7 * peso;
		ingestaProteinaMaxima = 2.5 * peso;
	}
	else if (generoPaciente == "mujer" && ejercita == "si" || ejercita == "SI" || ejercita == "Si" || ejercita == "sI") {
		ingestaProteinaMinima = 1.6 * peso;
		ingestaProteinaMaxima = 1.8 * peso;
	}
}
void Medicion::calculoVasosAgua() {
	vasosAgua = peso / 7;
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
		clasificacionIMC = "Pre-Obesidad";

	}
	else if (IMC <= 34.99) {
		clasificacionIMC = "Obesidad leve";

	}
	else if (IMC < 39.99) {
		clasificacionIMC = "Obesidad media";
		tipoPaciente = "Paciente de alto riesgo";

	}
	else {
		clasificacionIMC = "Obesidad morbida";
		tipoPaciente = "Paciente de alto riesgo";

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
string Medicion::getGeneroPaciente() {
	return generoPaciente;
}
int Medicion::getVasosAgua() {
	calculoVasosAgua();
	return vasosAgua;
}
float Medicion::getIngestaProteinaMaxima() {
	calculoIngestaProteina();
	return ingestaProteinaMaxima;
}
float Medicion::getIngestaProteinaMinima() {
	calculoIngestaProteina();
	return ingestaProteinaMinima;
}
string Medicion::getEjercita() {
	return ejercita;
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
	s << "¿Se ejercita? " << ejercita << endl;
	s << "Genero: " <<generoPaciente << endl;
	s << "Peso: " << peso << " kg" << endl;
	s << "Altura: " << altura << " m" << endl;
	s << "Porcentaje de Grasa: " << porcenGrasa << " %" << endl;
	s << "Porcentaje de Músculo: " << porcenMusculo << " %" << endl;
	s << "Edad Metabólica: " << edadMetabolica << " años" << endl;
	s << "Grasa Visceral: " << porcenGrasaVisceral << " %" << endl;
	calculoIMC();
	s << "IMC: " << IMC << endl;
	clasificacionPorIMC();
	s << "Clasificación IMC: " << clasificacionIMC << endl;
	s << "Tipo de Paciente: " << tipoPaciente << endl;
	calculoVasosAgua();
	s << "Vasos de agua diarios (250ml): " << vasosAgua << endl;
	calculoIngestaProteina();
	if (ingestaProteinaMinima != ingestaProteinaMaxima) {
		s << "Ingesta de proteina diaria aproximada: " << ingestaProteinaMinima << "-" << ingestaProteinaMaxima << endl;
	}
	else {
		s << "Ingesta de proteina diaria aproximada: " << ingestaProteinaMinima << endl;
	}

	 if (medidas != nullptr) {
	     s << "\nMedidas corporales:" << endl;
	     s << this->medidas->toString() << endl;
	 }

	return s.str();
}