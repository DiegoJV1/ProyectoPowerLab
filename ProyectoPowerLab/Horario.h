#pragma once
#include <string>
using namespace std;
class Horario{
private:
	string dia;
	int hora, minutos;
public:
	Horario();
	Horario(string, int, int);
	void setDia(string);
	void setHora(int);
	void setMinutos(int);
	string getDia();
	int getHora();
	int getMinutos();
	string toString();
};

