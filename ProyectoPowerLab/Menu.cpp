#include "Menu.h"

Menu::Menu(Gimnasio* aux) {
	gym = aux;
}
Menu::~Menu() {
	delete gym;
}
void Menu::obtenerMenu() {
	int opcion = 1;
	do {
		cout << "--- Menu de Gimnasio ---" << endl;
		cout << "1. Ingresar Sucursal" << endl;
		cout << "2. Ingresar clientes" << endl;
		cout << "3. Ingresar instructores" << endl;
		cout << "4. Lista general de todos los clientes por sucursal específica" << endl;
		cout << "5. Detalle de un cliente específico" << endl;
		cout << "6. Lista de clientes por instructor específico" << endl;
		cout << "7. Lista de instructores por sucursal" << endl;
		cout << "8. Lista de instructores por especialidad" << endl;
		cout << "9. El sistema permite ingresar el registro de medición a un cliente especifico" << endl;
		cout << "10. Hecho lo anterior se debe poder buscar un cliente y mostrar su historial de mediciones, organizadas por fecha, con la opción demostrar el detalle de cualquiera de sus reportes de medición" << endl;
		cout << "11. Se debe mostrar por sucursal especifica, cuántos y cuáles clientes se ubican en cada uno de los rangos de contextura según el IMC. " << endl;
		cout << "12. El sistema debe permitir ingresar ejercicios a la “batería de ejercicios”." << endl;
		cout << "13. El sistema debe permitir la generación de una nueva rutina a un cliente especifico(a partir de la “batería de ejercicios”).Se debe poder buscar cualquier cliente de cualquier sucursal y mostrar la rutinagenerada." << endl;
		cout << "14. El sistema debe permitir crear clases grupales por sucursal especifica.Debe permitir visualizar dichas clases grupales, con todo su detalle" << endl;
		cout << "15. El sistema debe permitir matricular clientes en las clases grupales impartidas en las diferentes sucursales. Para verificar estos, sedebe permitir visualizar la lista de clientes matriculados por clase especifica. " << endl;
		cout << "16. Se debe permitir visualizar las clases matriculadas por cliente especifico" << endl;

		cout << "0. Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1: {
			int codigo, telefono;
			string provincia, canton, correo;

			cout << "--- Ingresar Sucursal ---" << endl;
			cout << "Ingrese el código: ";
			cin >> codigo;

			cout << "Ingrese el teléfono: ";
			cin >> telefono;

			cout << "Ingrese la provincia: ";
			getline(cin, provincia);

			cout << "Ingrese el cantón: ";
			getline(cin, canton);

			cout << "Ingrese el correo electrónico: ";
			getline(cin, correo);

			Sucursal* nuevaSucursal = new Sucursal(codigo, telefono, provincia, canton, correo);
			gym->insertarSucursal(nuevaSucursal);

			cout << "\nSucursal ingresada exitosamente." << endl;
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
					cin>>generoCliente;

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
					instructor->setEspecialidadCoach(opcionEspecialidad);

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
		}
		case 6: {
			string ced;
			cout << "--- Lista de clientes por instructor especifico ---" << endl;
			cout << "Ingrese la cedula del instructor: ";
			cin >> ced;

			cout << gym->clientePorInstructor(ced);

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

			break;
		}
		case 0:
			cout << "Saliendo del programa " << endl;
		default:
			cout << "Numero invalido " << endl;
		}
	} while (opcion != 0);
}