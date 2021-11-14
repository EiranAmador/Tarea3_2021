#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona
{
    int ID; 
    string Nombre; 
    string Apellido; 
    string Correo;

    public:
    Libro(int id, string nombreLibro, string isbnLibro);
    Libro();

    int getID();
    string getNombre();
    string getISBN();
};


#endif