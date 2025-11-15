#include<iostream>
using namespace std;

int main (){

string preguntas [] = {"1. En que anio se creo C++? ", 
                       "2. Quien inventó C++? ",
                       "3. Cual es el predecesor de C++?  ",
                       "4. Es la Tierra plana? "};

string opciones [] [4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                          {"A. Guido Van Rossum ", "B. Bjarne Stroustrup " , "C. Bill Gates ", "D. Steve Jobs"},
                          {"A. C", "B. C#" , "C. Java", "D. Python"},
                          {"A. Si ", "B. No", "C. Tal vez", "D. A veces"} };

    
char respuestasCorrectas[] = {'C','B','A','B'};

int tam = sizeof(preguntas)/sizeof(preguntas[0]);
char respuesta;
int puntaje = 0;



for (int i = 0; i < tam; i++  ){
cout<< "###########################"<< endl;
cout << preguntas[i]<< endl;

cout<< "###########################"<< endl;
for (int j = 0; j < sizeof(opciones[i])/sizeof(opciones[i][0]); j++  )
cout << opciones [i][j]<< endl;

cin >> respuesta;
respuesta = toupper(respuesta);

if (respuesta == respuestasCorrectas[i]){
    cout << "Respuesta Correcta"<< endl;
    puntaje ++;
}else{
    cout << "Respuesta Incorrecta"<< endl;
    cout << "Respuesta correcta: "<< respuestasCorrectas[i]<< endl;
}
}
cout<< "***************************"<<endl;
cout<< "*         RESULTADO       *"<<endl;
cout<< "***************************"<<endl;

cout<<"PREGUNTAS: "<< tam << endl;
cout<<"RESPUESTAS CORRECTAS: " << puntaje << endl;
cout<< "PUNTAJE: " << (puntaje/(double)tam)*100 <<" % " << endl;
    return 0;
}