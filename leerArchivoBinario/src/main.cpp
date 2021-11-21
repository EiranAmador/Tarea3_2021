#ifndef UNIT_TEST

#include <iostream>
#include <fstream>

#include "../src/obtenerPersona.h"

using namespace std;

int main() {

    obtenerPersona *personaPosicion3 = new obtenerPersona();
    
    std::cout << personaPosicion3->obtenerInformacion(3) << std::endl;

    return 0;
}

#endif