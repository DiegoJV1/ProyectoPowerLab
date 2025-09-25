#pragma once
#include <iostream>
#include "Gimnasio.h"
#include "BateriaEjercicios.h"

using namespace std;


class Menu
{
private:
	Gimnasio* gym;
	BateriaEjercicios* bateria;
public:
	Menu(Gimnasio*, BateriaEjercicios*);
	~Menu();
	void obtenerMenu();
};

