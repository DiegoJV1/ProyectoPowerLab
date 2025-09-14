#include "Gimnasio.h"
#include<iostream>
#include<sstream>
using namespace std;

Gimnasio::Gimnasio() {
	can = 0;
	tam = 30;
	nombre = "Sin Definir";
	sucursales = new Sucursal * [tam];
	for (int i = 0; i < tam; i++) {
		sucursales[i] = nullptr;
	}
}
void Gimnasio::setNombre(string aux) {
	this->nombre = aux;
}
string Gimnasio::getNombre() {
	return nombre;
}
void Gimnasio::insertarSucursal(Sucursal* aux) {
	if (can < tam) {
		sucursales[can] = aux;
		can++;
	}
	else {
		cout << "ERROR-Vector lleno";
	}
}
string Gimnasio::toString() {
	stringstream ss;
	ss << "Nombre: " << nombre << endl;
	ss << "Sucursales: " << endl<<endl;
	for (int i = 0; i < can; i++) {
		ss << sucursales[i]->toString() << endl << endl;
	}
	return ss.str();
}
