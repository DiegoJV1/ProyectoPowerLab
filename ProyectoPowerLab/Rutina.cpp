#include "Rutina.h"
#include<iostream>
#include<sstream>
using namespace std;
Rutina::Rutina() {
	piernas = new GrupoMuscular();
	pecho=new GrupoMuscular();
	bicep = new GrupoMuscular();
	tricep = new GrupoMuscular();
	espalda = new GrupoMuscular();
	hombro = new GrupoMuscular();
}
void Rutina::editarRutina() {
	string seguir = "si";
	while (seguir == "si" || seguir == "Si" || seguir == "SI" || seguir == "sI") {
		cout << "-----Menu de Edicion de Rutina-----" << endl;
		cout << "Grupos Musculares:" << endl;
		cout << "1-Piernas\n" << "2-Pecho\n" << "3-Bicep\n" << "4-Tricep\n" << "5-Espalda\n" << "6-Hombro\n\n";

	}
	
}
