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
		cout << "4. Lista general de todos los clientes por sucursal espec�fica" << endl;
		cout << "5. Detalle de un cliente espec�fico" << endl;
		cout << "6. Lista de clientes por instructor espec�fico" << endl;
		cout << "7. Lista de instructores por sucursal" << endl;
		cout << "8. Lista de instructores por especialidad" << endl;
		cout << "9. El sistema permite ingresar el registro de medici�n a un cliente especifico" << endl;
		cout << "10. Hecho lo anterior se debe poder buscar un cliente y mostrar su historial de mediciones, organizadas por fecha, con la opci�n demostrar el detalle de cualquiera de sus reportes de medici�n" << endl;
		cout << "0. Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1: {
			int codigo, telefono;
			string provincia, canton, correo;

			cout << "--- Ingresar Sucursal ---" << endl;
			cout << "Ingrese el c�digo: ";
			cin >> codigo;

			cout << "Ingrese el tel�fono: ";
			cin >> telefono;

			cout << "Ingrese la provincia: ";
			getline(cin, provincia);

			cout << "Ingrese el cant�n: ";
			getline(cin, canton);

			cout << "Ingrese el correo electr�nico: ";
			getline(cin, correo);

			Sucursal* nuevaSucursal = new Sucursal(codigo, telefono, provincia, canton, correo);
			gym->insertarSucursal(nuevaSucursal);

			cout << "\nSucursal ingresada exitosamente." << endl;
			break;
		}
		case 2: {
			cout << "--- Ingresar clientes ---" << endl;
			cout << "Ya debe de existir su surcursal y entrenador " << endl;
			cout<<
			Cliente* nuevoCliente=new Cliente();
			Instructor* coach;
			string nombreCliente, cedulaCliente, telefonoCliente, correoCliente, generoCliente;

			gym->getSucursal()
		}
		case 3: {

		}
		case 4: {

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