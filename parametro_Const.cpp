#include<iostream>
using namespace std;

void imprimirNombre(const string &nombre,const int &edad );


int main (){

string nombre = "Mariano";
int edad = 28 ;
imprimirNombre(nombre,edad);

    return 0;
}

void imprimirNombre(const string &nombre,const int &edad ){
cout << "Nombre: " << nombre << endl;
cout << "Edad: " << edad << endl;
}