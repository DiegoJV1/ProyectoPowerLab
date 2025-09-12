#include "Sucursal.h"
Sucursal::Sucursal() {
    codigo = 0;
    telefono = 0;
    provincia = "Sin definir";
    canton = "Sin definir";
    correoElectronico = "Sin definir";

    for (int i = 0; i < 10; ++i) {
        instructores[i] = nullptr;
    }
    for (int i = 0; i < 1000; ++i) {
        clientes[i] = nullptr;
    }

    canInstructores = 0;
    canClientes = 0;
}
Sucursal::Sucursal(int cod, int tel, string prov, string can, string correo) {
    codigo = cod;
    telefono = tel;
    provincia = prov;
    canton = can;
    correoElectronico = correo;
}
Sucursal::~Sucursal() {
    for (int i = 0; i < 10; ++i) {
        delete instructores[i];
    }
    for (int i = 0; i < 1000; ++i) {
        delete clientes[i];
    }
    delete[] instructores;
    delete[] clientes;
}



void Sucursal::setCodigo(int cod) {
    codigo = cod;
}
void Sucursal::setTelefono(int tel) {
    telefono = tel;
}
void Sucursal::setProvincia(string prov) {
    provincia = prov;
}
void Sucursal::setCanton(string can) {
    canton = can;
}
void Sucursal::setCorreoElectronico(string correo) {
    correoElectronico = correo;
}
void Sucursal::setInstructor(Instructor* inst) {
    if (canInstructores < 10) {
        instructores[canInstructores] = inst;
        canInstructores++;
    }
    else {
        cout << "Error: No se pueden agregar m�s instructores." << std::endl;
    }
}
void Sucursal::setCliente(Cliente* clie) {
    if (canClientes < 1000) {
        clientes[canClientes] = clie;
        canClientes++;
    }
    else {
         cout << "Error: No se pueden agregar m�s clientes." << std::endl;
    }
}



int Sucursal::getCodigo() {
    return codigo;
}

int Sucursal::getTelefono() {
    return telefono;
}

string Sucursal::getProvincia() {
    return provincia;
}

string Sucursal::getCanton() {
    return canton;
}

string Sucursal::getCorreoElectronico() {
    return correoElectronico;
}

int Sucursal::getCanInstructores() {
    return canInstructores;
}

int Sucursal::getCanClientes() {
    return canClientes;
}


string Sucursal::toString() {
    stringstream s;

    s << "--- Informaci�n de la Sucursal ---" << endl;
    s << "C�digo: " << codigo << endl;
    s << "Tel�fono: " << telefono << endl;
    s << "Provincia: " << provincia << endl;
    s << "Cant�n: " << canton << endl;
    s << "Correo Electr�nico: " << correoElectronico << endl;
    s << "-----------------------------------" << endl;

    s << "\n--- Instructores (" << canInstructores << " de 10) ---" << endl;
    if (canInstructores > 0) {
        for (int i = 0; i < canInstructores; i++) {
            s << instructores[i]->toString() << endl;
        }
    }
    else {
        s << "No hay instructores registrados." << endl;
    }

    s << "\n--- Clientes (" << canClientes << " de 1000) ---" << endl;
    if (canClientes > 0) {
        for (int i = 0; i < canClientes; i++) {
            s << clientes[i]->toString() << endl;
        }
    }
    else {
        s << "No hay clientes registrados." << endl;
    }

    s << "-----------------------------------" << endl;

    return s.str();
}