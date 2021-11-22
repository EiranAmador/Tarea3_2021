#include <gtest/gtest.h>
#include <string>

#include "../src/persona.h"
#include "../src/escritorPersonas.h"
#include "../src/lectorPersonas.h"

using namespace std;

namespace {

    TEST(CrearPersona, Prueba_CrearPersona) {
        
        Persona personaPrueba {1, "Michael", "Jordan", "michael.jordan@mail.com"};

        EXPECT_EQ(personaPrueba.getID(), 1);
        EXPECT_EQ(personaPrueba.getNombre(), "Michael");
        EXPECT_EQ(personaPrueba.getApellido(), "Jordan");
        EXPECT_EQ(personaPrueba.getCorreo(), "michael.jordan@mail.com");
    }

    TEST(CrearPersona, Prueba_GenerarBinario) {
        
        Persona personaPrueba {1, "Michael", "Jordan", "michael.jordan@mail.com"};

        EscritorPersonas escribirIdCero {"../../archivosCompartidos/test.dat"};
        escribirIdCero.AgregarPersona(personaPrueba);
    }

    TEST(CrearPersona, Prueba_LeerArchivoTexto) {
        
        lectorPersonas leerPrueba {"../pruebaTexto.txt","../../archivosCompartidos/test.dat"};
        
        int resultado = leerPrueba.leerPersonas();

        EXPECT_EQ(resultado,0);
    }
}