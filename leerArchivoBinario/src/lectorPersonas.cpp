#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "lectorPersonas.h"
#include "persona.h"

#include "../src/excepciones/excepcionNoSePuedeAbrirArchivo.h"
#include "../src/excepciones/excepcionIdInvalido.h"

using namespace std;

lectorPersonas::lectorPersonas(std::string dirArchivo){

    this->dirArchivo = dirArchivo;
}

Persona lectorPersonas::leerPersona(int posicion) {

    ifstream archivoEntrada;
    archivoEntrada.open(dirArchivo, ios::in|ios::binary);

    if (!archivoEntrada.is_open())
    {
        throw ExcepcionNoSePuedeAbrirArchivo();
    }

    Persona personaLeidaDeArchivo;

    archivoEntrada.seekg(sizeof(Persona) * posicion);
    archivoEntrada.read((char *) &personaLeidaDeArchivo, sizeof(Persona));

    archivoEntrada.close();

    if(personaLeidaDeArchivo.getID() == 0){

        throw ExcepcionIdInvalido();
    }

    return personaLeidaDeArchivo;
}