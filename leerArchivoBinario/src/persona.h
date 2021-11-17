#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona
{
    int ID; 
    char Nombre[15]; 
    char Apellido[15]; 
    char Correo[50];

    public:

    Persona(int ID, string Nombre, string Apellido, string Correo);
    Persona();

    int getID();
    string getNombre();
    string getApellido();
    string getCorreo();
};

#endif