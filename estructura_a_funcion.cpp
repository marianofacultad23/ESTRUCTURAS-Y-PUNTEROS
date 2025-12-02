#include<iostream>
using namespace std;

struct Automovil {

    string modelo ;
    int ano ;
    string color; 

};

void imprimirAutomovil(Automovil &automovil);
void pintarAuto(Automovil &automovil, string color );
int main (){


    Automovil auto1;
    auto1.modelo = "Mustang";
    auto1.color = "Rojo";
    auto1.ano = 2022;

    Automovil auto2;
    auto2.modelo = "Toyota";
    auto2.color = "Azul";
    auto2.ano = 2024;

    cout<< &auto1<< endl;

    pintarAuto(auto1, "Verde");
    imprimirAutomovil(auto1);
    
    //imprimirAutomovil(auto2);
/* 
    cout<< auto1.modelo << endl;
    cout<< auto1.color << endl;
    cout<< auto1.ano <<endl;

    cout<< auto2.modelo << endl;
    cout<< auto2.color << endl;
    cout<< auto2.ano <<endl;
*/



    return 0;
    
}

void imprimirAutomovil(Automovil &automovil){
    cout<< &automovil<< endl;
    cout<< automovil.modelo << endl;
    cout<< automovil.color << endl;
    cout<< automovil.ano <<endl;

}

void pintarAuto(Automovil &automovil, string color ){

automovil.color = color ;
}