#include<iostream>
using namespace std;

void clasificar(int arreglo[], int tam);


int main (){

int arreglo [] = {10 , 9 , 1 , 2 , 8 , 3 , 7 , 4 , 6 , 5 };
int tam = sizeof(arreglo)/sizeof(int);
for (int elementos : arreglo) {
cout << elementos << " "<< endl;

clasificar(arreglo, tam);
for (int elementos : arreglo) {
cout << elementos << " "<< endl;


}


    return 0;
}
}

void clasificar(int arreglo[], int tam){
int temp ;

for (int i = 0; i < ( tam - 1); i++  ){

    for (int j = 0 ; j < (tam - i - 1 ); j++){

        if (arreglo [j] > arreglo[j+1] ){
            temp = arreglo [j];
            arreglo [j] = arreglo[j+1];
             arreglo[j+1] = temp; 
        }


}


}
}
