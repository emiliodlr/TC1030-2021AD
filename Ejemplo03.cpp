#include <iostream>
using namespace std;      // Area y volumen de una habitación

class Habitacion{
    public:
        double calcArea(double largo, double ancho);
        double calcVolumen(double largo, double ancho, double alto);      
};

double Habitacion::calcArea(double largo, double ancho){
            return largo*ancho;
        };
double Habitacion::calcVolumen(double largo, double ancho, double alto){
            return largo*ancho*alto;
        };    



int main(){

    Habitacion MiCuarto;

    double l=10, w=20, h=30;
    cout<<endl;
    cout<<"El area total es de : "<< MiCuarto.calcArea(l,w)<<endl;
    cout<<"El volumen total es de : "<<MiCuarto.calcVolumen(l,w,h)<<endl;

}