#include <gtest/gtest.h>
#include <string>

#include "../src/lectorPersonas.h"
#include "../src/obtenerPersona.h"
#include "../src/persona.h"

using namespace std;

namespace {

    TEST(Excepciones, Prueba_ObtenerInfoDePersonaEnPosicionEspecifica) {

        Persona prueba {};
        lectorPersonas pruebaLeer {};
        
        prueba = pruebaLeer.leerPersona(2);

       EXPECT_EQ(prueba.getID(), 11);
       EXPECT_EQ(prueba.getNombre(), "Erick");
       EXPECT_EQ(prueba.getApellido(), "Uttley");
       EXPECT_EQ(prueba.getCorreo(), "erick_uttley@biz.com");
    }

    TEST(Excepciones, Prueba_DevolverString) {

        string prueba;
        obtenerPersona pruebaString {};
        
        prueba = pruebaString.obtenerInformacion(2);

       EXPECT_EQ(prueba, "Posicion: 2   ID: 11   Nombre: Erick   Apellido: Uttley   Correo: erick_uttley@biz.com");
    }

    TEST(Excepciones, Prueba_CrearPersona) {

        Persona prueba {1,"Juan","Pruebas","prueba@mail.com"};

       EXPECT_EQ(prueba.getID(), 1);
       EXPECT_EQ(prueba.getNombre(), "Juan");
       EXPECT_EQ(prueba.getApellido(), "Pruebas");
       EXPECT_EQ(prueba.getCorreo(), "prueba@mail.com");
    }
}