#pragma once
#include<string>
using namespace std;

class MedidasCorporales{
private:
	float cintura, pecho, cadera, muslo;
public:
	MedidasCorporales();
	MedidasCorporales(float, float, float, float);
	void setCintura(float);
	void setPecho(float);
	void setCadera(float);
	void setMuslo(float);
	float getCintura();
	float getPecho();
	float getCadera();
	float getMuslo();
	string toString();

};

