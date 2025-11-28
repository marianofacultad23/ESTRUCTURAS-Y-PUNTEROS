#include<iostream>
using namespace std;

int main (){

/*int *pNum = NULL;

pNum = new int;

*pNum = 25 ;

cout << "Direccion: " << pNum << endl;
cout << "Valor: " << *pNum << endl; 

delete pNum ;
 
cout << "Direccion: " << pNum << endl;*/

char *pNotas = NULL;
int tam;

cout << "Cuantas Notas ingresara?: ";
cin >> tam;

pNotas = new char[tam];

for(int i = 0 ; i < tam ; i++ ){
cout << "Ingrese una Nota # "<< i + 1 << ": "<< endl;
cin >> pNotas[i]; 
}
for(int i = 0 ; i < tam ; i++ ){

cout << pNotas[i] << " "; 


}
delete[]  pNotas; 

    return 0;
}