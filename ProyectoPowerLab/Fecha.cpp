#include "Fecha.h"
#include<sstream>
Fecha::Fecha() {
	dia = 0;
	mes = 0;
	annio = 0;
}
Fecha::Fecha(int auxdia, int auxmes, int auxannio) {
	this->dia = auxdia;
	this->mes = auxmes;
	this->annio = auxannio;
}
void Fecha::setDia(int auxdia) {
	this->dia = auxdia;
}
void Fecha::setMes(int auxmes) {
	this->mes = auxmes;
}
void Fecha::setAnnio(int auxannio) {
	this->annio = auxannio;
}

int Fecha::getDia() {
	return dia;
}
int Fecha::getMes() {
	return mes;
}
int Fecha::getAnnio() {
	return annio;
}
string Fecha::toString() {
	stringstream ss;
	ss << dia << "/" << mes << "/" << annio << endl;
	return ss.str();
}
