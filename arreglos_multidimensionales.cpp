#include<iostream>
using namespace std;

int main (){

string autos [][3]= {{"Toyota","Ford","BMW"},
                     {"Mercedes-Benz","VW", "Audi"},
                     {"Honda","Chevrolet","Ferrari"}};


/*
cout <<  autos [0][0] << " ";
cout <<  autos [0][1] << " ";
cout <<  autos [0][2] << " "<< endl;

cout <<  autos [1][0] << " ";
cout <<  autos [1][1] << " ";
cout <<  autos [1][2] << " " << endl;

cout <<  autos [2][0] << " ";
cout <<  autos [2][1] << " ";
cout <<  autos [2][2] << " " << endl;
*/

//int filas =sizeof(autos)/sizeof(string);
int filas =sizeof(autos)/sizeof(autos[0]);
int columnas = sizeof(autos[0])/sizeof(autos[0][0]);

for (int i = 0 ; i < filas ; i++){
   for(int j = 0 ; j < columnas; j++ ){
    cout << autos [i][j] << " ";  
   } 
    cout << endl ;
}


return 0;
}