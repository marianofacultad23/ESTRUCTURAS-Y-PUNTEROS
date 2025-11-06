// Buscar Elementos de un arreglo

#include<iostream>
using namespace std;

bool buscarNumero(int arr[], int n, int valor);
int buscarArreglo (int arr[], int tam , int n);
int main (){
    int valor ;
    int n ;
    int numeros[]= {1,2,3,4,5,6,7,8,9,10};
    int tam= sizeof(numeros)/sizeof(0);
    int indice ;

    cout << "Ingrese Numero a Buscar: "<<endl;
    cin >> valor ;

    indice = buscarArreglo(numeros,tam,valor);
    if(indice != -1){
        cout << "El numero " << valor << " se encuentra en el indice " << indice << endl;
    }
    else {
        cout<< "El numero " << valor << " no esta en el arreglo "<< endl ; 
    }
    

    if (buscarNumero (numeros, n, valor)){
        cout << "El Numero esta en el arreglo ";
    }else cout <<  "El Numero no esta en el arreglo " ;

    return 0;

}

bool buscarNumero(int arr[], int n ,int valor){
for (int i = 0; i<n; i++){
    if (arr[i] == valor)
    return true  ;
}
return false;
}

int buscarIndice (int arr[], int tam , int valor){
for (int i = 0 ; i < tam ; i++ ){
     if (arr[i] == valor)
     return i ;}
    return -1;
}




