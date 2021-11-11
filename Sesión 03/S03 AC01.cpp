#include <iostream>
using namespace std;

class Vehiculo{
    public:
        string marca="VW";

        void enciende(){
            cout<<"Vehiculo en marcha...."<<endl;
        }
};

class Auto: public Vehiculo{
    public:
        string modelo="Golf";

};


int main(){

    Auto MiCarro;
    cout<<endl;
    MiCarro.enciende();
    cout<<MiCarro.marca<<" "<<MiCarro.modelo<<endl;


}
