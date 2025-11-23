#include<iostream>
using namespace std;

int main (){

string nombre = "Mariano";
string *pNombre = &nombre ;

int edad = 24;
int *pEdad = &edad;

string pizzasGratis[5]= {"pizza_1","pizza_2","pizza_3","pizza_4","pizza_5"};
string *pPizzasGratis = pizzasGratis;


cout<< *pNombre <<endl;
cout<< *pEdad <<endl;
cout<< *pPizzasGratis <<endl;
    return 0;
}