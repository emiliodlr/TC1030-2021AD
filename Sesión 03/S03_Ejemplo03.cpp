#include <iostream>
using namespace std;

class Animal{
    public:
        Animal(int _edad){
            edad=_edad;
        }

        void FijaEdad(int _edad){
            edad=_edad;
        }

        int regresaEdad(){
            return edad;
        }
    private:
        int edad;
};

class Perro:public Animal{
    public:
        Perro(int _edad):Animal(_edad){
            edad=_edad;
        }
    private:
        int edad;
};

class Gato:public Animal{
    public:
        Gato(int _edad, float _peso):Animal(_edad){
            peso=_peso;
        }
        float resgresaPeso(){
            return peso;
        }
    private:
        float peso;
};

int main(){
    Perro Chihuahua(3);
    cout<<"Perro: "<<Chihuahua.regresaEdad()<<endl;
    Chihuahua.FijaEdad(10);
    cout<<"Perro: "<<Chihuahua.regresaEdad()<<endl;

    Gato Angora(4, 3.65);
    cout<<"Gato: "<<Angora.regresaEdad()<<"  "<<Angora.resgresaPeso();
                
}