#include<iostream>
using namespace std;

int main (){
    string nombre = "Mariano";
    int edad = 28;
    bool estudiante = true ;


    cout << &nombre << endl;
    cout << &edad << endl;
    cout << &estudiante << endl;

 //Hexadecimal   -  Decimal
// 0xf2c09ff760  -  1042613794656
// 0xf2c09ff75c  -  1042613794652
// 0xf2c09ff75b  -  1042613794651
    return 0;
}