#include "Sucursal.h"
Sucursal::Sucursal() {
    codigo = 0;
    telefono = 0;
    provincia = "Sin definir";
    canton = "Sin definir";
    correoElectronico = "Sin definir";
    clases = new ClaseGrupal * [8];
    instructores = new Instructor * [10];
    clientes = new Cliente * [1000];

    for (int i = 0; i < 10; ++i) {
        instructores[i] = nullptr;
    }
    for (int i = 0; i < 1000; ++i) {
        clientes[i] = nullptr;
    }
    for (int i = 0; i < 8; ++i) {
        clases[i] = nullptr;
    }
    canClases = 0;
    canInstructores = 0;
    canClientes = 0;
}
Sucursal::Sucursal(int cod, int tel, string prov, string can, string correo) {
    codigo = cod;
    telefono = tel;
    provincia = prov;
    canton = can;
    correoElectronico = correo;
    instructores = new Instructor * [10];
    clientes = new Cliente * [1000];

    for (int i = 0; i < 10; ++i) {
        instructores[i] = nullptr;
    }
    for (int i = 0; i < 1000; ++i) {
        clientes[i] = nullptr;
    }
    for (int i = 0; i < 8; ++i) {
        clases[i] = nullptr;
    }
}
Sucursal::~Sucursal() {
    for (int i = 0; i < 8; ++i) {
        delete clases[i];
        clases[i] = nullptr;
    }
    for (int i = 0; i < 10; ++i) {
        delete instructores[i];
        instructores[i] = nullptr;
    }
    for (int i = 0; i < 1000; ++i) {
        delete clientes[i];
        clientes[i] = nullptr;
    }
    delete[] instructores;
    delete[] clientes;
    delete[] clases;
    canClases = 0;
    canInstructores = 0;
    canClientes = 0;
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
        cout << "Error: No se pueden agregar más instructores." << std::endl;
    }
}
void Sucursal::setCliente(Cliente* clie) {
    if (canClientes < 1000) {
        clientes[canClientes] = clie;
        canClientes++;
    }
    else {
         cout << "Error: No se pueden agregar más clientes." << std::endl;
    }
}
void Sucursal::setClaseGrupal(ClaseGrupal* claseaux) {
    if (canClases < 8) {
        clases[canClases] = claseaux;
        canClases++;
    }
    else {
        cout << "Error: No se pueden agregar más clases." << std::endl;
    }
}


Instructor*Sucursal:: getInstructor(string ced) {
    for (int i = 0; i < canInstructores; i++) {
        if (instructores[i] != nullptr && instructores[i]->getCedulaCoach() == ced) {
            return instructores[i];
        }
    }
    return nullptr;
}
ClaseGrupal* Sucursal::getClaseGrupal(string nom) {
    for (int i = 0; i < canClases; i++) {
        if (clases[i] != nullptr && clases[i]->getNombreClaseGrupal() == nom) {
            return clases[i];
        }
    }
    return nullptr;
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
Cliente* Sucursal:: getCliente(string ced) {
    for (int i = 0; i < canClientes; i++) {
        if (clientes[i] != nullptr && clientes[i]->getCedulaCliente()==ced) {
            return clientes[i];
        }
    }
    return nullptr;
}

string Sucursal::toString() {
    stringstream s;

    s << "--- Información de la Sucursal ---" << endl;
    s << "Código: " << codigo << endl;
    s << "Teléfono: " << telefono << endl;
    s << "Provincia: " << provincia << endl;
    s << "Cantón: " << canton << endl;
    s << "Correo Electrónico: " << correoElectronico << endl;
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

    s << "\n--- ClasesGrupales (" << canClases << " de 8) ---" << endl;
    if (canClases > 0) {
        for (int i = 0; i < canClases; i++) {
            s << clases[i]->toString() << endl;
        }
    }
    else {
        s << "No hay clases registradas." << endl;
    }

    return s.str();
}
string Sucursal:: clientesSucursal() {
    stringstream s;

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
