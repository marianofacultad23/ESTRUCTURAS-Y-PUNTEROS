#include<iostream>
#include<ctime>
using namespace std;

void dibujarTablero(char *espacios);
void turnoJugador(char *espacios,char jugador);
void turnoComputadora(char *espacios,char computadora);
bool verificarGanador(char *espacios,char jugador,char computadora);
bool verificarEmpate(char *espacios);


int main (){

    char espacios [9]= {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char jugador = 'X';
    char computadora = 'O';
    bool ejecutando= true ;

    dibujarTablero(espacios);
    

    while(ejecutando == true){
        turnoJugador(espacios, jugador);
        dibujarTablero(espacios);
    if (verificarGanador(espacios,jugador,computadora)){
        ejecutando = false;
        break;
       }
    if (verificarEmpate(espacios)){
            ejecutando = false;
            break;
        }
       

        turnoComputadora(espacios,computadora);
        dibujarTablero(espacios);


    if (verificarGanador(espacios,jugador,computadora)){
        ejecutando = false;
        break;
       }
    if (verificarEmpate(espacios)){
            ejecutando = false;
            break;
        }

    }

    cout<< " MUCHAS GRACIAS POR JUGAR!!!!"<< endl;
    return 0;
}


void dibujarTablero(char *espacios){

    cout<< endl;
    cout << "     |     |     "<< endl;
    cout << "  "<<espacios[0] <<"  |  "<<espacios[1] <<"  |  "<<espacios[2] <<"   "<< endl;
    cout << "_____|_____|_____"<< endl;
    cout << "     |     |     "<< endl;
    cout << "  "<<espacios[3] <<"  |  "<<espacios[4] <<"  |  "<<espacios[5] <<"   "<< endl;
    cout << "_____|_____|_____"<< endl;
    cout << "     |     |     "<< endl;
    cout << "  "<<espacios[6] <<"  |  "<<espacios[7] <<"  |  "<<espacios[8] <<"   "<< endl;
    cout << "     |     |     "<< endl;
    cout<< endl;
}

void turnoJugador(char *espacios,char jugador){
int numero;
do {
cout <<  "Ingrese  una casilla a jugar (1-9) " << endl;
cin >> numero;
numero-- ;
if (espacios[numero]== ' '){
espacios [numero] = jugador;
break;

}

}while(!numero > 0 || !numero < 8 );

}
void turnoComputadora(char *espacios,char computadora){

int numero;
srand(time(0));
while (true){

    numero = rand () % 9 ;
if (espacios[numero]== ' ' ){
    espacios[numero]= computadora;
    break;
}
}
}

bool verificarGanador(char *espacios,char jugador,char computadora){
if ((espacios[0]!= ' ') && (espacios[0] == espacios[1]) && (espacios[1] == espacios [2])){
    espacios[0] == jugador ? cout << "Ganaste!" <<endl : cout << "Perdiste!"<< endl;

}
else if ((espacios[3]!= ' ') && (espacios[3] == espacios [4]) && (espacios[4] == espacios [5])){
    espacios[0] == jugador ? cout << "Ganaste!" <<endl : cout << "Perdiste!"<< endl;

}
else if ((espacios[6]!= ' ') && (espacios[6] == espacios [7]) && (espacios[7] == espacios [8])){
    espacios[0] == jugador ? cout << "Ganaste!" <<endl : cout << "Perdiste!"<< endl;

}
else if ((espacios[0]!= ' ') && (espacios[0] == espacios [3]) && (espacios[3] == espacios [6])){
    espacios[0] == jugador ? cout << "Ganaste!" <<endl : cout << "Perdiste!"<< endl;

}
else if ((espacios[1]!= ' ') && (espacios[1] == espacios [4]) && (espacios[4] == espacios [7])){
    espacios[0] == jugador ? cout << "Ganaste!" <<endl : cout << "Perdiste!"<< endl;

}
else if ((espacios[2]!= ' ') && (espacios[2] == espacios [5]) && (espacios[5] == espacios [8])){
    espacios[0] == jugador ? cout << "Ganaste!" <<endl : cout << "Perdiste!"<< endl;

}
else if ((espacios[0]!= ' ') && (espacios[0] == espacios [4]) && (espacios[4] == espacios [8])){
    espacios[0] == jugador ? cout << "Ganaste!" <<endl : cout << "Perdiste!"<< endl;

}
else if ((espacios[2]!= ' ') && (espacios[2] == espacios [4]) && (espacios[4] == espacios [6])){
    espacios[0] == jugador ? cout << "Ganaste!" <<endl : cout << "Perdiste!"<< endl;

}
else {return false;}


return true;

}
bool verificarEmpate(char *espacios){
for (int i = 0 ; i < 9; i++){
    if (espacios[i]== ' '){
        return false ;
    }

}

return true;

}