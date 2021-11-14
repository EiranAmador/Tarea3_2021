#include "persona.h"
#include <string>
#include <string.h>

using namespace std;

Persona::Persona(int id, string nombre, string apellido, string correo) {
    
    this->ID = id;

    strcpy(this->Nombre, nombre.c_str());
    strcpy(this->Apellido, apellido.c_str());
    strcpy(this->Correo, correo.c_str());
}

Persona::Persona() {
    
    this->ID = 0;

    strcpy(this->Nombre, "");
    strcpy(this->Apellido, "");
    strcpy(this->Correo, "");;
}

int Persona::getID() {

    return this->ID;
}

string Persona::getNombre() {

    return string{this->Nombre};
}

string Persona::getApellido() {

    return string{this->Apellido};
}

string Persona::getCorreo() {

    return string{this->Correo};
}