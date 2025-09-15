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
string Gimnasio::clientePorInstructor(string ced) {
	stringstream ss;
	for (int i = 0; i < can; i++) {
		Instructor* instructor = sucursales[i]->getInstructor(ced);
		if (sucursales[i] != nullptr && instructor!=nullptr) {
			ss<<sucursales[i]->getClientesPorIns(ced);
		}
	}
	return ss.str();
}
// En Gimnasio.cpp
string Gimnasio::listarInstructoresPorEspecialidad(string espe) {
	stringstream ss;
	ss << "\n--- Lista de Instructores por Especialidad: " << espe << " ---" << endl;
	bool encontrados = false;
	for (int i = 0; i < can; i++) {
		if (sucursales[i] != nullptr) {
			string resultadoSucursal = sucursales[i]->buscarInstructoresPorEspecialidad(espe);
			if (resultadoSucursal.find("No se encontraron") == string::npos) {
				ss << resultadoSucursal;
				encontrados = true;
			}
		}
	}
	if (!encontrados) {
		ss << "No se encontraron instructores con esa especialidad en todo el gimnasio." << endl;
	}
	ss << "-----------------------------------" << endl;
	return ss.str();
}
string Gimnasio::verificarInscrito(string cedaux) {
	stringstream ss;
	for (int i = 0; i < can; i++) {
		if (sucursales[i]->verificacionCodBusquedaClasesPorCliente(cedaux) == true) {
			ss<<sucursales[i]->ImprimirCodBusquedaClasesPorCliente(cedaux)<<endl<<endl;
		}
	}
	return ss.str();
}
/*string Gimnasio::toString() {
	stringstream ss;
	ss << "Nombre: " << nombre << endl;
	ss << "Sucursales: " << endl<<endl;
	for (int i = 0; i < can; i++) {
		ss << "Sucursal numero " << i << endl;
		ss << sucursales[i]->toString() << endl << endl;
	}
	return ss.str();
}*/
