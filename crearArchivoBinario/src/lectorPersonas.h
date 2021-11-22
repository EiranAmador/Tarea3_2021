#ifndef LECTORPERSONAS_H
#define LECTORPERSONAS_H

#include <string>

class lectorPersonas{

    std::string dirArchivoTexto = "";
    std::string dirArchivoBinario = "";

    public:

        lectorPersonas(std::string dirArchivoTexto = "../personas.txt", std::string dirArchivoBinario = "../../archivosCompartidos/personas.dat");
        virtual int leerPersonas();
};

#endif