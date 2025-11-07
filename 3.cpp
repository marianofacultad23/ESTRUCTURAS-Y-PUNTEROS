#include<iostream>
using namespace std;


bool comprobarPar (int numero);

int main (){
int numero ;
cout<< "Ingrese numero entero ";
cin >> numero;
bool numeroP = comprobarPar (numero);
    if (numeroP == true) {
        cout << "Su numero es Par"<< endl;
    }else {
        cout << "Su numero es Impar" << endl;
    }








    return 0;
}


bool comprobarPar (int numero){
if (numero % 2 == 0 ){
return true;
}else return false;



}





