#include<iostream>
#include"Gimnasio.h"
#include"Menu.h"
#include"Sucursal.h"
#include"Cliente.h"
#include"Fecha.h"
#include"Horario.h"
#include"Medicion.h"
#include"MedidasCorporales.h"
#include"Instructor.h"
#include"Rutina.h"

using namespace std;
int main(){
	//Gimnasio ya creado
	Gimnasio* g1 = new Gimnasio();
	g1->setNombre("PowerLab");
	cout << "Bienvenido al sistema del gimnasio" << g1->getNombre() << endl;
	system("pause");
	system("cls");

	//10 sucursales ya creadas
	Sucursal* sucu1 = new Sucursal();
	Sucursal* sucu2 = new Sucursal();
	Sucursal* sucu3 = new Sucursal();
	Sucursal* sucu4 = new Sucursal();
	Sucursal* sucu5 = new Sucursal();
	Sucursal* sucu6 = new Sucursal();
	Sucursal* sucu7 = new Sucursal();
	Sucursal* sucu8 = new Sucursal();
	Sucursal* sucu9 = new Sucursal();
	Sucursal* sucu10 = new Sucursal();

	//12 instructores ya creados
	Instructor* ins1 = new Instructor();
	Instructor* ins1 = new Instructor();
	Instructor* ins1 = new Instructor();
	Instructor* ins1 = new Instructor();
	Instructor* ins1 = new Instructor();
	Instructor* ins1 = new Instructor();
	Instructor* ins1 = new Instructor();
	Instructor* ins1 = new Instructor();
	Instructor* ins1 = new Instructor();
	Instructor* ins1 = new Instructor();
	Instructor* ins1 = new Instructor();
	Instructor* ins1 = new Instructor();



	//10 rutinas ya creadas
	Rutina* rut1 = new Rutina();
	Rutina* rut2 = new Rutina();
	Rutina* rut3 = new Rutina();
	Rutina* rut4 = new Rutina();
	Rutina* rut5 = new Rutina();
	Rutina* rut6 = new Rutina();
	Rutina* rut7 = new Rutina();
	Rutina* rut8 = new Rutina();
	Rutina* rut9 = new Rutina();
	Rutina* rut10 = new Rutina();



	//10 mediciones ya creadas
	Medicion* med1 = new Medicion();
	Medicion* med2 = new Medicion();
	Medicion* med3 = new Medicion();
	Medicion* med4 = new Medicion();
	Medicion* med5 = new Medicion();
	Medicion* med6 = new Medicion();
	Medicion* med7 = new Medicion();
	Medicion* med8 = new Medicion();
	Medicion* med9 = new Medicion();
	Medicion* med10 = new Medicion();
	Medicion* med11 = new Medicion();
	Medicion* med12 = new Medicion();
	Medicion* med13 = new Medicion();
	Medicion* med14 = new Medicion();
	Medicion* med15 = new Medicion();
	Medicion* med16 = new Medicion(); 
	Medicion* med17 = new Medicion();
	Medicion* med18 = new Medicion();
	Medicion* med19 = new Medicion();
	Medicion* med20 = new Medicion();

	//15 clases grupales ya creadas
	
	//20 Clientes ya creados

	Cliente* clien1 = new Cliente();
	Cliente* clien2 = new Cliente();
	Cliente* clien3 = new Cliente();
	Cliente* clien4 = new Cliente();
	Cliente* clien5 = new Cliente();
	Cliente* clien6 = new Cliente();
	Cliente* clien7 = new Cliente();
	Cliente* clien8 = new Cliente();
	Cliente* clien9 = new Cliente();
	Cliente* clien10 = new Cliente();
	Cliente* clien11 = new Cliente();
	Cliente* clien12 = new Cliente();
	Cliente* clien13 = new Cliente();
	Cliente* clien14 = new Cliente();
	Cliente* clien15 = new Cliente();
	Cliente* clien16 = new Cliente();
	Cliente* clien17 = new Cliente();
	Cliente* clien18 = new Cliente();
	Cliente* clien19 = new Cliente();
	Cliente* clien20 = new Cliente();

	







	Menu* m1 = new Menu(g1);
	m1->obtenerMenu();

	
}

