#include<iostream>
using namespace std;

int main (){

string estudiantes []= { "Blas", "Pedro", "Pablo", "Roque","Rita"};
for( string estudiante : estudiantes ){
    cout << estudiante << endl;

}

int notas [] = { 9,10,7,8,5,6};
for(int nota :notas ){
    cout << nota << endl;
}


    return 0;
}