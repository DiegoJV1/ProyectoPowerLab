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
ClaseGrupal* Sucursal::getClaseGrupal(string cod) {
    for (int i = 0; i < canClases; i++) {
        if (clases[i]->getCodigoClaseGrupal() == cod) {
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
string Sucursal::getClientesPorIns(string ced) {
    stringstream ss;
    ss << " Clientes asignados a la cedula: " << ced << endl;

    for (int i = 0; i < canClientes; i++) {
        if (clientes[i] != nullptr && clientes[i]->getCoach() != nullptr && clientes[i]->getCoach()->getCedulaCoach() == ced) {
            ss << clientes[i]->toString() << endl;
        }
    }
    ss << "-----------------------------------" << endl;
    return ss.str();
}



string Sucursal::buscarInstructoresPorEspecialidad(string espe) {
    stringstream ss;
    bool encontrados = false;
    for (int i = 0; i < canInstructores; i++) {
        if (instructores[i] != nullptr && instructores[i]->buscarEspecialidadCoach(espe) == true) {
            ss << instructores[i]->toString() << endl;
            encontrados = true;
        }
    }
    if (!encontrados) {
        ss << "No se encontraron instructores con esa especialidad en esta sucursal." << endl;
    }
    return ss.str();
}



string Sucursal::instructoresSucursal() {
    stringstream s;

    s << "\n--- Instructores (" << canInstructores << " de 10) ---" << endl;
    if (canInstructores > 0) {
        for (int i = 0; i < canInstructores; i++) {
            s << instructores[i]->toString() << endl;
        }
    }
    else {
        s << "No hay instructores registrados." << endl;
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

string Sucursal::clasificacionPorIMC() {
    stringstream ss;
    int canDS = 0;
    int canDM = 0;
    int canDL = 0;
    int canN = 0;
    int canPO = 0;
    int canOL = 0;
    int canOME = 0;
    int canOMO = 0;

    ss << "Delgadez Severa:" << endl << endl;
    for (int i = 0; i < canClientes; i++) {
        if (clientes[i]->buscarMasActual()->getClasificacionIMC() == "Delgadez Severa") {
            ss << clientes[i]->toString() << endl << endl;
            canDS++;
        }
    }
    ss << "Cantida de Clientes: " << canDS << endl << endl;
    //------------------------------------------------------------------------------------------
    ss << "Delgadez Moderada:" << endl << endl;
    for (int i = 0; i < canClientes; i++) {
        if (clientes[i]->buscarMasActual()->getClasificacionIMC() == "Delgadez Moderada") {
            ss << clientes[i]->toString() << endl << endl;
            canDM++;
        }
    }
    ss << "Cantida de Clientes: " << canDM << endl << endl;
    //------------------------------------------------------------------------------------------
    ss << "Delgadez Leve:" << endl << endl;
    for (int i = 0; i < canClientes; i++) {
        if (clientes[i]->buscarMasActual()->getClasificacionIMC() == "Delgadez Leve") {
            ss << clientes[i]->toString() << endl << endl;
            canDL++;
        }
    }
    ss << "Cantida de Clientes: " << canDL << endl << endl;
    //------------------------------------------------------------------------------------------
    ss << "Normal:" << endl << endl;
    for (int i = 0; i < canClientes; i++) {
        if (clientes[i]->buscarMasActual()->getClasificacionIMC() == "Normal") {
            ss << clientes[i]->toString() << endl << endl;
            canN++;
        }
    }
    ss << "Cantida de Clientes: " << canN << endl << endl;
    //------------------------------------------------------------------------------------------
    ss << "Pre-Obesidad:" << endl << endl;
    for (int i = 0; i < canClientes; i++) {
        if (clientes[i]->buscarMasActual()->getClasificacionIMC() == "Pre-Obesidad") {
            ss << clientes[i]->toString() << endl << endl;
            canPO++;
        }
    }
    ss << "Cantida de Clientes: " << canPO << endl << endl;
    //------------------------------------------------------------------------------------------
    ss << "Obesidad Leve:" << endl << endl;
    for (int i = 0; i < canClientes; i++) {
        if (clientes[i]->buscarMasActual()->getClasificacionIMC() == "Obesidad Leve") {
            ss << clientes[i]->toString() << endl << endl;
            canOL++;
        }
    }
    ss << "Cantida de Clientes: " << canOL << endl << endl;
    //------------------------------------------------------------------------------------------
    ss << "Obesidad Media:" << endl << endl;
    for (int i = 0; i < canClientes; i++) {
        if (clientes[i]->buscarMasActual()->getClasificacionIMC() == "Obesidad Media") {
            ss << clientes[i]->toString() << endl << endl;
            canOME++;
        }
    }
    ss << "Cantida de Clientes: " << canOME << endl << endl;
    //------------------------------------------------------------------------------------------
    ss << "Obesidad Morbida:" << endl << endl;
    for (int i = 0; i < canClientes; i++) {
        if (clientes[i]->buscarMasActual()->getClasificacionIMC() == "Obesidad Morbida") {
            ss << clientes[i]->toString() << endl << endl;
            canOMO++;
        }
    }
    ss << "Cantida de Clientes: " << canOMO << endl << endl;
    //------------------------------------------------------------------------------------------
    return ss.str();
}
string Sucursal::clasesSucursal() {
    stringstream ss;
    for (int i = 0; i < canClases; i++) {
        ss << clases[i]->toString() << endl << endl;
    }
    return ss.str();
}
string Sucursal::ImprimirCodBusquedaClasesPorCliente(string cedaux) {
    stringstream ss;
    for (int i = 0; i < canClases; i++) {
        if (clases[i]->busquedaCliente(cedaux) == true) {
            ss << clases[i]->toStringSoloDatos() << endl;
        }
    }
    return ss.str();
}
bool Sucursal::verificacionCodBusquedaClasesPorCliente(string cedaux) {
    for (int i = 0; i < canClases; i++) {
        if (clases[i]->busquedaCliente(cedaux) == true) {
            return true;
        }
    }
}
