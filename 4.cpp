#include<iostream>
using namespace std;

int comprobarPares (int numeros[],int pares);



int main (){


    
int numeros [] = {1,2,3,4,5,6,7,8,9,10};

int tam = sizeof(numeros)/sizeof(int);


/*for (int i = 0; i < tam ; i++){
    cout<< numeros[i]<< endl;

}*/
 
int pares = comprobarPares ( numeros, pares);
int i;
for (int i = 0 ; i<tam ;i++){
if (numeros[i] % 2 == 0){
        cout<< "Este numero "<< numeros[i] << " es Par"<< endl;}
else
        {cout << "Este numero " << numeros[i] << " es Impar"<< endl;}


}


    return 0;


}

int comprobarPares (int numeros[],int pares){

int tam = sizeof(numeros)/sizeof(int);
for (int i = 0 ; i<tam ;i++){
    if (numeros[i] % 2 == 0 )
    {return pares;} 

       
    
}



}
