#ifndef LECTOR_PERSONAS_H
#define LECTOR_PERSONAS_H

#include <string>
#include "persona.h"

#include <fstream>

using namespace std;

class LectorPersonas{

    ifstream archivoEntrada;

    public:
    LectorPersonas(string nombreArchivo);

    Persona ObtenerPersona(int ID);
    
    void Cerrar();
};

#endif