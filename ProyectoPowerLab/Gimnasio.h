#pragma once
#include"Sucursal.h"
#include<string>
using namespace std;
class Gimnasio{
private:
	Sucursal** sucursales;
	int can, tam;
	string nombre;
public:
	Gimnasio();
	void setNombre(string);
	string getNombre();
	void insertarSucursal(Sucursal*);
	Sucursal* getSucursal(int);
	Cliente* getCliente(string);
	string clientePorInstructor(string);
	string listarInstructoresPorEspecialidad(string);
	//string toString();
};

