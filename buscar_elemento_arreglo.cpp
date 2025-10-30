#include<iostream>
using namespace std;
/*
int buscarArreglo(int arreglo [],int tam, int elemento );

int main (){

int numeros[]={1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
    int tam = sizeof(numeros)/sizeof(int);
    int indice ;
    int miNumero ;

    cout<< "Ingrese el elemento a buscar"<< endl;
    cin >> miNumero;


    indice = buscarArreglo(numeros,tam,miNumero);
    if(indice != -1){
        cout << "El numero " << miNumero << " se encuentra en el indice " << indice << endl;
    }
    else {
        cout<< "El numero " << miNumero << " no esta en el arreglo "<< endl ; 
    }
    return 0;



}

int buscarArreglo(int arreglo [],int tam, int elemento ){
 
    for(int i=0 ; i < tam ; i++){
        if (arreglo [i] == elemento )
        return i;
    }
        return -1;
}


*/
    int buscarArreglo(string comida [],int tam, string elemento );
    int main (){
    string comida[]={"PIZZA", "HAMBURGUESA", "PANCHOS"};
    int tam = sizeof(comida)/sizeof(string);
    int indice ;
    string miComida ;

    cout<< "Ingrese la comida a buscar"<< endl;
    getline (cin , miComida);


    indice = buscarArreglo(comida,tam, miComida);
    if(indice != -1){
        cout << "La comida " <<  miComida << " se encuentra en el indice " << indice << endl;
    }
    else {
        cout<< "La comida " << miComida << " no esta en el arreglo "<< endl ; 
    }
    return 0;



}

int buscarArreglo(string arreglo [],int tam, string elemento ){
 
    for(int i=0 ; i < tam ; i++){
        if (arreglo [i] == elemento )
        return i;
    }
        return -1;
}


    