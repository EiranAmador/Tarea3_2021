#ifndef EscritorPersonas_H
#define EscritorPersonas_H

#include <string>
#include <fstream>
#include <iostream>

#include "persona.h"

class EscritorPersonas {

    ofstream archivoSalida;

    public:
    EscritorPersonas(std::string nombre);
    
    void AgregarPersona(Persona &persona);
    void Cerrar();
};

#endif