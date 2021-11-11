#include <iostream>
using namespace std;

class Equipo{
    public:
        Equipo (string nombre);
        string obtenerNombreEquipo();
        void mostrarMensaje();
    private:
        string nombreEquipo;

};
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Equipo::Equipo (string nombre){      // Crear el constructor
            nombreEquipo=nombre;
}

string Equipo::obtenerNombreEquipo(){
    return nombreEquipo;
}

void Equipo::mostrarMensaje(){
    cout<<"Equipo actual:"<<obtenerNombreEquipo()<<endl;
}


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int main(){

    Equipo MiEquipo01("Barcelona");
    Equipo MiEquipo02("Real America");
    cout<<endl;
    cout<<"Equipo 01 se refiere a: "<<MiEquipo01.obtenerNombreEquipo()<<endl;
    MiEquipo01.mostrarMensaje();
    cout<<"Equipo 02 se refiere a: "<<MiEquipo02.obtenerNombreEquipo()<<endl;

}