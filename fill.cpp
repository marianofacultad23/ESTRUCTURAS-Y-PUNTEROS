#include<iostream>
using namespace std;

//fill(inicio,final,valor)


int main (){

const int tam = 9;

string comidas [tam];
fill(comidas, comidas + tam/3, "Pizza");
fill(comidas + tam/3, comidas + tam/3 *2, "Hamburguesa");
fill(comidas + tam /3*2 , comidas + tam, "Panchos");
for (string comida:comidas ){
cout << comida << endl;
}


    return 0;
}