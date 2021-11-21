#ifndef UNIT_TEST

#include <iostream>
#include <fstream>

#include "../src/persona.h"

using namespace std;

int main() {

    ifstream archivoEntrada;
    archivoEntrada.open("../personas.dat", ios::in|ios::binary);

    if (!archivoEntrada.is_open())
    {
        cerr << "No se pudo abrir archivo libros.dat para leer los datos";
        return -1;
    }

    Persona libro1LeidoDeArchivo;
    Persona libro2LeidoDeArchivo;
    Persona libro3LeidoDeArchivo;

    archivoEntrada.seekg(sizeof(Persona) * 2);
    archivoEntrada.read((char *) &libro3LeidoDeArchivo, sizeof(Persona));
    //archivoEntrada.read((char *) &libro2LeidoDeArchivo, sizeof(Libro));
    //archivoEntrada.read((char *) &libro3LeidoDeArchivo, sizeof(Libro));

    archivoEntrada.close();

    return 0;
}

#endif