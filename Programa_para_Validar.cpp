#include<iostream>
using namespace std;

int obtenerDigito(const int numero);
int sumarDigitosImpares(const string numeroDeTarjeta);
int sumarDigitosPares(const string numeroDeTarjeta);


int main (){

string numeroDeTarjeta;
int resultado = 0 ;


cout << "Ingrese numero de Tarjeta #: ";

cin >> numeroDeTarjeta;

resultado = sumarDigitosPares(numeroDeTarjeta) + sumarDigitosImpares(numeroDeTarjeta);

if(resultado % 10 == 0 ){

    cout << numeroDeTarjeta << " es valido "<< endl;

}else {
    cout << numeroDeTarjeta << " no es valido"<<endl;
}


return 0;
}


int obtenerDigito(const int numero){
return numero % 10 + (numero/10 % 10);
}
int sumarDigitosImpares(const string numeroDeTarjeta){
    int suma = 0 ;
    for ( int i = numeroDeTarjeta.size() -1 ;  i >= 0 ; i -=2 ){
        suma += numeroDeTarjeta[i] - '0'; 
    }
    return suma ;
}
int sumarDigitosPares(const string numeroDeTarjeta){
    int suma = 0 ;
    for ( int i = numeroDeTarjeta.size() -2 ; i>= 0 ; i -=2 ){
        suma += obtenerDigito((numeroDeTarjeta[i] - '0') * 2  );
    }
    return suma ;
}

