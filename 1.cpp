
/*🧩 Ejercicio: Promedio, máximo y mínimo de un arreglo

Enunciado:
Escribe un programa en C++ que:

Pida al usuario ingresar N números enteros (donde N ≤ 100).

Guarde los números en un arreglo.

Use funciones para:

Calcular el promedio.

Encontrar el valor máximo.

Encontrar el valor mínimo.

Muestre los resultados por pantalla.

🧠 Objetivo del ejercicio

Practicar:

Declaración y uso de funciones.

Manipulación de arreglos.

Pasaje de arreglos como parámetros de funciones.

💻 Código completo*/
/*
#include <iostream>
using namespace std;

// Prototipos de funciones
float calcularPromedio(int arr[], int n);
int encontrarMaximo(int arr[], int n);
int encontrarMinimo(int arr[], int n);

int main() {
    int n;
    int numeros[100];

    cout << "¿Cuántos números desea ingresar? (máx 100): ";
    cin >> n;

    // Validación simple
    if (n <= 0 || n > 100) {
        cout << "Cantidad inválida.\n";
        return 1;
    }

    // Ingreso de datos
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Llamada a funciones
    float promedio = calcularPromedio(numeros, n);
    int maximo = encontrarMaximo(numeros, n);
    int minimo = encontrarMinimo(numeros, n);

    // Resultados
    cout << "\nResultados:\n";
    cout << "Promedio: " << promedio << endl;
    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;

    return 0;
}

// Definición de funciones
float calcularPromedio(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return (float)suma / n;
}

int encontrarMaximo(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int encontrarMinimo(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}


🧾 Ejemplo de ejecución
¿Cuántos números desea ingresar? (máx 100): 5
Ingrese el número 1: 4
Ingrese el número 2: 7
Ingrese el número 3: 2
Ingrese el número 4: 9
Ingrese el número 5: 5

Resultados:
Promedio: 5.4
Máximo: 9
Mínimo: 2
*/







#include <iostream>
using namespace std;

float calcularPromedio(int arr[],int n);
int numeroMaximo(int arr[],int n );
int numeroMinimo(int arr[],int n );




int main(){

int n ;
int numeros[100];

//Ingreso de Datos
cout << "Cuantos numeros desea ingresar?"<< endl;
cin>> n ;
if (n <= 0 || n >= 100){
    
    cout<< "Numero Inválido"<<endl;
    return 1;
    
}

for (int i = 0 ;i<n ; i++){

    cout << "Ingrese el numero " << i + 1 << " : ";
cin>> numeros [i];

}
/*
cout<< "Sus numeros son"<<endl;
for (int i = 0 ;i<n ; i++)

cout<<  numeros [i]<< endl;
*/



//Llamada de Funciones

float promedio = calcularPromedio(numeros,n);
int maximo = numeroMaximo(numeros,n);
int minimo = numeroMinimo(numeros,n);

//Resultados
cout << "Resultados"<< endl;
cout<< promedio<<endl;
cout<< maximo <<endl;
cout<< minimo <<endl;

    return 0;



}


  
//Desarrollo de Funciones

float calcularPromedio(int arr[], int n) {
    int suma = 0 ;
    for ( int i ; i <n ; i++){
       suma += arr[i];

}
return (float)suma / n ;

};
int numeroMaximo(int arr[],int n ){
int max = arr[0] ;
for (int i= 0 ;i <n ; i ++){
    if ( arr[i] > max )
    max = arr[i];
  
    return max;
}

}

int numeroMinimo(int arr[],int n ){
int min = arr[0] ;
for (int i = 0 ; i > n ; i++ ){
if (arr[i] < min ){
    min = arr[i];}

return min ;




}

}


