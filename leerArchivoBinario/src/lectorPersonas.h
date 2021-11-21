#ifndef LECTORPERSONAS_H
#define LECTORPERSONAS_H

#include <string>

#include "persona.h"

class lectorPersonas{

    std::string dirArchivo = "";

    public:

        lectorPersonas(std::string dirArchivo = "../../archivosCompartidos/personas.dat");
        virtual Persona leerPersona(int posicion);
};

#endif