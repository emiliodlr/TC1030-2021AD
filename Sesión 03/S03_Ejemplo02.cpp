#include <iostream>
using namespace std;

class Operacion{
    public:
        void pedir1();
        void pedir2();
        void mostrarResultado();
    protected:
        int valor1;
        int valor2;
        int resultado;
};

class Suma:public Operacion{
    public:
        void procesa();          // dentro suma dos elementos
};

class Resta:public Operacion{
    public:
        void procesa();
};

// ++++++++++++++++++++++++++++++++++++

void Operacion::pedir1(){
    cout<<"Ingresa el primer valor: ";
    cin>> valor1;
}

void Operacion::pedir2(){
    cout<<"Ingresa el segundo valor: ";
    cin>> valor2;
}

void Operacion::mostrarResultado(){
    cout<<"Resultado: "<<resultado<<"\n";
}
// ......................

void Suma::procesa(){
    resultado=valor1+valor2;
}

void Resta::procesa(){
    resultado=valor1-valor2;
}

// +++++++++++++++++++++++++++++++++++

int main(){

    Suma suma1;
    suma1.pedir1();
    suma1.pedir2();
    suma1.procesa();
    suma1.mostrarResultado();


    Resta resta1;
    resta1.pedir1();
    resta1.pedir2();
    resta1.procesa();
    resta1.mostrarResultado();
    

}