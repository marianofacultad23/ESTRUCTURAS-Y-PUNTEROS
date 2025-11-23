#include<iostream>
using namespace std;
//Valor Nulo: un valor especial que significa que algo no tiene valor
//nullptr : esta es una palabra clave que significa un puntero nulo

int main (){

int *puntero = nullptr;
int x = 123 ;

puntero = &x;


//cout << *puntero << endl;
if(puntero == nullptr){
    cout << "La direccion no se asigno"<<endl;
}else{
    cout << "La direccion fue asignada"<<endl;
    cout << *puntero<< endl;
}

    return 0;
}