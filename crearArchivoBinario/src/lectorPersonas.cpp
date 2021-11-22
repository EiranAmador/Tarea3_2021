#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "lectorPersonas.h"
#include "persona.h"
#include "escritorPersonas.h"

using namespace std;

lectorPersonas::lectorPersonas(std::string dirArchivoTexto, std::string dirArchivoBinario){

    this->dirArchivoTexto = dirArchivoTexto;
    this->dirArchivoBinario= dirArchivoBinario;
}

int lectorPersonas::leerPersonas() {

    std::ifstream ifs(dirArchivoTexto, std::ifstream::in);

    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo " << dirArchivoTexto << std::endl;
        return -1;
    }    
    
    std::string linea {}; 

    int ID {0};
    string Nombre {""};
    string Apellido {""};
    string Correo {""};

    while (std::getline(ifs, linea)) {
        
        std::istringstream stream(linea);

        ID = 0;
        Nombre = "";
        Apellido = "";
        Correo = "";

        stream >> ID >> Nombre >> Apellido >> Correo;

        Persona *persona = new Persona(ID, Nombre, Apellido, Correo);
 
        EscritorPersonas *personas = new EscritorPersonas(dirArchivoBinario);
        personas->AgregarPersona(*persona);
        personas->Cerrar();
    }

    ifs.close();

    return 0;
}