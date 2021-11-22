#include <gtest/gtest.h>
#include <string>

#include "../src/lectorPersonas.h"
#include "../src/excepciones/excepcionNoSePuedeAbrirArchivo.h"
#include "../src/excepciones/excepcionIdInvalido.h"
#include "../src/excepciones/excepcionPersonaNoExiste.h"

using namespace std;

namespace {

    TEST(Excepciones, Prueba_ArchivoNoSePuedeAbrir) {

        Persona prueba {}; 
        
        EXPECT_THROW({

            lectorPersonas abrirArchivoInvalido {"../archivoInvalido.dat"};

            prueba = abrirArchivoInvalido.leerPersona(3);

        }, ExcepcionNoSePuedeAbrirArchivo);
    }

    TEST(Excepciones, Prueba_IdEsInvalido) {
        
        Persona prueba {};

        EXPECT_THROW({

            lectorPersonas abrirArchivoInvalido {"../../archivosCompartidos/test.dat"};

            prueba = abrirArchivoInvalido.leerPersona(1);

        }, ExcepcionIdInvalido);
    }

    TEST(Excepciones, Prueba_NoSePuedeLeerPersona) {
        
        Persona prueba {};

        EXPECT_THROW({

            lectorPersonas abrirArchivoInvalido {"../../archivosCompartidos/test.dat"};

            prueba = abrirArchivoInvalido.leerPersona(3);

        }, ExcepcionPersonaNoExiste);
    }
}