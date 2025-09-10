#include "MedidasCorporales.h"
#include<sstream>

MedidasCorporales::MedidasCorporales() {
	cintura = 0;
	pecho = 0;
	cadera = 0;
	muslo = 0;
}
MedidasCorporales::MedidasCorporales(float cinaux, float pechoaux, float cadaux, float musaux) {
	this->cintura = cinaux;
	this->pecho = pechoaux;
	this->cadera = cadaux;
	this->muslo = musaux;
}
void MedidasCorporales::setCintura(float cinaux) {
	this->cintura = cinaux;
}
void MedidasCorporales::setPecho(float pechoaux) {
	this->pecho = pechoaux;
}
void MedidasCorporales::setCadera(float cadaux) {
	this->cadera = cadaux;
}
void MedidasCorporales::setMuslo(float musaux) {
	this->muslo = musaux;
}
float MedidasCorporales::getCintura() {
	return cintura;
}
float MedidasCorporales::getPecho() {
	return pecho;
}
float MedidasCorporales::getCadera() {
	return cadera;
}
float MedidasCorporales::getMuslo() {
	return muslo;
}
string MedidasCorporales::toString() {
	stringstream ss;
	ss << "Medidas Corporales: " << endl;
	ss << "Pecho: " << pecho << endl;
	ss << "Cintura: " << cintura << endl;
	ss << "Cadera: " << cadera << endl;
	ss << "Muslo: " << muslo << endl;
	return ss.str();
}
