#include<iostream>
using namespace std;
enum Dia { lunes = 0 , martes = 1, miercoles = 2 ,jueves = 3, viernes = 4, sabado = 5 , domingo = 6 };
enum Color{ rojo = 'r', azul =  'a', negro = 'n' , verde = 'v', blanco= 'b' };

int main (){


    Dia hoy = lunes;
    switch (hoy)
    {
    case lunes:
        cout << "Hoy es Lunes" << endl; 
        break;
    case martes:
        cout << "Hoy es Martes" << endl; 
        break;
    case miercoles:
        cout << "Hoy es Miercoles" << endl; 
        break;
    case jueves:
        cout << "Hoy es Jueves" << endl; 
        break;
     case viernes:
        cout << "Hoy es Viernes" << endl; 
        break;
    case sabado:
        cout << "Hoy es Sabado" << endl; 
        break;
    case domingo:
        cout << "Hoy es Domingo" << endl; 
        break;
   
    }

    return 0;
    
}