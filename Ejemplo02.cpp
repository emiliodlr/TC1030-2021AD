#include <iostream>
using namespace std;

class MiClase{
    public:
        void MiMetodo();

};

void MiClase::MiMetodo(){
    cout<<"Buenos dias"<<endl;
};

int main(){
    MiClase MiObjeto;
    MiObjeto.MiMetodo();
}