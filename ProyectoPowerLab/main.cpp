#include<iostream>
#include"Gimnasio.h"
#include"Menu.h"
using namespace std;
int main(){
	Gimnasio* g1 = new Gimnasio();
	Menu* m1 = new Menu(g1);
	m1->obtenerMenu();

	
}

