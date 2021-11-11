#include <iostream>
using namespace std;

class Equipo{
    public:
        Equipo (string nombre){      // Crear el constructor
            nombreEquipo=nombre;
        }

        string obtenerNombreEquipo(){
            return nombreEquipo;
        }

        void mostrarMensaje(){
            cout<<"Equipo actual:"<<obtenerNombreEquipo()<<endl;
        }
    private:
        string nombreEquipo;

};


int main(){

    Equipo MiEquipo01("Barcelona");
    Equipo MiEquipo02("Real America");
    cout<<endl;
    cout<<"Equipo 01 se refiere a: "<<MiEquipo01.obtenerNombreEquipo()<<endl;
    cout<<"Equipo 02 se refiere a: "<<MiEquipo02.obtenerNombreEquipo()<<endl;

}