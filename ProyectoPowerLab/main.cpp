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

    // Bateria de ejercicios
    BateriaEjercicios* bateria = new BateriaEjercicios();
    Ejercicio* ej1 = new Ejercicio();
    ej1->setNombreEjercicio("Press Banca");
    ej1->setRepeticionesEjercicio(10);
    ej1->setSeriesEjercicio(4);
    ej1->setMusculo(1); 
    bateria->insertarEjercicio(ej1);

    Ejercicio* ej2 = new Ejercicio();
    ej2->setNombreEjercicio("Fondos Triceps");
    ej2->setRepeticionesEjercicio(12);
    ej2->setSeriesEjercicio(3);
    ej2->setMusculo(2); 
    bateria->insertarEjercicio(ej2);

    Ejercicio* ej3 = new Ejercicio();
    ej3->setNombreEjercicio("Curl Bicep");
    ej3->setRepeticionesEjercicio(15);
    ej3->setSeriesEjercicio(3);
    ej3->setMusculo(3);
    bateria->insertarEjercicio(ej3);

    Ejercicio* ej4 = new Ejercicio();
    ej4->setNombreEjercicio("Sentadillas");
    ej4->setRepeticionesEjercicio(8);
    ej4->setSeriesEjercicio(5);
    ej4->setMusculo(4); 
    bateria->insertarEjercicio(ej4);

    Ejercicio* ej5 = new Ejercicio();
    ej5->setNombreEjercicio("Dominadas");
    ej5->setRepeticionesEjercicio(10);
    ej5->setSeriesEjercicio(4);
    ej5->setMusculo(5); 
    bateria->insertarEjercicio(ej5);

    Ejercicio* ej6 = new Ejercicio();
    ej6->setNombreEjercicio("Press Inclinado");
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
    sucu1->setCodigo(1111);
    sucu1->setTelefono(11112222);
    sucu1->setProvincia("San Jose");
    sucu1->setCanton("San Pedro");
    sucu1->setCorreoElectronico("PorwerLabSanPedro@gmail.com");
    g1->insertarSucursal(sucu1);

    Sucursal* sucu2 = new Sucursal();
    sucu2->setCodigo(1112);
    sucu2->setTelefono(22223333);
    sucu2->setProvincia("Alajuela");
    sucu2->setCanton("Grecia");
    sucu2->setCorreoElectronico("PorwerLabGrecia@gmail.com");
    g1->insertarSucursal(sucu2);

    Sucursal* sucu3 = new Sucursal();
    sucu3->setCodigo(1113);
    sucu3->setTelefono(33334444);
    sucu3->setProvincia("Cartago");
    sucu3->setCanton("Paraiso");
    sucu3->setCorreoElectronico("PorwerLabParaiso@gmail.com");
    g1->insertarSucursal(sucu3);

    Sucursal* sucu4 = new Sucursal();
    sucu4->setCodigo(11114);
    sucu4->setTelefono(44445555);
    sucu4->setProvincia("Heredia");
    sucu4->setCanton("Heredia");
    sucu4->setCorreoElectronico("PorwerLabHeredia@gmail.com");
    g1->insertarSucursal(sucu4);

    Sucursal* sucu5 = new Sucursal();
    sucu5->setCodigo(1115);
    sucu5->setTelefono(55556666);
    sucu5->setProvincia("Guanacaste");
    sucu5->setCanton("Liberia");
    sucu5->setCorreoElectronico("PorwerLabLiberia@gmail.com");
    g1->insertarSucursal(sucu5);

    Sucursal* sucu6 = new Sucursal();
    sucu6->setCodigo(1116);
    sucu6->setTelefono(66667777);
    sucu6->setProvincia("Puntarenas");
    sucu6->setCanton("Esparza");
    sucu6->setCorreoElectronico("PorwerLabEsparza@gmail.com");
    g1->insertarSucursal(sucu6);

    Sucursal* sucu7 = new Sucursal();
    sucu7->setCodigo(1117);
    sucu7->setTelefono(77778888);
    sucu7->setProvincia("Limon");
    sucu7->setCanton("Matina");
    sucu7->setCorreoElectronico("PorwerLabMatina@gmail.com");
    g1->insertarSucursal(sucu7);

    Sucursal* sucu8 = new Sucursal();
    sucu8->setCodigo(1118);
    sucu8->setTelefono(88889999);
    sucu8->setProvincia("San Jose");
    sucu8->setCanton("Escazu");
    sucu8->setCorreoElectronico("PorwerLabEscazu@gmail.com");
    g1->insertarSucursal(sucu8);

    Sucursal* sucu9 = new Sucursal();
    sucu9->setCodigo(1119);
    sucu9->setTelefono(99990000);
    sucu9->setProvincia("Alajuela");
    sucu9->setCanton("San Ramon");
    sucu9->setCorreoElectronico("PorwerLabSanRamon@gmail.com");
    g1->insertarSucursal(sucu9);

    Sucursal* sucu10 = new Sucursal();
    sucu10->setCodigo(1121);
    sucu10->setTelefono(00001111);
    sucu10->setProvincia("Cartago");
    sucu10->setCanton("Turrialba");
    sucu10->setCorreoElectronico("PorwerLabTurrialba@gmail.com");
    g1->insertarSucursal(sucu10);

    // 12 instructores ya creados
    Instructor* ins1 = new Instructor();
    ins1->setNombreCoach("Diego Jimenez");
    ins1->setCedulaCoach("11111111");
    ins1->setTelefonoCoach("12121212");
    ins1->setCorreoCoach("diego@gmail.com");
    Fecha* fechanacimiento1 = new Fecha(10, 1, 2007);
    ins1->setFechaNacimientoCoach(fechanacimiento1);
    Especialidad* esp11 = new Especialidad();
    esp11->setNombreEspecialidad(1); 
    ins1->insertarEspecialidad(esp11);
    Especialidad* esp12 = new Especialidad();
    esp12->setNombreEspecialidad(2); 
    ins1->insertarEspecialidad(esp12);
    Especialidad* esp13 = new Especialidad();
    esp13->setNombreEspecialidad(3); 
    ins1->insertarEspecialidad(esp13);
    sucu1->setInstructor(ins1);

    Instructor* ins2 = new Instructor();
    ins2->setNombreCoach("Pablo Hernandez");
    ins2->setCedulaCoach("22222222");
    ins2->setTelefonoCoach("13131313");
    ins2->setCorreoCoach("pablo@gmail.com");
    Fecha* fechanacimiento2 = new Fecha(20, 8, 1995);
    ins2->setFechaNacimientoCoach(fechanacimiento2);
    Especialidad* esp21 = new Especialidad();
    esp21->setNombreEspecialidad(3); 
    ins2->insertarEspecialidad(esp21);
    Especialidad* esp22 = new Especialidad();
    esp22->setNombreEspecialidad(4);
    ins2->insertarEspecialidad(esp22);
    sucu2->setInstructor(ins2);

    Instructor* ins3 = new Instructor();
    ins3->setNombreCoach("Pedro");
    ins3->setCedulaCoach("33333333");
    ins3->setTelefonoCoach("14141414");
    ins3->setCorreoCoach("pedro@gmail.com");
    Fecha* fechanacimiento3 = new Fecha(10, 3, 2000);
    ins3->setFechaNacimientoCoach(fechanacimiento3);
    Especialidad* esp31 = new Especialidad();
    esp31->setNombreEspecialidad(5); 
    ins3->insertarEspecialidad(esp31);
    Especialidad* esp32 = new Especialidad();
    esp32->setNombreEspecialidad(6); 
    ins3->insertarEspecialidad(esp32);
    sucu3->setInstructor(ins3);

    Instructor* ins4 = new Instructor();
    ins4->setNombreCoach("Ana");
    ins4->setCedulaCoach("44444444");
    ins4->setTelefonoCoach("15151515");
    ins4->setCorreoCoach("ana@gmail.com");
    Fecha* fechanacimiento4 = new Fecha(10, 12, 2001);
    ins4->setFechaNacimientoCoach(fechanacimiento4);
    Especialidad* esp41 = new Especialidad();
    esp41->setNombreEspecialidad(7); 
    ins4->insertarEspecialidad(esp41);
    Especialidad* esp42 = new Especialidad();
    esp42->setNombreEspecialidad(8); 
    ins4->insertarEspecialidad(esp42);
    sucu4->setInstructor(ins4);

    Instructor* ins5 = new Instructor();
    ins5->setNombreCoach("Luis");
    ins5->setCedulaCoach("55555555");
    ins5->setTelefonoCoach("16161616");
    ins5->setCorreoCoach("luis@gmail.com");
    Fecha* fechanacimiento5 = new Fecha(2, 5, 2000);
    ins5->setFechaNacimientoCoach(fechanacimiento5);
    Especialidad* esp51 = new Especialidad();
    esp51->setNombreEspecialidad(1);
    ins5->insertarEspecialidad(esp51);
    Especialidad* esp52 = new Especialidad();
    esp52->setNombreEspecialidad(2);
    ins5->insertarEspecialidad(esp52);
    sucu5->setInstructor(ins5);

    Instructor* ins6 = new Instructor();
    ins6->setNombreCoach("Maria");
    ins6->setCedulaCoach("66666666");
    ins6->setTelefonoCoach("17171717");
    ins6->setCorreoCoach("maria@gmail.com");
    Fecha* fechanacimiento6 = new Fecha(9, 10, 2004);
    ins6->setFechaNacimientoCoach(fechanacimiento6);
    Especialidad* esp6 = new Especialidad();
    esp6->setNombreEspecialidad(3);
    ins6->insertarEspecialidad(esp6);
    Especialidad* esp61 = new Especialidad();
    esp61->setNombreEspecialidad(4);
    ins6->insertarEspecialidad(esp61);
    sucu6->setInstructor(ins6);

    Instructor* ins7 = new Instructor();
    ins7->setNombreCoach("Matias");
    ins7->setCedulaCoach("77777777");
    ins7->setTelefonoCoach("18181818");
    ins7->setCorreoCoach("matias@gmail.com");
    Fecha* fechanacimiento7 = new Fecha(3, 1, 2003);
    ins7->setFechaNacimientoCoach(fechanacimiento7);
    Especialidad* esp71 = new Especialidad();
    esp71->setNombreEspecialidad(5);
    ins7->insertarEspecialidad(esp71);
    Especialidad* esp72 = new Especialidad();
    esp72->setNombreEspecialidad(6);
    ins7->insertarEspecialidad(esp72);
    sucu7->setInstructor(ins7);

    Instructor* ins8 = new Instructor();
    ins8->setNombreCoach("Laura");
    ins8->setCedulaCoach("88888888");
    ins8->setTelefonoCoach("19191919");
    ins8->setCorreoCoach("laura@gmail.com");
    Fecha* fechanacimiento8 = new Fecha(20, 2, 1995);
    ins8->setFechaNacimientoCoach(fechanacimiento8);
    Especialidad* esp81 = new Especialidad();
    esp81->setNombreEspecialidad(7);
    ins8->insertarEspecialidad(esp81);
    Especialidad* esp82 = new Especialidad();
    esp82->setNombreEspecialidad(8);
    ins8->insertarEspecialidad(esp82);
    sucu8->setInstructor(ins8);

    Instructor* ins9 = new Instructor();
    ins9->setNombreCoach("Miguel");
    ins9->setCedulaCoach("999999999");
    ins9->setTelefonoCoach("20202020");
    ins9->setCorreoCoach("miguel@gmail.com");
    Fecha* fechanacimiento9 = new Fecha(7, 7, 2007);
    ins9->setFechaNacimientoCoach(fechanacimiento9);
    Especialidad* esp91 = new Especialidad();
    esp91->setNombreEspecialidad(1);
    ins9->insertarEspecialidad(esp91);
    Especialidad* esp92 = new Especialidad();
    esp92->setNombreEspecialidad(2);
    ins9->insertarEspecialidad(esp92);
    sucu9->setInstructor(ins9);

    Instructor* ins10 = new Instructor();
    ins10->setNombreCoach("Monica");
    ins10->setCedulaCoach("101010101");
    ins10->setTelefonoCoach("21212121");
    ins10->setCorreoCoach("monica@gmail.com");
    Fecha* fechanacimiento10 = new Fecha(22, 12, 2006);
    ins10->setFechaNacimientoCoach(fechanacimiento10);
    Especialidad* esp101 = new Especialidad();
    esp101->setNombreEspecialidad(3);
    ins10->insertarEspecialidad(esp101);
    Especialidad* esp102 = new Especialidad();
    esp102->setNombreEspecialidad(4);
    ins10->insertarEspecialidad(esp102);
    sucu10->setInstructor(ins10);

    Instructor* ins11 = new Instructor();
    ins11->setNombreCoach("Roberto");
    ins11->setCedulaCoach("202020202");
    ins11->setTelefonoCoach("23232323");
    ins11->setCorreoCoach("roberto@gmail.com");
    Fecha* fechanacimiento11 = new Fecha(14, 2, 2000);
    ins11->setFechaNacimientoCoach(fechanacimiento11);
    Especialidad* esp111 = new Especialidad();
    esp111->setNombreEspecialidad(5);
    ins11->insertarEspecialidad(esp111);
    Especialidad* esp112 = new Especialidad();
    esp112->setNombreEspecialidad(6);
    ins11->insertarEspecialidad(esp112);
    sucu1->setInstructor(ins11);

    Instructor* ins12 = new Instructor();
    ins12->setNombreCoach("Alberto");
    ins12->setCedulaCoach("303030303");
    ins12->setTelefonoCoach("24242424");
    ins12->setCorreoCoach("alberto@gmail.com");
    Fecha* fechanacimiento12 = new Fecha(10, 1, 2002);
    ins12->setFechaNacimientoCoach(fechanacimiento12);
    Especialidad* esp121 = new Especialidad();
    esp121->setNombreEspecialidad(7);
    ins12->insertarEspecialidad(esp121);
    Especialidad* esp122 = new Especialidad();
    esp122->setNombreEspecialidad(8);
    ins12->insertarEspecialidad(esp122);
    sucu2->setInstructor(ins12);

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

    // 12 mediciones ya creadas 
    Medicion* med1 = new Medicion();
    med1->setPeso(50.0);
    med1->setAltura(1.60);
    med1->setPorcenGrasa(15.0);
    med1->setPorcenMusculo(40.0);
    med1->setPorcenGrasaVisceral(5.0);
    med1->setEdadMetabolica(25.0);
    med1->setEjercita("si");
    med1->setGeneroPaciente('H');
    Fecha* fechamedicion1 = new Fecha(20, 8, 2025);
    med1->setFechaMedicion(fechamedicion1);
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
    Fecha* fechamedicion2 = new Fecha(3, 2, 2025);
    med2->setFechaMedicion(fechamedicion2);
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
    Fecha* fechamedicion3 = new Fecha(1, 10, 2025);
    med3->setFechaMedicion(fechamedicion3);
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
    Fecha* fechamedicion4 = new Fecha(15, 9, 2025);
    med4->setFechaMedicion(fechamedicion4);
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
    Fecha* fechamedicion5 = new Fecha(2, 8, 2025);
    med5->setFechaMedicion(fechamedicion5);
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
    Fecha* fechamedicion6 = new Fecha(16, 7, 2025);
    med6->setFechaMedicion(fechamedicion6);
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
    med7->setGeneroPaciente('H');
    Fecha* fechamedicion7 = new Fecha(19, 9, 2025);
    med7->setFechaMedicion(fechamedicion7);
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
    Fecha* fechamedicion8 = new Fecha(22, 6, 2025);
    med8->setFechaMedicion(fechamedicion8);
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
    Fecha* fechamedicion9 = new Fecha(30, 4, 2025);
    med9->setFechaMedicion(fechamedicion9);
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
    Fecha* fechamedicion10 = new Fecha(23, 5, 2025);
    med10->setFechaMedicion(fechamedicion10);
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
    Fecha* fechamedicion11 = new Fecha(12, 8, 2025);
    med11->setFechaMedicion(fechamedicion11);
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
    Fecha* fechamedicion12 = new Fecha(27, 9, 2025);
    med12->setFechaMedicion(fechamedicion12);
    MedidasCorporales* mcorp12 = new MedidasCorporales(87.0, 107.0, 97.0, 67.0);
    med12->setMedidas(mcorp12);

    // 12 clases grupales ya creadas
    ClaseGrupal* cg1 = new ClaseGrupal();
    cg1->setNombreClaseGrupal("CrossFit Grupal 1");
    cg1->setCodigoClaseGrupal("11");
    cg1->setSalon("01");
    cg1->setCapacidad(20);
    Especialidad* tipo1 = new Especialidad();
    tipo1->setNombreEspecialidad(1);
    cg1->setTipo(tipo1);
    cg1->setCoachClase(ins1);
    Horario* hor1 = new Horario("Lunes", "08", "00");
    cg1->setHorario(hor1);
    sucu1->setClaseGrupal(cg1);

    ClaseGrupal* cg2 = new ClaseGrupal();
    cg2->setNombreClaseGrupal("HIIT Grupal 1");
    cg2->setCodigoClaseGrupal("22");
    cg2->setSalon("02");
    cg2->setCapacidad(15);
    Especialidad* tipo2 = new Especialidad();
    tipo2->setNombreEspecialidad(2);
    cg2->setTipo(tipo2);
    cg2->setCoachClase(ins1);
    Horario* hor2 = new Horario("Martes", "09", "30");
    cg2->setHorario(hor2);
    sucu1->setClaseGrupal(cg2);

    ClaseGrupal* cg3 = new ClaseGrupal();
    cg3->setNombreClaseGrupal("TRX Grupal 1");
    cg3->setCodigoClaseGrupal("33");
    cg3->setSalon("03");
    cg3->setCapacidad(10);
    Especialidad* tipo3 = new Especialidad();
    tipo3->setNombreEspecialidad(3);
    cg3->setTipo(tipo3);
    cg3->setCoachClase(ins2);
    Horario* hor3 = new Horario("Miercoles", "10", "00");
    cg3->setHorario(hor3);
    sucu2->setClaseGrupal(cg3);

    ClaseGrupal* cg4 = new ClaseGrupal();
    cg4->setNombreClaseGrupal("Pesas Grupal 1");
    cg4->setCodigoClaseGrupal("44");
    cg4->setSalon("01");
    cg4->setCapacidad(25);
    Especialidad* tipo4 = new Especialidad();
    tipo4->setNombreEspecialidad(4);
    cg4->setTipo(tipo4);
    cg4->setCoachClase(ins2);
    Horario* hor4 = new Horario("Jueves", "11", "30");
    cg4->setHorario(hor4);
    sucu2->setClaseGrupal(cg4);

    ClaseGrupal* cg5 = new ClaseGrupal();
    cg5->setNombreClaseGrupal("Spinning Grupal 1");
    cg5->setCodigoClaseGrupal("55");
    cg5->setSalon("02");
    cg5->setCapacidad(20);
    Especialidad* tipo5 = new Especialidad();
    tipo5->setNombreEspecialidad(5);
    cg5->setTipo(tipo5);
    cg5->setCoachClase(ins3);
    Horario* hor5 = new Horario("Viernes", "08", "00");
    cg5->setHorario(hor5);
    sucu3->setClaseGrupal(cg5);

    ClaseGrupal* cg6 = new ClaseGrupal();
    cg6->setNombreClaseGrupal("Cardio Grupal 1");
    cg6->setCodigoClaseGrupal("66");
    cg6->setSalon("03");
    cg6->setCapacidad(15);
    Especialidad* tipo6 = new Especialidad();
    tipo6->setNombreEspecialidad(6);
    cg6->setTipo(tipo6);
    cg6->setCoachClase(ins3);
    Horario* hor6 = new Horario("Lunes", "09", "30");
    cg6->setHorario(hor6);
    sucu3->setClaseGrupal(cg6);

    ClaseGrupal* cg7 = new ClaseGrupal();
    cg7->setNombreClaseGrupal("Yoga Grupal 1");
    cg7->setCodigoClaseGrupal("77");
    cg7->setSalon("01");
    cg7->setCapacidad(10);
    Especialidad* tipo7 = new Especialidad();
    tipo7->setNombreEspecialidad(7);
    cg7->setTipo(tipo7);
    cg7->setCoachClase(ins4);
    Horario* hor7 = new Horario("Martes", "10", "00");
    cg7->setHorario(hor7);
    sucu4->setClaseGrupal(cg7);

    ClaseGrupal* cg8 = new ClaseGrupal();
    cg8->setNombreClaseGrupal("Zumba Grupal 1");
    cg8->setCodigoClaseGrupal("88");
    cg8->setSalon("02");
    cg8->setCapacidad(25);
    Especialidad* tipo8 = new Especialidad();
    tipo8->setNombreEspecialidad(8);
    cg8->setTipo(tipo8);
    cg8->setCoachClase(ins4);
    Horario* hor8 = new Horario("Miercoles", "11", "30");
    cg8->setHorario(hor8);
    sucu4->setClaseGrupal(cg8);

    ClaseGrupal* cg9 = new ClaseGrupal();
    cg9->setNombreClaseGrupal("CrossFit Grupal 2");
    cg9->setCodigoClaseGrupal("99");
    cg9->setSalon("03");
    cg9->setCapacidad(20);
    Especialidad* tipo9 = new Especialidad();
    tipo9->setNombreEspecialidad(1);
    cg9->setTipo(tipo9);
    cg9->setCoachClase(ins5);
    Horario* hor9 = new Horario("Jueves", "08", "00");
    cg9->setHorario(hor9);
    sucu5->setClaseGrupal(cg9);

    ClaseGrupal* cg10 = new ClaseGrupal();
    cg10->setNombreClaseGrupal("HIIT Grupal 2");
    cg10->setCodigoClaseGrupal("10");
    cg10->setSalon("02");
    cg10->setCapacidad(15);
    Especialidad* tipo10 = new Especialidad();
    tipo10->setNombreEspecialidad(2);
    cg10->setTipo(tipo10);
    cg10->setCoachClase(ins5);
    Horario* hor10 = new Horario("Viernes", "09", "30");
    cg10->setHorario(hor10);
    sucu5->setClaseGrupal(cg10);

    ClaseGrupal* cg11 = new ClaseGrupal();
    cg11->setNombreClaseGrupal("TRX Grupal 2");
    cg11->setCodigoClaseGrupal("11");
    cg11->setSalon("01");
    cg11->setCapacidad(10);
    Especialidad* tipo11 = new Especialidad();
    tipo11->setNombreEspecialidad(3);
    cg11->setTipo(tipo11);
    cg11->setCoachClase(ins6);
    Horario* hor11 = new Horario("Lunes", "10", "00");
    cg11->setHorario(hor11);
    sucu6->setClaseGrupal(cg11);

    ClaseGrupal* cg12 = new ClaseGrupal();
    cg12->setNombreClaseGrupal("Pesas Grupal 2");
    cg12->setCodigoClaseGrupal("12");
    cg12->setSalon("02");
    cg12->setCapacidad(25);
    Especialidad* tipo12 = new Especialidad();
    tipo12->setNombreEspecialidad(4);
    cg12->setTipo(tipo12);
    cg12->setCoachClase(ins7);
    Horario* hor12 = new Horario("Martes", "11", "30");
    cg12->setHorario(hor12);
    sucu6->setClaseGrupal(cg12);

    // 20 Clientes ya creados
    Cliente* clien1 = new Cliente();
    clien1->setNombreCliente("Mateo");
    clien1->setCedulaCliente("111112222");
    clien1->setTelefonoCliente("7865246");
    clien1->setCorreoCliente("mateo@gmail.com");
    clien1->setGeneroCliente('H');
    Fecha* fechanacimientoClien1 = new Fecha(12, 10, 2000);
    clien1->setFechaNacimientoCliente(fechanacimientoClien1);
    Fecha* fechainscripcion1 = new Fecha(2, 6, 2025);
    clien1->setFechaInscripcionCliente(fechainscripcion1);
    clien1->setCoach(ins1);
    clien1->insertarMedicion(med1);
    clien1->setRutina(rut1);
    sucu1->setCliente(clien1);
    cg1->insertarCliente(clien1);
    cg2->insertarCliente(clien1);

    Cliente* clien2 = new Cliente();
    clien2->setNombreCliente("Mario");
    clien2->setCedulaCliente("222223333");
    clien2->setTelefonoCliente("87296531");
    clien2->setCorreoCliente("mario@gmail.com");
    clien2->setGeneroCliente('H');
    Fecha* fechanacimientoClien2 = new Fecha(5, 6, 2000);
    clien2->setFechaNacimientoCliente(fechanacimientoClien2);
    Fecha* fechainscripcion2 = new Fecha(15, 1, 2025);
    clien2->setFechaInscripcionCliente(fechainscripcion2);
    clien2->setCoach(ins1);
    clien2->insertarMedicion(med2);
    clien2->setRutina(rut2);
    sucu1->setCliente(clien2);
    cg1->insertarCliente(clien2);
    cg2->insertarCliente(clien2);

    Cliente* clien3 = new Cliente();
    clien3->setNombreCliente("Mirna");
    clien3->setCedulaCliente("333334444");
    clien3->setTelefonoCliente("74836983");
    clien3->setCorreoCliente("mirna@gmail.com");
    clien3->setGeneroCliente('M');
    Fecha* fechanacimientoClien3 = new Fecha(25, 12, 1990);
    clien3->setFechaNacimientoCliente(fechanacimientoClien3);
    Fecha* fechainscripcion3 = new Fecha(16, 9, 2025);
    clien3->setFechaInscripcionCliente(fechainscripcion3);
    clien3->setCoach(ins2);
    clien3->insertarMedicion(med3);
    clien3->buscarMasActual()->calculoIMC();
    clien3->setRutina(rut3);
    sucu2->setCliente(clien3);
    cg3->insertarCliente(clien3);
    cg4->insertarCliente(clien3);

    Cliente* clien4 = new Cliente();
    clien4->setNombreCliente("Carlos");
    clien4->setCedulaCliente("444445555");
    clien4->setTelefonoCliente("84176233");
    clien4->setCorreoCliente("carlos@gmail.com");
    clien4->setGeneroCliente('H');
    Fecha* fechanacimientoClien4 = new Fecha(3, 12, 2008);
    clien4->setFechaNacimientoCliente(fechanacimientoClien4);
    Fecha* fechainscripcion4 = new Fecha(17, 3, 2025);
    clien4->setFechaInscripcionCliente(fechainscripcion4);
    clien4->setCoach(ins2);
    clien4->insertarMedicion(med4);
    clien4->setRutina(rut4);
    sucu2->setCliente(clien4);
    cg3->insertarCliente(clien4);

    Cliente* clien5 = new Cliente();
    clien5->setNombreCliente("Sofia");
    clien5->setCedulaCliente("555556666");
    clien5->setTelefonoCliente("89435276");
    clien5->setCorreoCliente("sofia@gmail.com");
    clien5->setGeneroCliente('M');
    Fecha* fechanacimientoClien5 = new Fecha(8, 8, 1998);
    clien5->setFechaNacimientoCliente(fechanacimientoClien5);
    Fecha* fechainscripcion5 = new Fecha(26, 7, 2025);
    clien5->setFechaInscripcionCliente(fechainscripcion5);
    clien5->setCoach(ins3);
    clien5->insertarMedicion(med5);
    clien5->setRutina(rut5);
    sucu3->setCliente(clien5);
    cg5->insertarCliente(clien5);
    cg6->insertarCliente(clien5);

    Cliente* clien6 = new Cliente();
    clien6->setNombreCliente("Luis");
    clien6->setCedulaCliente("666667777");
    clien6->setTelefonoCliente("28965743");
    clien6->setCorreoCliente("luis@gmail.com");
    clien6->setGeneroCliente('H');
    Fecha* fechanacimientoClien6 = new Fecha(1, 4, 2007);
    clien6->setFechaNacimientoCliente(fechanacimientoClien6);
    Fecha* fechainscripcion6 = new Fecha(25, 5, 2025);
    clien6->setFechaInscripcionCliente(fechainscripcion6);
    clien6->setCoach(ins3);
    clien6->insertarMedicion(med6);
    clien6->setRutina(rut6);
    sucu3->setCliente(clien6);
    cg5->insertarCliente(clien6);

    Cliente* clien7 = new Cliente();
    clien7->setNombreCliente("Pablo");
    clien7->setCedulaCliente("777778888");
    clien7->setTelefonoCliente("32489792");
    clien7->setCorreoCliente("pabloc@gmail.com");
    clien7->setGeneroCliente('H');
    Fecha* fechanacimientoClien7 = new Fecha(14, 5, 2001);
    clien7->setFechaNacimientoCliente(fechanacimientoClien7);
    Fecha* fechainscripcion7 = new Fecha(30, 8, 2025);
    clien7->setFechaInscripcionCliente(fechainscripcion7);
    clien7->setCoach(ins4);
    clien7->insertarMedicion(med7);
    clien7->setRutina(rut7);
    sucu4->setCliente(clien7);
    cg7->insertarCliente(clien7);

    Cliente* clien8 = new Cliente();
    clien8->setNombreCliente("David");
    clien8->setCedulaCliente("888889999");
    clien8->setTelefonoCliente("23968521");
    clien8->setCorreoCliente("david@gmail.com");
    clien8->setGeneroCliente('H');
    Fecha* fechanacimientoClien8 = new Fecha(20, 6, 2002);
    clien8->setFechaNacimientoCliente(fechanacimientoClien8);
    Fecha* fechainscripcion8 = new Fecha(15, 4, 2025);
    clien8->setFechaInscripcionCliente(fechainscripcion8);
    clien8->setCoach(ins4);
    clien8->insertarMedicion(med8);
    clien8->setRutina(rut8);
    sucu4->setCliente(clien8);
    cg8->insertarCliente(clien8);
    cg7->insertarCliente(clien8);

    Cliente* clien9 = new Cliente();
    clien9->setNombreCliente("Elena");
    clien9->setCedulaCliente("999991111");
    clien9->setTelefonoCliente("46932789");
    clien9->setCorreoCliente("elena@gmail.com");
    clien9->setGeneroCliente('M');
    Fecha* fechanacimientoClien9 = new Fecha(2, 7, 1995);
    clien9->setFechaNacimientoCliente(fechanacimientoClien9);
    Fecha* fechainscripcion9 = new Fecha(10, 2, 2025);
    clien9->setFechaInscripcionCliente(fechainscripcion9);
    clien9->setCoach(ins5);
    clien9->insertarMedicion(med9);
    clien9->setRutina(rut9);
    sucu5->setCliente(clien9);
    cg10->insertarCliente(clien9);

    Cliente* clien10 = new Cliente();
    clien10->setNombreCliente("Andrew");
    clien10->setCedulaCliente("122221111");
    clien10->setTelefonoCliente("92836528");
    clien10->setCorreoCliente("andrew@gmail.com");
    clien10->setGeneroCliente('H');
    Fecha* fechanacimientoClien10 = new Fecha(8, 8, 2008);
    clien10->setFechaNacimientoCliente(fechanacimientoClien10);
    Fecha* fechainscripcion10 = new Fecha(15, 2, 2025);
    clien10->setFechaInscripcionCliente(fechainscripcion10);
    clien10->setCoach(ins5);
    clien10->insertarMedicion(med10);
    clien10->setRutina(rut10);
    sucu5->setCliente(clien10);
    cg10->insertarCliente(clien10);
    cg9->insertarCliente(clien10);

    Cliente* clien11 = new Cliente();
    clien11->setNombreCliente("Natalia");
    clien11->setCedulaCliente("133334444");
    clien11->setTelefonoCliente("92837642");
    clien11->setCorreoCliente("natalia@gmail.com");
    clien11->setGeneroCliente('M');
    Fecha* fechanacimientoClien11 = new Fecha(3, 9, 2004);
    clien11->setFechaNacimientoCliente(fechanacimientoClien11);
    Fecha* fechainscripcion11 = new Fecha(18, 5, 2025);
    clien11->setFechaInscripcionCliente(fechainscripcion11);
    clien11->setCoach(ins6);
    clien11->insertarMedicion(med11);
    sucu6->setCliente(clien11);
    cg12->insertarCliente(clien11);

    Cliente* clien12 = new Cliente();
    clien12->setNombreCliente("Jason");
    clien12->setCedulaCliente("144445555");
    clien12->setTelefonoCliente("76842399");
    clien12->setCorreoCliente("jason@gmail.com");
    clien12->setGeneroCliente('H');
    Fecha* fechanacimientoClien12 = new Fecha(9, 10, 1992);
    clien12->setFechaNacimientoCliente(fechanacimientoClien12);
    Fecha* fechainscripcion12 = new Fecha(10, 2, 2025);
    clien12->setFechaInscripcionCliente(fechainscripcion12);
    clien12->setCoach(ins6);
    clien12->insertarMedicion(med12);
    cg11->insertarCliente(clien11);
    cg12->insertarCliente(clien11);
    sucu6->setCliente(clien12);

    Cliente* clien13 = new Cliente();
    clien13->setNombreCliente("Clara");
    clien13->setCedulaCliente("155556666");
    clien13->setTelefonoCliente("23178641");
    clien13->setCorreoCliente("clara@gmail.com");
    clien13->setGeneroCliente('M');
    Fecha* fechanacimientoClien13 = new Fecha(4, 11, 2000);
    clien13->setFechaNacimientoCliente(fechanacimientoClien13);
    Fecha* fechainscripcion13 = new Fecha(10, 9, 2025);
    clien13->setFechaInscripcionCliente(fechainscripcion13);
    clien13->setCoach(ins7);
    sucu7->setCliente(clien13);

    Cliente* clien14 = new Cliente();
    clien14->setNombreCliente("Alonso");
    clien14->setCedulaCliente("166667777");
    clien14->setTelefonoCliente("38947653");
    clien14->setCorreoCliente("alonso@gmail.com");
    clien14->setGeneroCliente('H');
    Fecha* fechanacimientoClien14 = new Fecha(10, 12, 2007);
    clien14->setFechaNacimientoCliente(fechanacimientoClien14);
    Fecha* fechainscripcion14 = new Fecha(15, 4, 2025);
    clien14->setFechaInscripcionCliente(fechainscripcion14);
    clien14->setCoach(ins7);
    sucu7->setCliente(clien14);

    Cliente* clien15 = new Cliente();
    clien15->setNombreCliente("Eva");
    clien15->setCedulaCliente("177778888");
    clien15->setTelefonoCliente("67238964");
    clien15->setCorreoCliente("eva@gmail.com");
    clien15->setGeneroCliente('M');
    Fecha* fechanacimientoClien15 = new Fecha(5, 1, 1996);
    clien15->setFechaNacimientoCliente(fechanacimientoClien15);
    Fecha* fechainscripcion15 = new Fecha(1, 1, 2025);
    clien15->setFechaInscripcionCliente(fechainscripcion15);
    clien15->setCoach(ins8);
    sucu8->setCliente(clien15);

    Cliente* clien16 = new Cliente();
    clien16->setNombreCliente("Francisco");
    clien16->setCedulaCliente("188889999");
    clien16->setTelefonoCliente("13694878");
    clien16->setCorreoCliente("francisco@gmail.com");
    clien16->setGeneroCliente('H');
    Fecha* fechanacimientoClien16 = new Fecha(11, 2, 2002);
    clien16->setFechaNacimientoCliente(fechanacimientoClien16);
    Fecha* fechainscripcion16 = new Fecha(5, 2, 2025);
    clien16->setFechaInscripcionCliente(fechainscripcion16);
    clien16->setCoach(ins8);
    sucu8->setCliente(clien16);

    Cliente* clien17 = new Cliente();
    clien17->setNombreCliente("Victor");
    clien17->setCedulaCliente("199990000");
    clien17->setTelefonoCliente("17239876");
    clien17->setCorreoCliente("victor@gmail.com");
    clien17->setGeneroCliente('M');
    Fecha* fechanacimientoClien17 = new Fecha(6, 3, 2006);
    clien17->setFechaNacimientoCliente(fechanacimientoClien17);
    Fecha* fechainscripcion17 = new Fecha(10, 3, 2025);
    clien17->setFechaInscripcionCliente(fechainscripcion17);
    clien17->setCoach(ins9);
    sucu9->setCliente(clien17);

    Cliente* clien18 = new Cliente();
    clien18->setNombreCliente("Hector");
    clien18->setCedulaCliente("211112222");
    clien18->setTelefonoCliente("62738963");
    clien18->setCorreoCliente("hector@gmail.com");
    clien18->setGeneroCliente('H');
    Fecha* fechanacimientoClien18 = new Fecha(12, 4, 2004);
    clien18->setFechaNacimientoCliente(fechanacimientoClien18);
    Fecha* fechainscripcion18 = new Fecha(15, 4, 2025);
    clien18->setFechaInscripcionCliente(fechainscripcion18);
    clien18->setCoach(ins9);
    sucu9->setCliente(clien18);

    Cliente* clien19 = new Cliente();
    clien19->setNombreCliente("Isabela");
    clien19->setCedulaCliente("222223333");
    clien19->setTelefonoCliente("89632143");
    clien19->setCorreoCliente("isabela@gmail.com");
    clien19->setGeneroCliente('M');
    Fecha* fechanacimientoClien19 = new Fecha(7, 5, 1999);
    clien19->setFechaNacimientoCliente(fechanacimientoClien19);
    Fecha* fechainscripcion19 = new Fecha(1, 5, 2025);
    clien19->setFechaInscripcionCliente(fechainscripcion19);
    clien19->setCoach(ins10);
    sucu10->setCliente(clien19);

    Cliente* clien20 = new Cliente();
    clien20->setNombreCliente("Jorge");
    clien20->setCedulaCliente("233334444");
    clien20->setTelefonoCliente("23985767");
    clien20->setCorreoCliente("jorge@gmail.com");
    clien20->setGeneroCliente('H');
    Fecha* fechanacimientoClien20 = new Fecha(13, 6, 2002);
    clien20->setFechaNacimientoCliente(fechanacimientoClien20);
    Fecha* fechainscripcion20 = new Fecha(5, 6, 2025);
    clien20->setFechaInscripcionCliente(fechainscripcion20);
    clien20->setCoach(ins10);
    sucu10->setCliente(clien20);

    Menu* m1 = new Menu(g1,bateria);
    m1->obtenerMenu();

   

    return 0;
}