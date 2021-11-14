#include <gtest/gtest.h>
#include <string>

#include "../src/persona.h"

using namespace std;

namespace {

    TEST(CrearPersona, Prueba_CrearPersona) {
        
        Persona personaPrueba {123, "Michael", "Jordan", "michael.jordan@mail.com"};

        EXPECT_EQ(123, personaPrueba.getID());
        EXPECT_EQ("Michael", personaPrueba.getNombre());
        EXPECT_EQ("Jordan", personaPrueba.getApellido());
        EXPECT_EQ("michael.jordan@mail.com", personaPrueba.getCorreo());
    }
}