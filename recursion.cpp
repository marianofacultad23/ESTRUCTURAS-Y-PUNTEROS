#include<iostream>
using namespace std;

//void caminar (int pasos){
/*
  for (int i = 0 ; i < pasos ; i ++){
        cout << "Dando un paso! " << endl; 

    }

*/
/*if (pasos> 0 ) {
cout << "Dando un paso!" << endl;
caminar (pasos - 1);}*/
  
//}





int factorial (int num);

int main (){
 
//caminar(3);


/*int resultado = factorial (10);
cout << "Resultado: " << resultado << endl;*/ 
cout << "Resultado: " << factorial (10) << endl;
    return 0;
}

int factorial (int num){
int resultado = 1; 
//for (int i = 1 ; i <= num ; i++){
   // resultado *= i ;


//return resultado;
if (num > 1 ){
   return num * factorial (num - 1);
}else {
    return 1;
}
}