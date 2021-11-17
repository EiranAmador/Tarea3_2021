#include "escritorPersonas.h"
#include "./excepciones/excepcionNoSePuedeAbrirArchivo.h"

using namespace std;

EscritorPersonas::EscritorPersonas(std::string nombreArchivo) {

    archivoSalida.open(nombreArchivo, ios::out|ios::binary);

    if (!archivoSalida.is_open())
    {
        throw new ExcepcionNoSePuedeAbrirArchivo();
    }
}

void EscritorPersonas::AgregarPersona(Persona &persona) {
    
    archivoSalida.write((char *) &persona, sizeof(Persona));
}

void EscritorPersonas::Cerrar() {
    
    archivoSalida.close();
}