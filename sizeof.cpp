#include<iostream>
using namespace std;

// sizeof
int main (){

double numero = 2.5;
    cout << sizeof(numero)<< " bytes "<< endl ;
    string nombre = "Mariano";
    cout << sizeof(nombre)<< " bytes "<< endl ;
    char nota = 'A' ;
    cout << sizeof(nota) << " bytes "<< endl;
    bool estudiante = true ;
    cout << sizeof(estudiante) << " bytes "<< endl;
    char calificaciones[] = {'a', 'b', 'c' , 'd','f'}; 
    cout << sizeof(calificaciones) << " bytes "<< endl;
    cout << sizeof(calificaciones)/sizeof(calificaciones[0])<< " elementos posee el arreglo"<< endl;
    cout << sizeof(calificaciones)/sizeof(char)<< " elementos posee el arreglo"<< endl;
    string  estudiantes [] = {"Estudiante_1","Estudiante_2","Estudiante_3" };
    cout << sizeof (estudiantes)/sizeof(estudiantes[0])<< " estudiantes"<< endl;
    cout << sizeof (estudiantes)/sizeof(string)<< " estudiantes"<< endl;
    cout << sizeof (estudiantes) << " bytes "<<endl;
    return 0;
}