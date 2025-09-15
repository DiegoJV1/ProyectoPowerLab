#pragma once
#include <iostream>
#include "Gimnasio.h"

using namespace std;


class Menu
{
private:
	Gimnasio* gym;
public:
	Menu(Gimnasio*);
	~Menu();
	void obtenerMenu();
};

