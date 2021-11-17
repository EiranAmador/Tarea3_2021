#ifndef EscritorPersonas_H
#define EscritorPersonas_H

#include <string>
#include <fstream>
#include <iostream>

#include "persona.h"

class EscritorPersonas {

    ofstream archivoSalida;

    public:
    EscritorPersonas(std::string nombreArchivo);
    
    void AgregarPersona(Persona &persona);
    void Cerrar();
};

#endif