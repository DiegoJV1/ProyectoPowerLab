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
Sucursal* Gimnasio:: getSucursal(int cod) {
	for (int i = 0; i < can; i++) {
		if (sucursales[i]!=nullptr && sucursales[i]->getCodigo() == cod) {
			return sucursales[i];
		}
	}
	return nullptr;
}
Cliente* Gimnasio::getCliente(string ced) {
	for (int i = 0; i < can; i++) {
		if (sucursales[i] != nullptr && sucursales[i]->getCliente(ced)) {
			return sucursales[i]->getCliente(ced);
		}
	}
	return nullptr;
}
string Gimnasio::toString() {
	stringstream ss;
	ss << "Nombre: " << nombre << endl;
	ss << "Sucursales: " << endl<<endl;
	for (int i = 0; i < can; i++) {
		ss << "Sucursal numero " << i << endl;
		ss << sucursales[i]->toString() << endl << endl;
	}
	return ss.str();
}
