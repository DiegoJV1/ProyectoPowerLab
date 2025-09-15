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
			string cedulaInstructor, nombreCliente, cedulaCliente, telefonoCliente, correoCliente, generoCliente;

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

					cout << "Ingrese el genero del cliente: ";
					getline(cin, generoCliente);

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

		}
		case 6: {

		}
		case 7: {

		}
		case 8: {

		}
		case 9: {

		}
		case 10: {

		}
		case 0:
			cout << "Saliendo del programa " << endl;
		default:
			cout << "Numero invalido " << endl;
		}
	} while (opcion != 0);
}