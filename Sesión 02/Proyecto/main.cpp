#include <iostream>
#include "Equipos.h"
using namespace std;

int main(){

    Equipo MiEquipo01("Barcelona");
    Equipo MiEquipo02("Real America");
    cout<<endl;
    cout<<"Equipo 01 se refiere a: "<<MiEquipo01.obtenerNombreEquipo()<<endl;
    MiEquipo01.mostrarMensaje();
    cout<<"Equipo 02 se refiere a: "<<MiEquipo02.obtenerNombreEquipo()<<endl;

}