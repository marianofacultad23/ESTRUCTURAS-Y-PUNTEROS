#include<iostream>
using namespace std;

int main (){

   
/*
  cout << estudiantes [0] << endl; 
  cout << estudiantes [1] << endl; 
  cout << estudiantes [2] << endl; 

*/
 string estudiantes [] = {"Blas","Pedro","Pablo","Roque","Rita"};

 int longitud = sizeof(estudiantes)/sizeof (string);
 for (int i = 0 ; i < longitud; i++){
    cout << estudiantes [i] << endl;
 };
   

char notas[] = { 'A','B','C','D','F'};
int longitud_2 =sizeof(notas)/ sizeof(char);
for (int j = 0 ; j < longitud_2; j++)
cout << notas [j]<< endl;

    return 0;
}