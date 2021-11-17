#ifndef UNIT_TEST

#include "../src/lectorPersonas.h"

using namespace std;

int main() {

    lectorPersonas *crearBinario = new lectorPersonas();

    crearBinario->leerPersonas();

    return 0;
}

#endif