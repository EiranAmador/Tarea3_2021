#include <iostream>
#include <fstream>
#include "arbolEmpleados.h"
#include "generarArchivo.h"

generarArchivo::generarArchivo(std::string nombreArchivo, arbolEmpleados *arbol){

    this->nombreArchivo = nombreArchivo;
    this->arbol = arbol;
}

int generarArchivo::generar(){

    std::ofstream archivoSalida(nombreArchivo);
    archivoSalida << *arbol;
    archivoSalida.close();

    return 0;
}