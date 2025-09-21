#include "Horario.h"
#include<sstream>
Horario::Horario() {
	dia = "Sin Definir";
	hora = "0";
	minutos = "0";
}
Horario::Horario(string diaaux, string horaaux, string minutosaux) {
	this->dia = diaaux;
	this->hora = horaaux;
	this->minutos = minutosaux;
}
void Horario::setDia(string diaaux) {
	this->dia = diaaux;
}
void Horario::setHora(string horaaux) {
	this->hora = horaaux;
}
void Horario::setMinutos(string minutosaux) {
	this->minutos = minutosaux;
}
string Horario::getDia() {
	return dia;
}
string Horario::getHora() {
	return hora;
}
string Horario::getMinutos() {
	return minutos;
}
string Horario::toString() {
	stringstream ss;
	ss << "---Horario---" << endl;
	ss << dia << "  " << hora<<":" << minutos << endl;
	return ss.str();
}