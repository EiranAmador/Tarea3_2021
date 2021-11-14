#include <iostream>

#include "lectorPersonas.h"
#include "./excepciones/excepcionNoSePuedeAbrirArchivo.h"
#include "./excepciones/excepcionPersonaNoExiste.h"

LectorPersonas::LectorPersonas(string nombreArchivo) {

    archivoEntrada.open(nombreArchivo, ios::in|ios::binary);

    if (!archivoEntrada.is_open())
    {
        throw new ExcepcionNoSePuedeAbrirArchivo();
    }

}

Persona LectorPersonas::ObtenerPersona(int idPersona) {

    Persona personaLeida;

    long posicionPersona = sizeof(Persona) * (idPersona);

    archivoEntrada.seekg(0, ios::end);
    long fileSize = archivoEntrada.tellg();

    if (posicionPersona > fileSize){

        throw ExcepcionPersonaNoExiste();
    }

    archivoEntrada.seekg(posicionPersona);
    archivoEntrada.read((char *) &personaLeida, sizeof(Persona));

    return personaLeida;
}

void LectorPersonas::Cerrar() {
    archivoEntrada.close();
}