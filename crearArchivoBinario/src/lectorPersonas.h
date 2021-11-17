#ifndef LECTORPERSONAS_H
#define LECTORPERSONAS_H

#include <string>

class lectorPersonas{

    std::string dirArchivo = "";

    public:

        lectorPersonas(std::string dirArchivo = "../personas.txt");
        virtual int leerPersonas();
};

#endif