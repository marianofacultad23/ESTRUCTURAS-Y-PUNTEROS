#include<iostream>
using namespace std;

int main (){

string comidas [5];
int tam = sizeof (comidas)/sizeof(comidas[0]);
string temp ;
for(int i = 0; i < tam ; i++){

    cout << "Ingrese tu comida favorita o 's' para salir # " << i + 1 << ": "<< endl;

    getline (cin , temp);

    if(temp == "s" ){
        break;
    }else{
        comidas[i] = temp ;
    }
   
}
cout << "Te gustan los siguientes elementos: " << endl;
    for (int i = 0; !comidas[i].empty(); i++){
        cout<<i+1 << ". " <<comidas[i] << endl;
    }
    return 0;
}