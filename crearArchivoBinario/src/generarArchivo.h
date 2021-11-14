#ifndef GENERARARCHIVO_H
#define GENERARARCHIVO_H

#include <iostream>
#include "arbolEmpleados.h"

class generarArchivo {

    arbolEmpleados *arbol;
    std::string nombreArchivo;

    public:
    generarArchivo(std::string nombreArchivo, arbolEmpleados *arbol);
    int generar();
};

#endif