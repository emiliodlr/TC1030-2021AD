#include <iostream>
#include "Equipos.h"
using namespace std;

Equipo::Equipo (string nombre){      // Crear el constructor
            nombreEquipo=nombre;
}

string Equipo::obtenerNombreEquipo(){
    return nombreEquipo;
}

void Equipo::mostrarMensaje(){
    cout<<"Equipo actual:"<<obtenerNombreEquipo()<<endl;
}
