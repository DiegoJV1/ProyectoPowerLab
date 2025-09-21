#pragma once
#include <string>
using namespace std;
class Horario{
private:
	string dia, hora, minutos;
public:
	Horario();
	Horario(string, string, string);
	void setDia(string);
	void setHora(string);
	void setMinutos(string);
	string getDia();
	string getHora();
	string getMinutos();
	string toString();
};

