#pragma once
#include<string>
using namespace std;

class Especialidad{
private:
	string nombreEspecialidad;
public:
	Especialidad();
	void setNombreEspecialidad(int);
	string getNombreEspecialidad();
	string toString();
};

