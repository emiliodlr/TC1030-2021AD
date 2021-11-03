#include <iostream>
using namespace std;

class Car{
    public:
        string marca;    
        string modelo;
        int yr;

};

int main(){
    
    Car Auto1;
    Auto1.marca="Audi";
    Auto1.modelo="A3";
    Auto1.yr=2020;
    cout<<endl;
    cout<<Auto1.marca<< " "<<Auto1.modelo <<" "<<Auto1.yr<<endl;

    Car Auto2;
    Auto2.marca="Toyota";
    Auto2.modelo="Yaris";
    Auto2.yr=2022;
    cout<<endl;
    cout<<Auto2.marca<< " "<<Auto2.modelo <<" "<<Auto2.yr<<endl;

}

