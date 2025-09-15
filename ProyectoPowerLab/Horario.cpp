#include "Horario.h"
#include<sstream>
Horario::Horario() {
	dia = "Sin Definir";
	hora = 0;
	minutos = 0;
}
Horario::Horario(string diaaux, int horaaux, int minutosaux) {
	this->dia = diaaux;
	this->hora = horaaux;
	this->minutos = minutosaux;
}
void Horario::setDia(string diaaux) {
	this->dia = diaaux;
}
void Horario::setHora(int horaaux) {
	this->hora = horaaux;
}
void Horario::setMinutos(int minutosaux) {
	this->minutos = minutosaux;
}
string Horario::getDia() {
	return dia;
}
int Horario::getHora() {
	return hora;
}
int Horario::getMinutos() {
	return minutos;
}
string Horario::toString() {
	stringstream ss;
	ss << "---Horario---" << endl;
	ss << dia << "  " << hora<<":" << minutos << endl;
	return ss.str();
}