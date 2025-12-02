#include<iostream>
using namespace std;

struct estudiantes {
string nombre;
double promedio;
bool inscriptos;
};



int main (){

estudiantes estudiante_1;

estudiante_1.nombre = "Mario";
estudiante_1.promedio = 8.4;
estudiante_1.inscriptos = true;

estudiantes estudiante_2;

estudiante_2.nombre = "Monica";
estudiante_2.promedio = 9.3;
estudiante_2.inscriptos = true;

estudiantes estudiante_3;

estudiante_3.nombre = "Juan";
estudiante_3.promedio = 9.3;
estudiante_3.inscriptos = true;


cout << estudiante_1.nombre<< endl;
cout << estudiante_1.promedio<< endl;
cout << estudiante_1.inscriptos<< endl;

cout << estudiante_2.nombre<< endl;
cout << estudiante_2.promedio<< endl;
cout << estudiante_2.inscriptos<< endl;

cout << estudiante_3.nombre<< endl;
cout << estudiante_3.promedio<< endl;
cout << estudiante_3.inscriptos<< endl;





    return 0;
    
}