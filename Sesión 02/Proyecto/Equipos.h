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