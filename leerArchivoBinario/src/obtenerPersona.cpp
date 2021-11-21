#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "obtenerPersona.h"
#include "lectorPersonas.h"

#include "../src/excepciones/excepcionPersonaNoExiste.h"

using namespace std;

string obtenerPersona::obtenerInformacion(int posicion) {

    try{
        
        lectorPersonas *leerPersona = new lectorPersonas();

        Persona personaLeida = leerPersona->leerPersona(posicion);

        string informacion = 
        "Posicion: " + std::to_string(posicion) +
        "   ID: " + std::to_string(personaLeida.getID())+
        "   Nombre: " + personaLeida.getNombre() +
        "   Apellido: " + personaLeida.getApellido() +
        "   Correo: " + personaLeida.getCorreo();

        return informacion;
    }
    catch(ExcepcionPersonaNoExiste()){
    }
}