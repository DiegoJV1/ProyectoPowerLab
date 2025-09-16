#include "Menu.h"
#include<iostream>
#include"BateriaEjercicios.h"
using namespace std;
Menu::Menu(Gimnasio* aux) {
	gym = aux;
}
Menu::~Menu() {
	delete gym;
}
void Menu::obtenerMenu() {
	int opcion = 1;
	BateriaEjercicios* bateria = new BateriaEjercicios();
	do {
		cout << "--- Menu de Gimnasio ---" << endl;
		cout << "1. Ingresar Sucursal" << endl;
		cout << "2. Ingresar clientes" << endl;
		cout << "3. Ingresar instructores" << endl;
		cout << "4. Lista general de todos los clientes por sucursal especifica" << endl;
		cout << "5. Detalle de un cliente especifico" << endl;
		cout << "6. Lista de clientes por instructor especifico" << endl;
		cout << "7. Lista de instructores por sucursal" << endl;
		cout << "8. Lista de instructores por especialidad" << endl;
		cout << "9. Registro de medicion a un cliente" << endl;
		cout << "10. Busqueda de Cliente y su historial de mediciones" << endl;
		cout << "11. Clasificacion de clientes por IMC en una sucursal. " << endl;
		cout << "12. Ingreso de ejercicios a la bateria de ejercicios." << endl;
		cout << "13. Generacion de rutina a un cliente." << endl;
		cout << "14. Creacion de clases grupales y visualizacion" << endl;
		cout << "15. Matricula de cliente a una clase grupal. " << endl;
		cout << "16. Lista de clases matriculadas por un cliente." << endl;
		cout << "0. Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		system("cls");
		switch (opcion) {
		case 1: {
			int codigo, telefono;
			string provincia, canton, correo;
			Sucursal* nuevaSucursal = new Sucursal();
			cout << "--- Ingresar Sucursal ---" << endl;
			cout << "Ingrese el codigo: ";
			cin >> codigo;
			nuevaSucursal->setCodigo(codigo);

			cout << "Ingrese el telefono: ";
			cin >> telefono;
			nuevaSucursal->setTelefono(telefono);
			cin.ignore();

			cout << "Ingrese la provincia: ";
			getline(cin, provincia);
			nuevaSucursal->setProvincia(provincia);

			cout << "Ingrese el canton: ";
			getline(cin, canton);
			nuevaSucursal->setCanton(canton);

			cout << "Ingrese el correo electronico: ";
			cin >> correo;
			nuevaSucursal->setCorreoElectronico(correo);
			
			gym->insertarSucursal(nuevaSucursal);

			cout << "\nSucursal ingresada exitosamente." << endl;
			system("pause");
			system("cls");
			break;
			
		}
		case 2: {
			int codSucursal;
			string cedulaInstructor, nombreCliente, cedulaCliente, telefonoCliente, correoCliente;
			char generoCliente;

			cout << "--- Ingresar Clientes ---" << endl;
			cout << "Ya debe de existir la sucursal y el instructor." << endl;
			cout << "Digite el código de la sucursal: ";
			cin >> codSucursal;

			Sucursal* sucursal = gym->getSucursal(codSucursal);

			if (sucursal != nullptr) {
				cout << "Digite la cedula del instructor: ";
				cin >> cedulaInstructor;

				Instructor* coach = sucursal->getInstructor(cedulaInstructor);

				if (coach != nullptr) {

					cout << "--- Datos del nuevo cliente ---" << endl;
					cout << "Ingrese el nombre del cliente: ";
					getline(cin, nombreCliente);

					cout << "Ingrese la cedula del cliente: ";
					getline(cin, cedulaCliente);

					cout << "Ingrese el telefono del cliente: ";
					getline(cin, telefonoCliente);

					cout << "Ingrese el correo del cliente: ";
					getline(cin, correoCliente);

					cout << "Ingrese el genero del cliente (H o M): ";
					cin >> generoCliente;

					Cliente* nuevoCliente = new Cliente();
					nuevoCliente->setNombreCliente(nombreCliente);
					nuevoCliente->setCedulaCliente(cedulaCliente);
					nuevoCliente->setTelefonoCliente(telefonoCliente);
					nuevoCliente->setCorreoCliente(correoCliente);
					nuevoCliente->setGeneroCliente(generoCliente);
					nuevoCliente->setCoach(coach);

					sucursal->setCliente(nuevoCliente);
					cout << "\nCliente ingresado exitosamente." << endl;
				}
				else {
					cout << "ERROR: La cedula del instructor no esta en la base de datos." << endl;
				}
			}
			else {
				cout << "ERROR: El codigo de la sucursal no esta en la base de datos." << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 3: {
			int codSucursal;
			string nombreCoach, cedulaCoach, telefonoCoach, correoCoach, especialidadCoach;
			int dia, mes, annio;
			int opcionEspecialidad;


			cout << "--- Ingresar Instructores ---" << endl;
			cout << "Ya debe de existir la sucursal." << endl;
			cout << "Digite el codigo de la sucursal: ";
			cin >> codSucursal;
			cin.ignore();

			Sucursal* sucursal = gym->getSucursal(codSucursal);

			if (sucursal != nullptr) {

				cout << "--- Datos del nuevo instructor ---" << endl;
				cout << "Ingrese el nombre del instructor: ";
				getline(cin, nombreCoach);

				cout << "Ingrese la cedula del instructor: ";
				getline(cin, cedulaCoach);

				cout << "Ingrese el telefono del instructor: ";
				getline(cin, telefonoCoach);

				cout << "Ingrese el correo del instructor: ";
				getline(cin, correoCoach);


				cout << "--- Fecha de Nacimiento ---" << endl;
				cout << "Ingrese el dia: ";
				cin >> dia;
				cout << "Ingrese el mes: ";
				cin >> mes;
				cout << "Ingrese el anio: ";
				cin >> annio;

				Fecha* fechaNacimientoCoach = new Fecha(dia, mes, annio);
				Instructor* instructor = new Instructor();
				// Menú para seleccionar especialidad
				do {
					cout << "\n--- Seleccione una especialidad ---" << endl;
					cout << "1. CrossFit" << endl;
					cout << "2. HIIT" << endl;
					cout << "3. TRX" << endl;
					cout << "4. Pesas" << endl;
					cout << "5. Spinning" << endl;
					cout << "6. Cardio" << endl;
					cout << "7. Yoga" << endl;
					cout << "8. Zumba" << endl;
					cout << "0. Terminar de agregar especialidades" << endl;
					cout << "Seleccione una opcion: ";
					cin >> opcionEspecialidad;
					Especialidad* especialidad = new Especialidad();
					especialidad->setNombreEspecialidad(opcionEspecialidad);
					instructor->insertarEspecialidad(especialidad);

				} while (opcionEspecialidad != 0);

				instructor->setNombreCoach(nombreCoach);
				instructor->setCedulaCoach(cedulaCoach);
				instructor->setTelefonoCoach(telefonoCoach);
				instructor->setCorreoCoach(correoCoach);
				instructor->setFechaNacimientoCoach(fechaNacimientoCoach);

				sucursal->setInstructor(instructor);

				cout << "\nInstructor ingresado exitosamente." << endl;

			}
			else {
				cout << "ERROR: El codigo de la sucursal no esta en la base de datos." << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 4: {
			int codSucursal;

			cout << "--- Lista general de todos los clientes por sucursal especifica ---" << endl;
			cout << "Digite el codigo de la sucursal: ";
			cin >> codSucursal;

			Sucursal* sucursal = gym->getSucursal(codSucursal);

			if (sucursal != nullptr) {
				cout << sucursal->clientesSucursal();
			}
			else {
				cout << "ERROR: El codigo de sucursal no fue encontrado." << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 5: {
			string ced;

			cout << "--- Detalle de un cliente especifico ---" << endl;
			cout << "Ingrese la cedula del cliente: ";
			cin >> ced;

			Cliente* clienteEncontrado = gym->getCliente(ced);

			if (clienteEncontrado != nullptr) {
				cout << "\n--- Cliente Encontrado ---" << endl;
				cout << clienteEncontrado->toString() << endl;

			}
			else {
				cout << "ERROR: Cliente con la cedula " << ced << " no fue encontrado en ninguna sucursal." << endl;
			}
			break;
			system("pause");
			system("cls");
		}
		case 6: {
			string ced;
			cout << "--- Lista de clientes por instructor especifico ---" << endl;
			cout << "Ingrese la cedula del instructor: ";
			cin >> ced;

			cout << gym->clientePorInstructor(ced);
			system("pause");
			system("cls");
			break;
		}
		case 7: {
			int cod;

			cout << "--- Lista de instructores por sucursal ---" << endl;
			cout << "Digite el codigo de la sucursal: ";
			cin >> cod;

			Sucursal* sucursal = gym->getSucursal(cod);

			if (sucursal != nullptr) {
				cout << sucursal->instructoresSucursal();
			}
			else {
				cout << "ERROR: El codigo de sucursal no fue encontrado." << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 8: {
			string espe;
			cout << "--- Lista de instructores por especialidad ---" << endl;
			cout << " CrossFit" << endl;
			cout << " HIIT" << endl;
			cout << " TRX" << endl;
			cout << " Pesas" << endl;
			cout << " Spinning" << endl;
			cout << " Cardio" << endl;
			cout << " Yoga" << endl;
			cout << " Zumba" << endl;
			cout << "Digitela justo como aparece en la pnatalla " << endl;
			cout << "Ingrese la especialidad que desea buscar: ";
			getline(cin, espe);

			cout << gym->listarInstructoresPorEspecialidad(espe);
			system("pause");
			system("cls");
			break;
		}
		case 9: {
			string ced;
			double peso, altura;
			int dia, mes, anio;

			cout << "--- Ingresar un registro de medicion a un cliente ---" << endl;
			cout << "Ingrese la cedula del cliente: ";
			cin >> ced;

			Cliente* clienteEncontrado = gym->getCliente(ced);

			if (clienteEncontrado != nullptr) {
				cout << "\nCliente encontrado: " << clienteEncontrado->getNombreCliente() << endl;

				cout << "--- Ingrese los datos de la medicion ---" << endl;
				cout << "Ingrese el peso (kg): ";
				cin >> peso;
				cout << "Ingrese la altura (m): ";
				cin >> altura;

				cout << "\n--- Fecha de la medicion ---" << endl;
				cout << "Dia: ";
				cin >> dia;
				cout << "Mes: ";
				cin >> mes;
				cout << "Anio: ";
				cin >> anio;

				Medicion* nuevaMedicion = new Medicion(peso, altura, dia, mes, anio);
				clienteEncontrado->insertarMedicion(nuevaMedicion);

				cout << "\nRegistro de medicion ingresado exitosamente." << endl;

			}
			else {
				cout << "ERROR: Cliente con la cedula " << ced << " no encontrado." << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 10: {
			string ced;

			cout << "--- Historial de mediciones de un cliente ---" << endl;
			cout << "Ingrese la cedula del cliente: ";
			cin >> ced;

			Cliente* clienteEncontrado = gym->getCliente(ced);

			if (clienteEncontrado != nullptr) {
				cout << "\nCliente encontrado. Mostrando historial de mediciones..." << endl;

				cout << clienteEncontrado->toString();

			}
			else {
				cout << "ERROR: Cliente con la cedula " << ced << " no encontrado." << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 11: {
			int codSucursal;

			cout << "--- Clasificacion de Clientes Por IMC ---" << endl;
			cout << "Digite el codigo de la sucursal: ";
			cin >> codSucursal;

			Sucursal* sucursal = gym->getSucursal(codSucursal);

			if (sucursal != nullptr) {
				cout << sucursal->clasificacionPorIMC();
			}
			else {
				cout << "ERROR: El codigo de sucursal no fue encontrado." << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 12: {
			cout << "--- Insertar Ejercicio a la Bateria de Ejrcicios ---" << endl;
			int series, reps;
			string nom;
			cout << "Digite el nombre del ejercicio: " << endl;
			getline(cin, nom);
			cin.ignore();
			cout << "Digite las repeticiones del ejercicio: " << endl;
			cin >> reps;
			cout << "Digite las series del ejercicio: " << endl;
			cin >> series;
			Ejercicio* ejer1 = new Ejercicio();
			ejer1->setNombreEjercicio(nom);
			ejer1->setRepeticionesEjercicio(reps);
			ejer1->setSeriesEjercicio(series);
			bateria->insertarEjercicio(ejer1);
			delete ejer1;
			system("pause");
			system("cls");
			break;
		}
		case 13:{
			string nomejer;
			string desicion;
			string desicionEjercicio;
			string ced;
			cout << "--- Creacion de Rutina ---" << endl;
			cout << "Digite la cedula del cliente: " << endl;
			cin >> ced;

			Cliente* clienteEncontrado = gym->getCliente(ced);

			if (clienteEncontrado != nullptr && clienteEncontrado->getRutinaCliente() != nullptr) {
				cout << "\nCliente encontrado. Mostrando la Rutina del Cliente..." << endl;

				cout << clienteEncontrado->getRutinaCliente()->toString() << endl << endl;
				cout << "¿Desea modificar la rutina del cliente? " << endl;
				cin >> desicion;
				if (desicion == "SI" || desicion == "si" || desicion == "Si" || desicion == "sI") {
					Rutina* nuevaRutina = new Rutina();
					GrupoMuscular* gpecho = new GrupoMuscular();
					GrupoMuscular* gtricep = new GrupoMuscular();
					GrupoMuscular* gbicep = new GrupoMuscular();
					GrupoMuscular* gpierna = new GrupoMuscular();
					GrupoMuscular* gespalda = new GrupoMuscular();

					do {
						cout << "Digite el nombre del ejercicio a insertar: " << endl;
						cin >> nomejer;
						if (bateria->buscarEjercicio(nomejer) != nullptr) {
							Ejercicio* ejer2 = bateria->buscarEjercicio(nomejer);
							if (ejer2->getMusculo() == "Pecho") {
								gpecho->insertarEjercicio(ejer2);
							}
							else if (ejer2->getMusculo() == "Tricep") {
								gtricep->insertarEjercicio(ejer2);
							}
							else if (ejer2->getMusculo() == "Bicep") {
								gbicep->insertarEjercicio(ejer2);
							}
							else if (ejer2->getMusculo() == "Pierna") {
								gpierna->insertarEjercicio(ejer2);
							}
							else if (ejer2->getMusculo() == "Espalda") {
								gespalda->insertarEjercicio(ejer2);
							}
						}
						else {
							cout << "ERROR: El ejercicio no fue encontrado en la bateria de ejercicios." << endl;
						}
						cout << "¿Desea insertar otro ejercicio?" << endl;
						cin >> desicionEjercicio;
					} while (desicionEjercicio == "SI" || desicionEjercicio == "si" || desicionEjercicio == "Si" || desicionEjercicio == "sI");
					nuevaRutina->setPecho(gpecho);
					nuevaRutina->setTricep(gtricep);
					nuevaRutina->setBicep(gbicep);
					nuevaRutina->setEspalda(gespalda);
					nuevaRutina->setPierna(gpierna);
					clienteEncontrado->setRutina(nuevaRutina);
					system("pause");
					system("cls");
					cout << "Nueva Rutina del Cliente: " << endl << endl;
					cout << clienteEncontrado->getRutinaCliente()->toString() << endl;

				}
			}
			else if (clienteEncontrado != nullptr && clienteEncontrado->getRutinaCliente() == nullptr) {
				cout << "\nCliente encontrado. Creacion de Rutina..." << endl;
				Rutina* nuevaRutina = new Rutina();
				GrupoMuscular* gpecho = new GrupoMuscular();
				GrupoMuscular* gtricep = new GrupoMuscular();
				GrupoMuscular* gbicep = new GrupoMuscular();
				GrupoMuscular* gpierna = new GrupoMuscular();
				GrupoMuscular* gespalda = new GrupoMuscular();

				do {
					cout << "Digite el nombre del ejercicio a insertar: " << endl;
					cin >> nomejer;
					if (bateria->buscarEjercicio(nomejer) != nullptr) {
						Ejercicio* ejer2 = bateria->buscarEjercicio(nomejer);
						if (ejer2->getMusculo() == "Pecho") {
							gpecho->insertarEjercicio(ejer2);
						}
						else if (ejer2->getMusculo() == "Tricep") {
							gtricep->insertarEjercicio(ejer2);
						}
						else if (ejer2->getMusculo() == "Bicep") {
							gbicep->insertarEjercicio(ejer2);
						}
						else if (ejer2->getMusculo() == "Pierna") {
							gpierna->insertarEjercicio(ejer2);
						}
						else if (ejer2->getMusculo() == "Espalda") {
							gespalda->insertarEjercicio(ejer2);
						}
					}
					else {
						cout << "ERROR: El ejercicio no fue encontrado en la bateria de ejercicios." << endl;
					}
					cout << "¿Desea insertar otro ejercicio?" << endl;
					cin >> desicionEjercicio;
				} while (desicionEjercicio == "SI" || desicionEjercicio == "si" || desicionEjercicio == "Si" || desicionEjercicio == "sI");
				nuevaRutina->setPecho(gpecho);
				nuevaRutina->setTricep(gtricep);
				nuevaRutina->setBicep(gbicep);
				nuevaRutina->setEspalda(gespalda);
				nuevaRutina->setPierna(gpierna);
				clienteEncontrado->setRutina(nuevaRutina);
				system("pause");
				system("cls");
				cout << "Nueva Rutina del Cliente: " << endl << endl;
				cout << clienteEncontrado->getRutinaCliente()->toString() << endl;

			}
			else {
				cout << "ERROR: Cliente con la cedula " << ced << " no encontrado." << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 14:{
			int codSucursal;

			cout << "--- Creacion de Clase Grupal ---" << endl;
			cout << "Digite el codigo de la sucursal: ";
			cin >> codSucursal;

			Sucursal* sucursal = gym->getSucursal(codSucursal);

			if (sucursal != nullptr) {
				string nom, cod, salon, ced, dia;
				int capacidad, opcion, mins, hora;
				Especialidad* tiposeleccionado = new Especialidad();
				Instructor* coach = nullptr;
				Horario* horario = new Horario();
				ClaseGrupal* nuevaClase = new ClaseGrupal();
				cout << "Digite el nombre de clase grupal: " << endl;
				cin >> nom;
				nuevaClase->setNombreClaseGrupal(nom);
				cout << "Digite el codigo de clase grupal: " << endl;
				cin >> cod;
				nuevaClase->setCodigoClaseGrupal(cod);
				cout << "Digite el salon de clase grupal: " << endl;
				cin >> salon;
				nuevaClase->setSalon(salon);
				cout << "Digite la capacidad de clase grupal: " << endl;
				cin >> capacidad;
				nuevaClase->setCapacidad(capacidad);
				do {
					cout << "Digite el numero del tipo de clase grupal: " << endl;
					cout << "1. CrossFit" << endl;
					cout << "2. HIIT" << endl;
					cout << "3. TRX" << endl;
					cout << "4. Pesas" << endl;
					cout << "5. Spinning" << endl;
					cout << "6. Cardio" << endl;
					cout << "7. Yoga" << endl;
					cout << "8. Zumba" << endl;
					cout << "Seleccione una opcion: ";
					cin >> opcion;
					if (opcion > 8 || opcion < 1) {
						cout << "ERROR-Tipo digitado no encontrado" << endl;
					}
					else {
						tiposeleccionado->setNombreEspecialidad(opcion);
						nuevaClase->setTipo(tiposeleccionado);
					}
				} while (opcion > 8 || opcion < 1);
				do {
					cout << "Digite el numero de cedula del instructor de clase grupal: " << endl;
					cin >> ced;
					if (sucursal->getInstructor(ced) == nullptr || sucursal->getInstructor(ced)->buscarEspecialidadCoach(tiposeleccionado->getNombreEspecialidad()) == false) {
						cout << "ERROR-Entrenador no encontrado o no posee la especialidad para dar la clase." << endl;
					}
					else {
						coach = sucursal->getInstructor(ced);
						nuevaClase->setCoachClase(coach);
					}
				} while (sucursal->getInstructor(ced) == nullptr || sucursal->getInstructor(ced)->buscarEspecialidadCoach(tiposeleccionado->getNombreEspecialidad()) == false);
				cout << "Digite el dia de la clase grupal: " << endl;
				cin >> dia;
				cout << "Digite la hora de la clase grupal: " << endl;
				cin >> hora;
				cout << "Digite los minutos de la clase grupal: " << endl;
				cin >> mins;
				horario->setDia(dia);
				horario->setHora(hora);
				horario->setMinutos(mins);
				sucursal->setClaseGrupal(nuevaClase);
				system("cls");
				cout << "Clase Grupal Creada: " << endl;
				cout << nuevaClase->toString() << endl << endl;
				system("pause");
				system("cls");
				cout << "Datos de las clases grupales registradas en la sucursal: " << endl;
				cout << sucursal->clasesSucursal();
			}
			else {
				cout << "ERROR: El codigo de sucursal no fue encontrado." << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 15:{
			string codClase;
			int codSucursal;
			string ced;

			cout << "--- Matricula de Clientes a Clases Grupales ---" << endl;
			cout << "Ingrese la cedula del cliente: ";
			cin >> ced;

			Cliente* clienteEncontrado = gym->getCliente(ced);

			if (clienteEncontrado != nullptr) {
				cout << "\nCliente encontrado." << endl;
				cout << "Digite el codigo de la sucursal: ";
				cin >> codSucursal;

				Sucursal* sucursal = gym->getSucursal(codSucursal);

				if (sucursal != nullptr) {
					cout << "Digite el codigo de la clase grupal: ";
					cin >> codClase;
					if (sucursal->getClaseGrupal(codClase) != nullptr){
						sucursal->getClaseGrupal(codClase)->insertarCliente(clienteEncontrado);
						cout << "Cliente registrado!" << endl;
						cout << "Lista de verificacion de clientes registrados: " << endl;
						cout << sucursal->getClaseGrupal(codClase)->toString() << endl << endl;
					}
					else {
						cout << "ERROR: El codigo de la clase grupal no fue encontrado." << endl;
					}
				}
				else {
					cout << "ERROR: El codigo de sucursal no fue encontrado." << endl;
				}

			}
			else {
				cout << "ERROR: Cliente con la cedula " << ced << " no encontrado." << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 16: {
			string ced;

			cout << "--- Lista de Clases Matriculadas por el Cliente ---" << endl;
			cout << "Ingrese la cedula del cliente: ";
			cin >> ced;

			Cliente* clienteEncontrado = gym->getCliente(ced);
			if (clienteEncontrado != nullptr) {

				cout << "\nCliente encontrado. Mostrando lista de clases registradas..." << endl;

				cout << gym->verificarInscrito(ced) << endl << endl;

			}
			else {
				cout << "ERROR: Cliente con la cedula " << ced << " no encontrado." << endl;
			}
			system("pause");
			system("cls");
			break;
			
		}
		default: {
			cout << "Numero invalido " << endl;
			system("pause");
			system("cls");
			break;
		}
		}

	} while (opcion != 0);
}