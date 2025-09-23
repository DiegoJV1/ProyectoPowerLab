#include <iostream>
#include "Gimnasio.h"
#include "Menu.h"
#include "Sucursal.h"
#include "Cliente.h"
#include "Fecha.h"
#include "Horario.h"
#include "Medicion.h"
#include "MedidasCorporales.h"
#include "Instructor.h"
#include "Rutina.h"
#include "BateriaEjercicios.h"
#include "Especialidad.h"
#include "Ejercicio.h"
#include "ClaseGrupal.h"

using namespace std;

int main() {
    // Gimnasio ya creado
    Gimnasio* g1 = new Gimnasio();
    g1->setNombre("PowerLab");
    cout << "Bienvenido al sistema del gimnasio " << g1->getNombre() << endl;
    system("pause");
    system("cls");

    // Bateria de ejercicios con 10 ejercicios variados
    BateriaEjercicios* bateria = new BateriaEjercicios();
    Ejercicio* ej1 = new Ejercicio();
    ej1->setNombreEjercicio("Press Banca");
    ej1->setRepeticionesEjercicio(10);
    ej1->setSeriesEjercicio(4);
    ej1->setMusculo(1); // Pecho
    bateria->insertarEjercicio(ej1);

    Ejercicio* ej2 = new Ejercicio();
    ej2->setNombreEjercicio("Fondos Triceps");
    ej2->setRepeticionesEjercicio(12);
    ej2->setSeriesEjercicio(3);
    ej2->setMusculo(2); // Tricep
    bateria->insertarEjercicio(ej2);

    Ejercicio* ej3 = new Ejercicio();
    ej3->setNombreEjercicio("Curl Bicep");
    ej3->setRepeticionesEjercicio(15);
    ej3->setSeriesEjercicio(3);
    ej3->setMusculo(3); // Bicep
    bateria->insertarEjercicio(ej3);

    Ejercicio* ej4 = new Ejercicio();
    ej4->setNombreEjercicio("Sentadillas");
    ej4->setRepeticionesEjercicio(8);
    ej4->setSeriesEjercicio(5);
    ej4->setMusculo(4); // Pierna
    bateria->insertarEjercicio(ej4);

    Ejercicio* ej5 = new Ejercicio();
    ej5->setNombreEjercicio("Dominadas");
    ej5->setRepeticionesEjercicio(10);
    ej5->setSeriesEjercicio(4);
    ej5->setMusculo(5); // Espalda
    bateria->insertarEjercicio(ej5);

    Ejercicio* ej6 = new Ejercicio();
    ej6->setNombreEjercicio("Press Militar");
    ej6->setRepeticionesEjercicio(10);
    ej6->setSeriesEjercicio(4);
    ej6->setMusculo(1);
    bateria->insertarEjercicio(ej6);

    Ejercicio* ej7 = new Ejercicio();
    ej7->setNombreEjercicio("Extensiones Triceps");
    ej7->setRepeticionesEjercicio(12);
    ej7->setSeriesEjercicio(3);
    ej7->setMusculo(2);
    bateria->insertarEjercicio(ej7);

    Ejercicio* ej8 = new Ejercicio();
    ej8->setNombreEjercicio("Martillo Bicep");
    ej8->setRepeticionesEjercicio(15);
    ej8->setSeriesEjercicio(3);
    ej8->setMusculo(3);
    bateria->insertarEjercicio(ej8);

    Ejercicio* ej9 = new Ejercicio();
    ej9->setNombreEjercicio("Prensa Piernas");
    ej9->setRepeticionesEjercicio(8);
    ej9->setSeriesEjercicio(5);
    ej9->setMusculo(4);
    bateria->insertarEjercicio(ej9);

    Ejercicio* ej10 = new Ejercicio();
    ej10->setNombreEjercicio("Remo Espalda");
    ej10->setRepeticionesEjercicio(10);
    ej10->setSeriesEjercicio(4);
    ej10->setMusculo(5);
    bateria->insertarEjercicio(ej10);

    // 10 sucursales ya creadas
    Sucursal* sucu1 = new Sucursal();
    sucu1->setCodigo(1);
    sucu1->setTelefono(1);
    sucu1->setProvincia("San Jose");
    sucu1->setCanton("Central");
    sucu1->setCorreoElectronico("suc1@gmail.com");
    g1->insertarSucursal(sucu1);

    Sucursal* sucu2 = new Sucursal();
    sucu2->setCodigo(2);
    sucu2->setTelefono(2);
    sucu2->setProvincia("Alajuela");
    sucu2->setCanton("Central");
    sucu2->setCorreoElectronico("suc2@gmail.com");
    g1->insertarSucursal(sucu2);

    Sucursal* sucu3 = new Sucursal();
    sucu3->setCodigo(3);
    sucu3->setTelefono(3);
    sucu3->setProvincia("Cartago");
    sucu3->setCanton("Central");
    sucu3->setCorreoElectronico("suc3@gmail.com");
    g1->insertarSucursal(sucu3);

    Sucursal* sucu4 = new Sucursal();
    sucu4->setCodigo(4);
    sucu4->setTelefono(4);
    sucu4->setProvincia("Heredia");
    sucu4->setCanton("Central");
    sucu4->setCorreoElectronico("suc4@gmail.com");
    g1->insertarSucursal(sucu4);

    Sucursal* sucu5 = new Sucursal();
    sucu5->setCodigo(5);
    sucu5->setTelefono(5);
    sucu5->setProvincia("Guanacaste");
    sucu5->setCanton("Liberia");
    sucu5->setCorreoElectronico("suc5@gmail.com");
    g1->insertarSucursal(sucu5);

    Sucursal* sucu6 = new Sucursal();
    sucu6->setCodigo(6);
    sucu6->setTelefono(6);
    sucu6->setProvincia("Puntarenas");
    sucu6->setCanton("Central");
    sucu6->setCorreoElectronico("suc6@gmail.com");
    g1->insertarSucursal(sucu6);

    Sucursal* sucu7 = new Sucursal();
    sucu7->setCodigo(7);
    sucu7->setTelefono(7);
    sucu7->setProvincia("Limon");
    sucu7->setCanton("Central");
    sucu7->setCorreoElectronico("suc7@gmail.com");
    g1->insertarSucursal(sucu7);

    Sucursal* sucu8 = new Sucursal();
    sucu8->setCodigo(8);
    sucu8->setTelefono(8);
    sucu8->setProvincia("San Jose");
    sucu8->setCanton("Escazu");
    sucu8->setCorreoElectronico("suc8@gmail.com");
    g1->insertarSucursal(sucu8);

    Sucursal* sucu9 = new Sucursal();
    sucu9->setCodigo(9);
    sucu9->setTelefono(9);
    sucu9->setProvincia("Alajuela");
    sucu9->setCanton("San Ramon");
    sucu9->setCorreoElectronico("suc9@gmail.com");
    g1->insertarSucursal(sucu9);

    Sucursal* sucu10 = new Sucursal();
    sucu10->setCodigo(10);
    sucu10->setTelefono(10);
    sucu10->setProvincia("Cartago");
    sucu10->setCanton("Turrialba");
    sucu10->setCorreoElectronico("suc10@gmail.com");
    g1->insertarSucursal(sucu10);

    // 12 instructores ya creados
    Instructor* ins1 = new Instructor();
    ins1->setNombreCoach("Juan Perez");
    ins1->setCedulaCoach("1");
    ins1->setTelefonoCoach("1");
    ins1->setCorreoCoach("ins1@gmail.com");
    Fecha* fnac1 = new Fecha(15, 5, 1985);
    ins1->setFechaNacimientoCoach(fnac1);
    Especialidad* esp1a = new Especialidad();
    esp1a->setNombreEspecialidad(1); // CrossFit
    ins1->insertarEspecialidad(esp1a);
    Especialidad* esp1b = new Especialidad();
    esp1b->setNombreEspecialidad(2); // HIIT
    ins1->insertarEspecialidad(esp1b);
    Especialidad* esp1c = new Especialidad();
    esp1c->setNombreEspecialidad(4); // Pesas
    ins1->insertarEspecialidad(esp1c);
    sucu1->setInstructor(ins1);

    Instructor* ins2 = new Instructor();
    ins2->setNombreCoach("Maria Lopez");
    ins2->setCedulaCoach("12");
    ins2->setTelefonoCoach("12");
    ins2->setCorreoCoach("ins2@gmail.com");
    Fecha* fnac2 = new Fecha(20, 8, 1990);
    ins2->setFechaNacimientoCoach(fnac2);
    Especialidad* esp2a = new Especialidad();
    esp2a->setNombreEspecialidad(7); // Yoga
    ins2->insertarEspecialidad(esp2a);
    Especialidad* esp2b = new Especialidad();
    esp2b->setNombreEspecialidad(8); // Zumba
    ins2->insertarEspecialidad(esp2b);
    sucu1->setInstructor(ins2);

    Instructor* ins3 = new Instructor();
    ins3->setNombreCoach("Carlos Gomez");
    ins3->setCedulaCoach("123");
    ins3->setTelefonoCoach("123");
    ins3->setCorreoCoach("ins3@gmail.com");
    Fecha* fnac3 = new Fecha(10, 3, 1980);
    ins3->setFechaNacimientoCoach(fnac3);
    Especialidad* esp3a = new Especialidad();
    esp3a->setNombreEspecialidad(5); // Spinning
    ins3->insertarEspecialidad(esp3a);
    Especialidad* esp3b = new Especialidad();
    esp3b->setNombreEspecialidad(6); // Cardio
    ins3->insertarEspecialidad(esp3b);
    sucu2->setInstructor(ins3);

    Instructor* ins4 = new Instructor();
    ins4->setNombreCoach("Ana Ramirez");
    ins4->setCedulaCoach("1234");
    ins4->setTelefonoCoach("1234");
    ins4->setCorreoCoach("ins4@gmail.com");
    Fecha* fnac4 = new Fecha(5, 12, 1992);
    ins4->setFechaNacimientoCoach(fnac4);
    Especialidad* esp4a = new Especialidad();
    esp4a->setNombreEspecialidad(3); // TRX
    ins4->insertarEspecialidad(esp4a);
    Especialidad* esp4b = new Especialidad();
    esp4b->setNombreEspecialidad(4); // Pesas
    ins4->insertarEspecialidad(esp4b);
    sucu2->setInstructor(ins4);

    Instructor* ins5 = new Instructor();
    ins5->setNombreCoach("Luis Fernandez");
    ins5->setCedulaCoach("12345");
    ins5->setTelefonoCoach("12345");
    ins5->setCorreoCoach("ins5@gmail.com");
    Fecha* fnac5 = new Fecha(25, 6, 1988);
    ins5->setFechaNacimientoCoach(fnac5);
    Especialidad* esp5a = new Especialidad();
    esp5a->setNombreEspecialidad(1);
    ins5->insertarEspecialidad(esp5a);
    Especialidad* esp5b = new Especialidad();
    esp5b->setNombreEspecialidad(3);
    ins5->insertarEspecialidad(esp5b);
    sucu3->setInstructor(ins5);

    Instructor* ins6 = new Instructor();
    ins6->setNombreCoach("Sofia Diaz");
    ins6->setCedulaCoach("123456");
    ins6->setTelefonoCoach("123456");
    ins6->setCorreoCoach("ins6@gmail.com");
    Fecha* fnac6 = new Fecha(8, 4, 1995);
    ins6->setFechaNacimientoCoach(fnac6);
    Especialidad* esp6a = new Especialidad();
    esp6a->setNombreEspecialidad(2);
    ins6->insertarEspecialidad(esp6a);
    Especialidad* esp6b = new Especialidad();
    esp6b->setNombreEspecialidad(7);
    ins6->insertarEspecialidad(esp6b);
    sucu3->setInstructor(ins6);

    Instructor* ins7 = new Instructor();
    ins7->setNombreCoach("Pedro Martinez");
    ins7->setCedulaCoach("1234567");
    ins7->setTelefonoCoach("1234567");
    ins7->setCorreoCoach("ins7@gmail.com");
    Fecha* fnac7 = new Fecha(3, 9, 1982);
    ins7->setFechaNacimientoCoach(fnac7);
    Especialidad* esp7a = new Especialidad();
    esp7a->setNombreEspecialidad(4);
    ins7->insertarEspecialidad(esp7a);
    Especialidad* esp7b = new Especialidad();
    esp7b->setNombreEspecialidad(5);
    ins7->insertarEspecialidad(esp7b);
    sucu4->setInstructor(ins7);

    Instructor* ins8 = new Instructor();
    ins8->setNombreCoach("Laura Sanchez");
    ins8->setCedulaCoach("12345678");
    ins8->setTelefonoCoach("12345678");
    ins8->setCorreoCoach("ins8@gmail.com");
    Fecha* fnac8 = new Fecha(18, 2, 1991);
    ins8->setFechaNacimientoCoach(fnac8);
    Especialidad* esp8a = new Especialidad();
    esp8a->setNombreEspecialidad(6);
    ins8->insertarEspecialidad(esp8a);
    Especialidad* esp8b = new Especialidad();
    esp8b->setNombreEspecialidad(8);
    ins8->insertarEspecialidad(esp8b);
    sucu4->setInstructor(ins8);

    Instructor* ins9 = new Instructor();
    ins9->setNombreCoach("Miguel Torres");
    ins9->setCedulaCoach("123456789");
    ins9->setTelefonoCoach("123456789");
    ins9->setCorreoCoach("ins9@gmail.com");
    Fecha* fnac9 = new Fecha(7, 7, 1987);
    ins9->setFechaNacimientoCoach(fnac9);
    Especialidad* esp9a = new Especialidad();
    esp9a->setNombreEspecialidad(1);
    ins9->insertarEspecialidad(esp9a);
    Especialidad* esp9b = new Especialidad();
    esp9b->setNombreEspecialidad(6);
    ins9->insertarEspecialidad(esp9b);
    sucu5->setInstructor(ins9);

    Instructor* ins10 = new Instructor();
    ins10->setNombreCoach("Elena Vargas");
    ins10->setCedulaCoach("1234567890");
    ins10->setTelefonoCoach("1234567890");
    ins10->setCorreoCoach("ins10@gmail.com");
    Fecha* fnac10 = new Fecha(22, 11, 1993);
    ins10->setFechaNacimientoCoach(fnac10);
    Especialidad* esp10a = new Especialidad();
    esp10a->setNombreEspecialidad(3);
    ins10->insertarEspecialidad(esp10a);
    Especialidad* esp10b = new Especialidad();
    esp10b->setNombreEspecialidad(7);
    ins10->insertarEspecialidad(esp10b);
    sucu5->setInstructor(ins10);

    Instructor* ins11 = new Instructor();
    ins11->setNombreCoach("Roberto Ruiz");
    ins11->setCedulaCoach("11");
    ins11->setTelefonoCoach("11");
    ins11->setCorreoCoach("ins11@gmail.com");
    Fecha* fnac11 = new Fecha(14, 1, 1984);
    ins11->setFechaNacimientoCoach(fnac11);
    Especialidad* esp11a = new Especialidad();
    esp11a->setNombreEspecialidad(2);
    ins11->insertarEspecialidad(esp11a);
    Especialidad* esp11b = new Especialidad();
    esp11b->setNombreEspecialidad(5);
    ins11->insertarEspecialidad(esp11b);
    sucu6->setInstructor(ins11);

    Instructor* ins12 = new Instructor();
    ins12->setNombreCoach("Gabriela Castro");
    ins12->setCedulaCoach("112");
    ins12->setTelefonoCoach("112");
    ins12->setCorreoCoach("ins12@gmail.com");
    Fecha* fnac12 = new Fecha(9, 10, 1989);
    ins12->setFechaNacimientoCoach(fnac12);
    Especialidad* esp12a = new Especialidad();
    esp12a->setNombreEspecialidad(4);
    ins12->insertarEspecialidad(esp12a);
    Especialidad* esp12b = new Especialidad();
    esp12b->setNombreEspecialidad(8);
    ins12->insertarEspecialidad(esp12b);
    sucu6->setInstructor(ins12);

    // 10 rutinas ya creadas
    Rutina* rut1 = new Rutina();
    rut1->insertarEjercicio(ej1);
    rut1->insertarEjercicio(ej2);
    rut1->insertarEjercicio(ej3);
    rut1->insertarEjercicio(ej4);
    rut1->insertarEjercicio(ej5);

    Rutina* rut2 = new Rutina();
    rut2->insertarEjercicio(ej6);
    rut2->insertarEjercicio(ej7);
    rut2->insertarEjercicio(ej8);
    rut2->insertarEjercicio(ej9);
    rut2->insertarEjercicio(ej10);

    Rutina* rut3 = new Rutina();
    rut3->insertarEjercicio(ej1);
    rut3->insertarEjercicio(ej3);
    rut3->insertarEjercicio(ej5);
    rut3->insertarEjercicio(ej7);
    rut3->insertarEjercicio(ej9);

    Rutina* rut4 = new Rutina();
    rut4->insertarEjercicio(ej2);
    rut4->insertarEjercicio(ej4);
    rut4->insertarEjercicio(ej6);
    rut4->insertarEjercicio(ej8);
    rut4->insertarEjercicio(ej10);

    Rutina* rut5 = new Rutina();
    rut5->insertarEjercicio(ej1);
    rut5->insertarEjercicio(ej2);
    rut5->insertarEjercicio(ej3);
    rut5->insertarEjercicio(ej4);
    rut5->insertarEjercicio(ej5);

    Rutina* rut6 = new Rutina();
    rut6->insertarEjercicio(ej6);
    rut6->insertarEjercicio(ej7);
    rut6->insertarEjercicio(ej8);
    rut6->insertarEjercicio(ej9);
    rut6->insertarEjercicio(ej10);

    Rutina* rut7 = new Rutina();
    rut7->insertarEjercicio(ej1);
    rut7->insertarEjercicio(ej3);
    rut7->insertarEjercicio(ej5);
    rut7->insertarEjercicio(ej7);
    rut7->insertarEjercicio(ej9);

    Rutina* rut8 = new Rutina();
    rut8->insertarEjercicio(ej2);
    rut8->insertarEjercicio(ej4);
    rut8->insertarEjercicio(ej6);
    rut8->insertarEjercicio(ej8);
    rut8->insertarEjercicio(ej10);

    Rutina* rut9 = new Rutina();
    rut9->insertarEjercicio(ej1);
    rut9->insertarEjercicio(ej2);
    rut9->insertarEjercicio(ej3);
    rut9->insertarEjercicio(ej4);
    rut9->insertarEjercicio(ej5);

    Rutina* rut10 = new Rutina();
    rut10->insertarEjercicio(ej6);
    rut10->insertarEjercicio(ej7);
    rut10->insertarEjercicio(ej8);
    rut10->insertarEjercicio(ej9);
    rut10->insertarEjercicio(ej10);

    // 20 mediciones ya creadas (variando para different IMC)
    Medicion* med1 = new Medicion();
    med1->setPeso(50.0);
    med1->setAltura(1.60);
    med1->setPorcenGrasa(15.0);
    med1->setPorcenMusculo(40.0);
    med1->setPorcenGrasaVisceral(5.0);
    med1->setEdadMetabolica(25.0);
    med1->setEjercita("si");
    med1->setGeneroPaciente('M');
    Fecha* fmed1 = new Fecha(1, 1, 2025);
    med1->setFechaMedicion(fmed1);
    MedidasCorporales* mcorp1 = new MedidasCorporales(70.0, 90.0, 80.0, 50.0);
    med1->setMedidas(mcorp1);

    Medicion* med2 = new Medicion();
    med2->setPeso(60.0);
    med2->setAltura(1.65);
    med2->setPorcenGrasa(18.0);
    med2->setPorcenMusculo(42.0);
    med2->setPorcenGrasaVisceral(6.0);
    med2->setEdadMetabolica(28.0);
    med2->setEjercita("no");
    med2->setGeneroPaciente('H');
    Fecha* fmed2 = new Fecha(15, 1, 2025);
    med2->setFechaMedicion(fmed2);
    MedidasCorporales* mcorp2 = new MedidasCorporales(75.0, 95.0, 85.0, 55.0);
    med2->setMedidas(mcorp2);

    Medicion* med3 = new Medicion();
    med3->setPeso(45.0);
    med3->setAltura(1.55);
    med3->setPorcenGrasa(12.0);
    med3->setPorcenMusculo(38.0);
    med3->setPorcenGrasaVisceral(4.0);
    med3->setEdadMetabolica(22.0);
    med3->setEjercita("si");
    med3->setGeneroPaciente('M');
    Fecha* fmed3 = new Fecha(1, 2, 2025);
    med3->setFechaMedicion(fmed3);
    MedidasCorporales* mcorp3 = new MedidasCorporales(65.0, 85.0, 75.0, 45.0);
    med3->setMedidas(mcorp3);

    Medicion* med4 = new Medicion();
    med4->setPeso(70.0);
    med4->setAltura(1.70);
    med4->setPorcenGrasa(20.0);
    med4->setPorcenMusculo(45.0);
    med4->setPorcenGrasaVisceral(7.0);
    med4->setEdadMetabolica(30.0);
    med4->setEjercita("si");
    med4->setGeneroPaciente('H');
    Fecha* fmed4 = new Fecha(1, 3, 2025);
    med4->setFechaMedicion(fmed4);
    MedidasCorporales* mcorp4 = new MedidasCorporales(80.0, 100.0, 90.0, 60.0);
    med4->setMedidas(mcorp4);

    Medicion* med5 = new Medicion();
    med5->setPeso(80.0);
    med5->setAltura(1.75);
    med5->setPorcenGrasa(25.0);
    med5->setPorcenMusculo(50.0);
    med5->setPorcenGrasaVisceral(8.0);
    med5->setEdadMetabolica(35.0);
    med5->setEjercita("no");
    med5->setGeneroPaciente('M');
    Fecha* fmed5 = new Fecha(1, 4, 2025);
    med5->setFechaMedicion(fmed5);
    MedidasCorporales* mcorp5 = new MedidasCorporales(85.0, 105.0, 95.0, 65.0);
    med5->setMedidas(mcorp5);

    Medicion* med6 = new Medicion();
    med6->setPeso(90.0);
    med6->setAltura(1.80);
    med6->setPorcenGrasa(30.0);
    med6->setPorcenMusculo(55.0);
    med6->setPorcenGrasaVisceral(9.0);
    med6->setEdadMetabolica(40.0);
    med6->setEjercita("si");
    med6->setGeneroPaciente('H');
    Fecha* fmed6 = new Fecha(1, 5, 2025);
    med6->setFechaMedicion(fmed6);
    MedidasCorporales* mcorp6 = new MedidasCorporales(90.0, 110.0, 100.0, 70.0);
    med6->setMedidas(mcorp6);

    Medicion* med7 = new Medicion();
    med7->setPeso(100.0);
    med7->setAltura(1.85);
    med7->setPorcenGrasa(35.0);
    med7->setPorcenMusculo(60.0);
    med7->setPorcenGrasaVisceral(10.0);
    med7->setEdadMetabolica(45.0);
    med7->setEjercita("no");
    med7->setGeneroPaciente('M');
    Fecha* fmed7 = new Fecha(1, 6, 2025);
    med7->setFechaMedicion(fmed7);
    MedidasCorporales* mcorp7 = new MedidasCorporales(95.0, 115.0, 105.0, 75.0);
    med7->setMedidas(mcorp7);

    Medicion* med8 = new Medicion();
    med8->setPeso(40.0);
    med8->setAltura(1.50);
    med8->setPorcenGrasa(10.0);
    med8->setPorcenMusculo(35.0);
    med8->setPorcenGrasaVisceral(3.0);
    med8->setEdadMetabolica(20.0);
    med8->setEjercita("si");
    med8->setGeneroPaciente('H');
    Fecha* fmed8 = new Fecha(1, 7, 2025);
    med8->setFechaMedicion(fmed8);
    MedidasCorporales* mcorp8 = new MedidasCorporales(60.0, 80.0, 70.0, 40.0);
    med8->setMedidas(mcorp8);

    Medicion* med9 = new Medicion();
    med9->setPeso(55.0);
    med9->setAltura(1.62);
    med9->setPorcenGrasa(16.0);
    med9->setPorcenMusculo(41.0);
    med9->setPorcenGrasaVisceral(5.5);
    med9->setEdadMetabolica(26.0);
    med9->setEjercita("no");
    med9->setGeneroPaciente('M');
    Fecha* fmed9 = new Fecha(1, 8, 2025);
    med9->setFechaMedicion(fmed9);
    MedidasCorporales* mcorp9 = new MedidasCorporales(72.0, 92.0, 82.0, 52.0);
    med9->setMedidas(mcorp9);

    Medicion* med10 = new Medicion();
    med10->setPeso(65.0);
    med10->setAltura(1.68);
    med10->setPorcenGrasa(19.0);
    med10->setPorcenMusculo(43.0);
    med10->setPorcenGrasaVisceral(6.5);
    med10->setEdadMetabolica(29.0);
    med10->setEjercita("si");
    med10->setGeneroPaciente('H');
    Fecha* fmed10 = new Fecha(1, 9, 2025);
    med10->setFechaMedicion(fmed10);
    MedidasCorporales* mcorp10 = new MedidasCorporales(77.0, 97.0, 87.0, 57.0);
    med10->setMedidas(mcorp10);

    Medicion* med11 = new Medicion();
    med11->setPeso(75.0);
    med11->setAltura(1.72);
    med11->setPorcenGrasa(22.0);
    med11->setPorcenMusculo(46.0);
    med11->setPorcenGrasaVisceral(7.5);
    med11->setEdadMetabolica(32.0);
    med11->setEjercita("no");
    med11->setGeneroPaciente('M');
    Fecha* fmed11 = new Fecha(1, 10, 2025);
    med11->setFechaMedicion(fmed11);
    MedidasCorporales* mcorp11 = new MedidasCorporales(82.0, 102.0, 92.0, 62.0);
    med11->setMedidas(mcorp11);

    Medicion* med12 = new Medicion();
    med12->setPeso(85.0);
    med12->setAltura(1.78);
    med12->setPorcenGrasa(27.0);
    med12->setPorcenMusculo(51.0);
    med12->setPorcenGrasaVisceral(8.5);
    med12->setEdadMetabolica(37.0);
    med12->setEjercita("si");
    med12->setGeneroPaciente('H');
    Fecha* fmed12 = new Fecha(1, 11, 2025);
    med12->setFechaMedicion(fmed12);
    MedidasCorporales* mcorp12 = new MedidasCorporales(87.0, 107.0, 97.0, 67.0);
    med12->setMedidas(mcorp12);

    Medicion* med13 = new Medicion();
    med13->setPeso(95.0);
    med13->setAltura(1.82);
    med13->setPorcenGrasa(32.0);
    med13->setPorcenMusculo(56.0);
    med13->setPorcenGrasaVisceral(9.5);
    med13->setEdadMetabolica(42.0);
    med13->setEjercita("no");
    med13->setGeneroPaciente('M');
    Fecha* fmed13 = new Fecha(1, 12, 2025);
    med13->setFechaMedicion(fmed13);
    MedidasCorporales* mcorp13 = new MedidasCorporales(92.0, 112.0, 102.0, 72.0);
    med13->setMedidas(mcorp13);

    Medicion* med14 = new Medicion();
    med14->setPeso(105.0);
    med14->setAltura(1.88);
    med14->setPorcenGrasa(37.0);
    med14->setPorcenMusculo(61.0);
    med14->setPorcenGrasaVisceral(10.5);
    med14->setEdadMetabolica(47.0);
    med14->setEjercita("si");
    med14->setGeneroPaciente('H');
    Fecha* fmed14 = new Fecha(15, 1, 2025);
    med14->setFechaMedicion(fmed14);
    MedidasCorporales* mcorp14 = new MedidasCorporales(97.0, 117.0, 107.0, 77.0);
    med14->setMedidas(mcorp14);

    Medicion* med15 = new Medicion();
    med15->setPeso(35.0);
    med15->setAltura(1.45);
    med15->setPorcenGrasa(8.0);
    med15->setPorcenMusculo(33.0);
    med15->setPorcenGrasaVisceral(2.0);
    med15->setEdadMetabolica(18.0);
    med15->setEjercita("no");
    med15->setGeneroPaciente('M');
    Fecha* fmed15 = new Fecha(15, 2, 2025);
    med15->setFechaMedicion(fmed15);
    MedidasCorporales* mcorp15 = new MedidasCorporales(55.0, 75.0, 65.0, 35.0);
    med15->setMedidas(mcorp15);

    Medicion* med16 = new Medicion();
    med16->setPeso(110.0);
    med16->setAltura(1.90);
    med16->setPorcenGrasa(40.0);
    med16->setPorcenMusculo(65.0);
    med16->setPorcenGrasaVisceral(11.0);
    med16->setEdadMetabolica(50.0);
    med16->setEjercita("si");
    med16->setGeneroPaciente('H');
    Fecha* fmed16 = new Fecha(15, 3, 2025);
    med16->setFechaMedicion(fmed16);
    MedidasCorporales* mcorp16 = new MedidasCorporales(100.0, 120.0, 110.0, 80.0);
    med16->setMedidas(mcorp16);

    Medicion* med17 = new Medicion();
    med17->setPeso(48.0);
    med17->setAltura(1.58);
    med17->setPorcenGrasa(14.0);
    med17->setPorcenMusculo(39.0);
    med17->setPorcenGrasaVisceral(4.5);
    med17->setEdadMetabolica(24.0);
    med17->setEjercita("no");
    med17->setGeneroPaciente('M');
    Fecha* fmed17 = new Fecha(15, 4, 2025);
    med17->setFechaMedicion(fmed17);
    MedidasCorporales* mcorp17 = new MedidasCorporales(68.0, 88.0, 78.0, 48.0);
    med17->setMedidas(mcorp17);

    Medicion* med18 = new Medicion();
    med18->setPeso(62.0);
    med18->setAltura(1.67);
    med18->setPorcenGrasa(19.0);
    med18->setPorcenMusculo(44.0);
    med18->setPorcenGrasaVisceral(6.5);
    med18->setEdadMetabolica(30.0);
    med18->setEjercita("si");
    med18->setGeneroPaciente('H');
    Fecha* fmed18 = new Fecha(15, 5, 2025);
    med18->setFechaMedicion(fmed18);
    MedidasCorporales* mcorp18 = new MedidasCorporales(78.0, 98.0, 88.0, 58.0);
    med18->setMedidas(mcorp18);

    Medicion* med19 = new Medicion();
    med19->setPeso(72.0);
    med19->setAltura(1.71);
    med19->setPorcenGrasa(21.0);
    med19->setPorcenMusculo(47.0);
    med19->setPorcenGrasaVisceral(7.5);
    med19->setEdadMetabolica(33.0);
    med19->setEjercita("no");
    med19->setGeneroPaciente('M');
    Fecha* fmed19 = new Fecha(15, 6, 2025);
    med19->setFechaMedicion(fmed19);
    MedidasCorporales* mcorp19 = new MedidasCorporales(83.0, 103.0, 93.0, 63.0);
    med19->setMedidas(mcorp19);

    Medicion* med20 = new Medicion();
    med20->setPeso(82.0);
    med20->setAltura(1.77);
    med20->setPorcenGrasa(26.0);
    med20->setPorcenMusculo(52.0);
    med20->setPorcenGrasaVisceral(8.5);
    med20->setEdadMetabolica(38.0);
    med20->setEjercita("si");
    med20->setGeneroPaciente('H');
    Fecha* fmed20 = new Fecha(15, 7, 2025);
    med20->setFechaMedicion(fmed20);
    MedidasCorporales* mcorp20 = new MedidasCorporales(88.0, 108.0, 98.0, 68.0);
    med20->setMedidas(mcorp20);

    // 15 clases grupales ya creadas
    ClaseGrupal* cg1 = new ClaseGrupal();
    cg1->setNombreClaseGrupal("CrossFit Basico");
    cg1->setCodigoClaseGrupal("1");
    cg1->setSalon("1");
    cg1->setCapacidad(20);
    Especialidad* tipo1 = new Especialidad();
    tipo1->setNombreEspecialidad(1);
    cg1->setTipo(tipo1);
    cg1->setCoachClase(ins1);
    Horario* hor1 = new Horario("Lunes", "08", "00");
    cg1->setHorario(hor1);
    sucu1->setClaseGrupal(cg1);

    ClaseGrupal* cg2 = new ClaseGrupal();
    cg2->setNombreClaseGrupal("HIIT Intenso");
    cg2->setCodigoClaseGrupal("2");
    cg2->setSalon("2");
    cg2->setCapacidad(15);
    Especialidad* tipo2 = new Especialidad();
    tipo2->setNombreEspecialidad(2);
    cg2->setTipo(tipo2);
    cg2->setCoachClase(ins1);
    Horario* hor2 = new Horario("Martes", "09", "30");
    cg2->setHorario(hor2);
    sucu1->setClaseGrupal(cg2);

    ClaseGrupal* cg3 = new ClaseGrupal();
    cg3->setNombreClaseGrupal("TRX Avanzado");
    cg3->setCodigoClaseGrupal("3");
    cg3->setSalon("3");
    cg3->setCapacidad(10);
    Especialidad* tipo3 = new Especialidad();
    tipo3->setNombreEspecialidad(3);
    cg3->setTipo(tipo3);
    cg3->setCoachClase(ins4);
    Horario* hor3 = new Horario("Miercoles", "10", "00");
    cg3->setHorario(hor3);
    sucu2->setClaseGrupal(cg3);

    ClaseGrupal* cg4 = new ClaseGrupal();
    cg4->setNombreClaseGrupal("Pesas Basico");
    cg4->setCodigoClaseGrupal("4");
    cg4->setSalon("4");
    cg4->setCapacidad(25);
    Especialidad* tipo4 = new Especialidad();
    tipo4->setNombreEspecialidad(4);
    cg4->setTipo(tipo4);
    cg4->setCoachClase(ins4);
    Horario* hor4 = new Horario("Jueves", "11", "30");
    cg4->setHorario(hor4);
    sucu2->setClaseGrupal(cg4);

    ClaseGrupal* cg5 = new ClaseGrupal();
    cg5->setNombreClaseGrupal("Spinning Intenso");
    cg5->setCodigoClaseGrupal("5");
    cg5->setSalon("5");
    cg5->setCapacidad(20);
    Especialidad* tipo5 = new Especialidad();
    tipo5->setNombreEspecialidad(5);
    cg5->setTipo(tipo5);
    cg5->setCoachClase(ins3);
    Horario* hor5 = new Horario("Viernes", "08", "00");
    cg5->setHorario(hor5);
    sucu2->setClaseGrupal(cg5);

    ClaseGrupal* cg6 = new ClaseGrupal();
    cg6->setNombreClaseGrupal("Cardio Basico");
    cg6->setCodigoClaseGrupal("6");
    cg6->setSalon("6");
    cg6->setCapacidad(15);
    Especialidad* tipo6 = new Especialidad();
    tipo6->setNombreEspecialidad(6);
    cg6->setTipo(tipo6);
    cg6->setCoachClase(ins3);
    Horario* hor6 = new Horario("Lunes", "09", "30");
    cg6->setHorario(hor6);
    sucu2->setClaseGrupal(cg6);

    ClaseGrupal* cg7 = new ClaseGrupal();
    cg7->setNombreClaseGrupal("Yoga Relajante");
    cg7->setCodigoClaseGrupal("7");
    cg7->setSalon("7");
    cg7->setCapacidad(10);
    Especialidad* tipo7 = new Especialidad();
    tipo7->setNombreEspecialidad(7);
    cg7->setTipo(tipo7);
    cg7->setCoachClase(ins2);
    Horario* hor7 = new Horario("Martes", "10", "00");
    cg7->setHorario(hor7);
    sucu1->setClaseGrupal(cg7);

    ClaseGrupal* cg8 = new ClaseGrupal();
    cg8->setNombreClaseGrupal("Zumba Energética");
    cg8->setCodigoClaseGrupal("8");
    cg8->setSalon("8");
    cg8->setCapacidad(25);
    Especialidad* tipo8 = new Especialidad();
    tipo8->setNombreEspecialidad(8);
    cg8->setTipo(tipo8);
    cg8->setCoachClase(ins2);
    Horario* hor8 = new Horario("Miercoles", "11", "30");
    cg8->setHorario(hor8);
    sucu1->setClaseGrupal(cg8);

    ClaseGrupal* cg9 = new ClaseGrupal();
    cg9->setNombreClaseGrupal("CrossFit Avanzado");
    cg9->setCodigoClaseGrupal("9");
    cg9->setSalon("9");
    cg9->setCapacidad(20);
    Especialidad* tipo9 = new Especialidad();
    tipo9->setNombreEspecialidad(1);
    cg9->setTipo(tipo9);
    cg9->setCoachClase(ins5);
    Horario* hor9 = new Horario("Jueves", "08", "00");
    cg9->setHorario(hor9);
    sucu3->setClaseGrupal(cg9);

    ClaseGrupal* cg10 = new ClaseGrupal();
    cg10->setNombreClaseGrupal("HIIT Basico");
    cg10->setCodigoClaseGrupal("10");
    cg10->setSalon("10");
    cg10->setCapacidad(15);
    Especialidad* tipo10 = new Especialidad();
    tipo10->setNombreEspecialidad(2);
    cg10->setTipo(tipo10);
    cg10->setCoachClase(ins6);
    Horario* hor10 = new Horario("Viernes", "09", "30");
    cg10->setHorario(hor10);
    sucu3->setClaseGrupal(cg10);

    ClaseGrupal* cg11 = new ClaseGrupal();
    cg11->setNombreClaseGrupal("TRX Basico");
    cg11->setCodigoClaseGrupal("11");
    cg11->setSalon("11");
    cg11->setCapacidad(10);
    Especialidad* tipo11 = new Especialidad();
    tipo11->setNombreEspecialidad(3);
    cg11->setTipo(tipo11);
    cg11->setCoachClase(ins5);
    Horario* hor11 = new Horario("Lunes", "10", "00");
    cg11->setHorario(hor11);
    sucu3->setClaseGrupal(cg11);

    ClaseGrupal* cg12 = new ClaseGrupal();
    cg12->setNombreClaseGrupal("Pesas Avanzado");
    cg12->setCodigoClaseGrupal("12");
    cg12->setSalon("12");
    cg12->setCapacidad(25);
    Especialidad* tipo12 = new Especialidad();
    tipo12->setNombreEspecialidad(4);
    cg12->setTipo(tipo12);
    cg12->setCoachClase(ins7);
    Horario* hor12 = new Horario("Martes", "11", "30");
    cg12->setHorario(hor12);
    sucu4->setClaseGrupal(cg12);

    ClaseGrupal* cg13 = new ClaseGrupal();
    cg13->setNombreClaseGrupal("Spinning Avanzado");
    cg13->setCodigoClaseGrupal("13");
    cg13->setSalon("13");
    cg13->setCapacidad(20);
    Especialidad* tipo13 = new Especialidad();
    tipo13->setNombreEspecialidad(5);
    cg13->setTipo(tipo13);
    cg13->setCoachClase(ins11);
    Horario* hor13 = new Horario("Miercoles", "08", "00");
    cg13->setHorario(hor13);
    sucu6->setClaseGrupal(cg13);

    ClaseGrupal* cg14 = new ClaseGrupal();
    cg14->setNombreClaseGrupal("Cardio Avanzado");
    cg14->setCodigoClaseGrupal("14");
    cg14->setSalon("14");
    cg14->setCapacidad(15);
    Especialidad* tipo14 = new Especialidad();
    tipo14->setNombreEspecialidad(6);
    cg14->setTipo(tipo14);
    cg14->setCoachClase(ins9);
    Horario* hor14 = new Horario("Jueves", "09", "30");
    cg14->setHorario(hor14);
    sucu5->setClaseGrupal(cg14);

    ClaseGrupal* cg15 = new ClaseGrupal();
    cg15->setNombreClaseGrupal("Yoga Avanzado");
    cg15->setCodigoClaseGrupal("15");
    cg15->setSalon("15");
    cg15->setCapacidad(10);
    Especialidad* tipo15 = new Especialidad();
    tipo15->setNombreEspecialidad(7);
    cg15->setTipo(tipo15);
    cg15->setCoachClase(ins10);
    Horario* hor15 = new Horario("Viernes", "10", "00");
    cg15->setHorario(hor15);
    sucu5->setClaseGrupal(cg15);

    // 20 Clientes ya creados
    Cliente* clien1 = new Cliente();
    clien1->setNombreCliente("Ana Torres");
    clien1->setCedulaCliente("1");
    clien1->setTelefonoCliente("1");
    clien1->setCorreoCliente("clien1@gmail.com");
    clien1->setGeneroCliente('M');
    Fecha* fnacCli1 = new Fecha(12, 10, 1995);
    clien1->setFechaNacimientoCliente(fnacCli1);
    Fecha* finsc1 = new Fecha(1, 1, 2025);
    clien1->setFechaInscripcionCliente(finsc1);
    clien1->setCoach(ins1);
    clien1->insertarMedicion(med1);
    clien1->insertarMedicion(med2);
    clien1->insertarMedicion(med3);
    clien1->setRutina(rut1);
    sucu1->setCliente(clien1);
    cg1->insertarCliente(clien1);
    cg2->insertarCliente(clien1);
    cg3->insertarCliente(clien1); // Max 3

    Cliente* clien2 = new Cliente();
    clien2->setNombreCliente("Pedro Ramirez");
    clien2->setCedulaCliente("2");
    clien2->setTelefonoCliente("2");
    clien2->setCorreoCliente("clien2@gmail.com");
    clien2->setGeneroCliente('H');
    Fecha* fnacCli2 = new Fecha(5, 6, 2000);
    clien2->setFechaNacimientoCliente(fnacCli2);
    Fecha* finsc2 = new Fecha(5, 1, 2025);
    clien2->setFechaInscripcionCliente(finsc2);
    clien2->setCoach(ins2);
    clien2->insertarMedicion(med4);
    clien2->insertarMedicion(med5);
    clien2->insertarMedicion(med6);
    clien2->insertarMedicion(med7);
    clien2->setRutina(rut2);
    sucu1->setCliente(clien2);
    cg1->insertarCliente(clien2);
    cg2->insertarCliente(clien2);

    Cliente* clien3 = new Cliente();
    clien3->setNombreCliente("Laura Mendoza");
    clien3->setCedulaCliente("3");
    clien3->setTelefonoCliente("3");
    clien3->setCorreoCliente("clien3@gmail.com");
    clien3->setGeneroCliente('M');
    Fecha* fnacCli3 = new Fecha(25, 12, 1992);
    clien3->setFechaNacimientoCliente(fnacCli3);
    Fecha* finsc3 = new Fecha(10, 1, 2025);
    clien3->setFechaInscripcionCliente(finsc3);
    clien3->setCoach(ins3);
    clien3->insertarMedicion(med8);
    clien3->insertarMedicion(med9);
    clien3->insertarMedicion(med10);
    clien3->setRutina(rut3);
    sucu2->setCliente(clien3);
    cg3->insertarCliente(clien3);
    cg4->insertarCliente(clien3);
    cg5->insertarCliente(clien3);

    Cliente* clien4 = new Cliente();
    clien4->setNombreCliente("Carlos Lopez");
    clien4->setCedulaCliente("4");
    clien4->setTelefonoCliente("4");
    clien4->setCorreoCliente("clien4@gmail.com");
    clien4->setGeneroCliente('H');
    Fecha* fnacCli4 = new Fecha(3, 3, 1990);
    clien4->setFechaNacimientoCliente(fnacCli4);
    Fecha* finsc4 = new Fecha(15, 2, 2025);
    clien4->setFechaInscripcionCliente(finsc4);
    clien4->setCoach(ins4);
    clien4->insertarMedicion(med11);
    clien4->insertarMedicion(med12);
    clien4->setRutina(rut4);
    sucu2->setCliente(clien4);
    cg3->insertarCliente(clien4);

    Cliente* clien5 = new Cliente();
    clien5->setNombreCliente("Sofia Gomez");
    clien5->setCedulaCliente("5");
    clien5->setTelefonoCliente("5");
    clien5->setCorreoCliente("clien5@gmail.com");
    clien5->setGeneroCliente('M');
    Fecha* fnacCli5 = new Fecha(8, 8, 1998);
    clien5->setFechaNacimientoCliente(fnacCli5);
    Fecha* finsc5 = new Fecha(20, 3, 2025);
    clien5->setFechaInscripcionCliente(finsc5);
    clien5->setCoach(ins5);
    clien5->insertarMedicion(med13);
    clien5->insertarMedicion(med14);
    clien5->insertarMedicion(med15);
    clien5->setRutina(rut5);
    sucu3->setCliente(clien5);
    cg6->insertarCliente(clien5);
    cg7->insertarCliente(clien5);

    Cliente* clien6 = new Cliente();
    clien6->setNombreCliente("Luis Fernandez");
    clien6->setCedulaCliente("6");
    clien6->setTelefonoCliente("6");
    clien6->setCorreoCliente("clien6@gmail.com");
    clien6->setGeneroCliente('H');
    Fecha* fnacCli6 = new Fecha(1, 4, 1985);
    clien6->setFechaNacimientoCliente(fnacCli6);
    Fecha* finsc6 = new Fecha(25, 4, 2025);
    clien6->setFechaInscripcionCliente(finsc6);
    clien6->setCoach(ins6);
    clien6->insertarMedicion(med16);
    clien6->insertarMedicion(med17);
    clien6->insertarMedicion(med18);
    clien6->insertarMedicion(med19);
    clien6->setRutina(rut6);
    sucu3->setCliente(clien6);
    cg8->insertarCliente(clien6);
    cg9->insertarCliente(clien6);
    cg10->insertarCliente(clien6);

    Cliente* clien7 = new Cliente();
    clien7->setNombreCliente("Maria Diaz");
    clien7->setCedulaCliente("7");
    clien7->setTelefonoCliente("7");
    clien7->setCorreoCliente("clien7@gmail.com");
    clien7->setGeneroCliente('M');
    Fecha* fnacCli7 = new Fecha(14, 5, 1993);
    clien7->setFechaNacimientoCliente(fnacCli7);
    Fecha* finsc7 = new Fecha(1, 5, 2025);
    clien7->setFechaInscripcionCliente(finsc7);
    clien7->setCoach(ins7);
    clien7->insertarMedicion(med1);
    clien7->insertarMedicion(med2);
    clien7->setRutina(rut7);
    sucu4->setCliente(clien7);
    cg11->insertarCliente(clien7);

    Cliente* clien8 = new Cliente();
    clien8->setNombreCliente("Juan Martinez");
    clien8->setCedulaCliente("8");
    clien8->setTelefonoCliente("8");
    clien8->setCorreoCliente("clien8@gmail.com");
    clien8->setGeneroCliente('H');
    Fecha* fnacCli8 = new Fecha(20, 6, 1991);
    clien8->setFechaNacimientoCliente(fnacCli8);
    Fecha* finsc8 = new Fecha(5, 6, 2025);
    clien8->setFechaInscripcionCliente(finsc8);
    clien8->setCoach(ins8);
    clien8->insertarMedicion(med3);
    clien8->insertarMedicion(med4);
    clien8->insertarMedicion(med5);
    clien8->setRutina(rut8);
    sucu4->setCliente(clien8);
    cg12->insertarCliente(clien8);
    cg13->insertarCliente(clien8);

    Cliente* clien9 = new Cliente();
    clien9->setNombreCliente("Elena Sanchez");
    clien9->setCedulaCliente("9");
    clien9->setTelefonoCliente("9");
    clien9->setCorreoCliente("clien9@gmail.com");
    clien9->setGeneroCliente('M');
    Fecha* fnacCli9 = new Fecha(2, 7, 1989);
    clien9->setFechaNacimientoCliente(fnacCli9);
    Fecha* finsc9 = new Fecha(10, 7, 2025);
    clien9->setFechaInscripcionCliente(finsc9);
    clien9->setCoach(ins9);
    clien9->insertarMedicion(med6);
    clien9->insertarMedicion(med7);
    clien9->insertarMedicion(med8);
    clien9->insertarMedicion(med9);
    clien9->setRutina(rut9);
    sucu5->setCliente(clien9);
    cg14->insertarCliente(clien9);
    cg15->insertarCliente(clien9);

    Cliente* clien10 = new Cliente();
    clien10->setNombreCliente("Miguel Torres");
    clien10->setCedulaCliente("10");
    clien10->setTelefonoCliente("10");
    clien10->setCorreoCliente("clien10@gmail.com");
    clien10->setGeneroCliente('H');
    Fecha* fnacCli10 = new Fecha(8, 8, 1987);
    clien10->setFechaNacimientoCliente(fnacCli10);
    Fecha* finsc10 = new Fecha(15, 8, 2025);
    clien10->setFechaInscripcionCliente(finsc10);
    clien10->setCoach(ins10);
    clien10->insertarMedicion(med10);
    clien10->insertarMedicion(med11);
    clien10->setRutina(rut10);
    sucu5->setCliente(clien10);
    cg14->insertarCliente(clien10);

    Cliente* clien11 = new Cliente();
    clien11->setNombreCliente("Gabriela Ruiz");
    clien11->setCedulaCliente("11");
    clien11->setTelefonoCliente("11");
    clien11->setCorreoCliente("clien11@gmail.com");
    clien11->setGeneroCliente('M');
    Fecha* fnacCli11 = new Fecha(3, 9, 1994);
    clien11->setFechaNacimientoCliente(fnacCli11);
    Fecha* finsc11 = new Fecha(1, 9, 2025);
    clien11->setFechaInscripcionCliente(finsc11);
    clien11->setCoach(ins11);
    clien11->insertarMedicion(med12);
    clien11->insertarMedicion(med13);
    clien11->insertarMedicion(med14);
    clien11->setRutina(rut1);
    sucu6->setCliente(clien11);
    cg13->insertarCliente(clien11);
    cg12->insertarCliente(clien11);

    Cliente* clien12 = new Cliente();
    clien12->setNombreCliente("Roberto Castro");
    clien12->setCedulaCliente("12");
    clien12->setTelefonoCliente("12");
    clien12->setCorreoCliente("clien12@gmail.com");
    clien12->setGeneroCliente('H');
    Fecha* fnacCli12 = new Fecha(9, 10, 1992);
    clien12->setFechaNacimientoCliente(fnacCli12);
    Fecha* finsc12 = new Fecha(5, 10, 2025);
    clien12->setFechaInscripcionCliente(finsc12);
    clien12->setCoach(ins12);
    clien12->insertarMedicion(med15);
    clien12->insertarMedicion(med16);
    clien12->insertarMedicion(med17);
    clien12->insertarMedicion(med18);
    clien12->setRutina(rut2);
    sucu6->setCliente(clien12);
    cg11->insertarCliente(clien12);

    Cliente* clien13 = new Cliente();
    clien13->setNombreCliente("Clara Gomez");
    clien13->setCedulaCliente("13");
    clien13->setTelefonoCliente("13");
    clien13->setCorreoCliente("clien13@gmail.com");
    clien13->setGeneroCliente('M');
    Fecha* fnacCli13 = new Fecha(4, 11, 1990);
    clien13->setFechaNacimientoCliente(fnacCli13);
    Fecha* finsc13 = new Fecha(10, 11, 2025);
    clien13->setFechaInscripcionCliente(finsc13);
    clien13->setCoach(ins1);
    clien13->insertarMedicion(med19);
    clien13->insertarMedicion(med20);
    clien13->setRutina(rut3);
    sucu1->setCliente(clien13);
    cg1->insertarCliente(clien13);
    cg2->insertarCliente(clien13);
    cg3->insertarCliente(clien13);

    Cliente* clien14 = new Cliente();
    clien14->setNombreCliente("David Lopez");
    clien14->setCedulaCliente("14");
    clien14->setTelefonoCliente("14");
    clien14->setCorreoCliente("clien14@gmail.com");
    clien14->setGeneroCliente('H');
    Fecha* fnacCli14 = new Fecha(10, 12, 1988);
    clien14->setFechaNacimientoCliente(fnacCli14);
    Fecha* finsc14 = new Fecha(15, 12, 2025);
    clien14->setFechaInscripcionCliente(finsc14);
    clien14->setCoach(ins2);
    clien14->insertarMedicion(med1);
    clien14->insertarMedicion(med2);
    clien14->setRutina(rut4);
    sucu1->setCliente(clien14);
    cg4->insertarCliente(clien14);

    Cliente* clien15 = new Cliente();
    clien15->setNombreCliente("Eva Fernandez");
    clien15->setCedulaCliente("15");
    clien15->setTelefonoCliente("15");
    clien15->setCorreoCliente("clien15@gmail.com");
    clien15->setGeneroCliente('M');
    Fecha* fnacCli15 = new Fecha(5, 1, 1996);
    clien15->setFechaNacimientoCliente(fnacCli15);
    Fecha* finsc15 = new Fecha(1, 1, 2025);
    clien15->setFechaInscripcionCliente(finsc15);
    clien15->setCoach(ins3);
    clien15->insertarMedicion(med3);
    clien15->insertarMedicion(med4);
    clien15->insertarMedicion(med5);
    clien15->setRutina(rut5);
    sucu2->setCliente(clien15);
    cg5->insertarCliente(clien15);
    cg6->insertarCliente(clien15);

    Cliente* clien16 = new Cliente();
    clien16->setNombreCliente("Francisco Diaz");
    clien16->setCedulaCliente("16");
    clien16->setTelefonoCliente("16");
    clien16->setCorreoCliente("clien16@gmail.com");
    clien16->setGeneroCliente('H');
    Fecha* fnacCli16 = new Fecha(11, 2, 1994);
    clien16->setFechaNacimientoCliente(fnacCli16);
    Fecha* finsc16 = new Fecha(5, 2, 2025);
    clien16->setFechaInscripcionCliente(finsc16);
    clien16->setCoach(ins4);
    clien16->insertarMedicion(med6);
    clien16->insertarMedicion(med7);
    clien16->insertarMedicion(med8);
    clien16->insertarMedicion(med9);
    clien16->setRutina(rut6);
    sucu2->setCliente(clien16);
    cg7->insertarCliente(clien16);
    cg8->insertarCliente(clien16);
    cg9->insertarCliente(clien16);

    Cliente* clien17 = new Cliente();
    clien17->setNombreCliente("Gabriela Martinez");
    clien17->setCedulaCliente("17");
    clien17->setTelefonoCliente("17");
    clien17->setCorreoCliente("clien17@gmail.com");
    clien17->setGeneroCliente('M');
    Fecha* fnacCli17 = new Fecha(6, 3, 1992);
    clien17->setFechaNacimientoCliente(fnacCli17);
    Fecha* finsc17 = new Fecha(10, 3, 2025);
    clien17->setFechaInscripcionCliente(finsc17);
    clien17->setCoach(ins5);
    clien17->insertarMedicion(med10);
    clien17->insertarMedicion(med11);
    clien17->setRutina(rut7);
    sucu3->setCliente(clien17);
    cg10->insertarCliente(clien17);

    Cliente* clien18 = new Cliente();
    clien18->setNombreCliente("Hector Sanchez");
    clien18->setCedulaCliente("18");
    clien18->setTelefonoCliente("18");
    clien18->setCorreoCliente("clien18@gmail.com");
    clien18->setGeneroCliente('H');
    Fecha* fnacCli18 = new Fecha(12, 4, 1990);
    clien18->setFechaNacimientoCliente(fnacCli18);
    Fecha* finsc18 = new Fecha(15, 4, 2025);
    clien18->setFechaInscripcionCliente(finsc18);
    clien18->setCoach(ins6);
    clien18->insertarMedicion(med12);
    clien18->insertarMedicion(med13);
    clien18->insertarMedicion(med14);
    clien18->setRutina(rut8);
    sucu3->setCliente(clien18);
    cg11->insertarCliente(clien18);
    cg12->insertarCliente(clien18);

    Cliente* clien19 = new Cliente();
    clien19->setNombreCliente("Isabel Torres");
    clien19->setCedulaCliente("19");
    clien19->setTelefonoCliente("19");
    clien19->setCorreoCliente("clien19@gmail.com");
    clien19->setGeneroCliente('M');
    Fecha* fnacCli19 = new Fecha(7, 5, 1988);
    clien19->setFechaNacimientoCliente(fnacCli19);
    Fecha* finsc19 = new Fecha(1, 5, 2025);
    clien19->setFechaInscripcionCliente(finsc19);
    clien19->setCoach(ins7);
    clien19->insertarMedicion(med15);
    clien19->insertarMedicion(med16);
    clien19->insertarMedicion(med17);
    clien19->insertarMedicion(med18);
    clien19->setRutina(rut9);
    sucu4->setCliente(clien19);
    cg13->insertarCliente(clien19);
    cg14->insertarCliente(clien19);
    cg15->insertarCliente(clien19);

    Cliente* clien20 = new Cliente();
    clien20->setNombreCliente("Jorge Vargas");
    clien20->setCedulaCliente("20");
    clien20->setTelefonoCliente("20");
    clien20->setCorreoCliente("clien20@gmail.com");
    clien20->setGeneroCliente('H');
    Fecha* fnacCli20 = new Fecha(13, 6, 1986);
    clien20->setFechaNacimientoCliente(fnacCli20);
    Fecha* finsc20 = new Fecha(5, 6, 2025);
    clien20->setFechaInscripcionCliente(finsc20);
    clien20->setCoach(ins8);
    clien20->insertarMedicion(med19);
    clien20->insertarMedicion(med20);
    clien20->setRutina(rut10);
    sucu4->setCliente(clien20);
    cg1->insertarCliente(clien20);

    Menu* m1 = new Menu(g1);
    m1->obtenerMenu();

    // Deletes para liberar memoria (en orden inverso)
    delete clien20;
    delete clien19;
    delete clien18;
    delete clien17;
    delete clien16;
    delete clien15;
    delete clien14;
    delete clien13;
    delete clien12;
    delete clien11;
    delete clien10;
    delete clien9;
    delete clien8;
    delete clien7;
    delete clien6;
    delete clien5;
    delete clien4;
    delete clien3;
    delete clien2;
    delete clien1;

    delete cg15;
    delete cg14;
    delete cg13;
    delete cg12;
    delete cg11;
    delete cg10;
    delete cg9;
    delete cg8;
    delete cg7;
    delete cg6;
    delete cg5;
    delete cg4;
    delete cg3;
    delete cg2;
    delete cg1;

    delete med20;
    delete med19;
    delete med18;
    delete med17;
    delete med16;
    delete med15;
    delete med14;
    delete med13;
    delete med12;
    delete med11;
    delete med10;
    delete med9;
    delete med8;
    delete med7;
    delete med6;
    delete med5;
    delete med4;
    delete med3;
    delete med2;
    delete med1;

    delete rut10;
    delete rut9;
    delete rut8;
    delete rut7;
    delete rut6;
    delete rut5;
    delete rut4;
    delete rut3;
    delete rut2;
    delete rut1;

    delete ins12;
    delete ins11;
    delete ins10;
    delete ins9;
    delete ins8;
    delete ins7;
    delete ins6;
    delete ins5;
    delete ins4;
    delete ins3;
    delete ins2;
    delete ins1;

    delete sucu10;
    delete sucu9;
    delete sucu8;
    delete sucu7;
    delete sucu6;
    delete sucu5;
    delete sucu4;
    delete sucu3;
    delete sucu2;
    delete sucu1;

    delete bateria;  // Libera la bateria y sus ejercicios internos si ~BateriaEjercicios lo hace

    delete m1;  // Esto delete gym y cadena

    return 0;
}