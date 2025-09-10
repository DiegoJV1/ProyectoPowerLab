#pragma once
#include <string>
using namespace std;
class Fecha{
private:
	int dia, mes, annio;
public:
	Fecha();
	Fecha(int, int, int);
	void setDia(int);
	void setMes(int);
	void setAnnio(int);

	int getDia();
	int getMes();
	int getAnnio();

	string toString();

};

