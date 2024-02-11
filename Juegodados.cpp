#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    int Lanzamiento1 = 0;
    int Lanzamiento2 = 0;
    int Lanzamiento3 = 0;
    int Lanzamiento4 = 0;
    int Resultado1 = 0;
    int Resultado2 = 0;
    int Dado1 = 0;
    int Dado2 = 0;
    int Dado3 = 0;
    int Dado4 = 0;

    srand(time(NULL));
    Dado1 = 1+(rand()%(7-1));
    Dado2 = 1+(rand()%(7-1));
    Dado3 = 1+(rand()%(7-1));
    Dado4 = 1+(rand()%(7-1));

    cout<<"Juego de los Dados"<<endl;

    cout<<"Primer Lanzamiento"<<endl;

    Lanzamiento1 = Dado1;
    Lanzamiento2 = Dado2;

    Resultado1 = Lanzamiento1 + Lanzamiento2;

    cout<<"El primer lanzamiento da como resultado: "<<Lanzamiento1<<endl;
    cout<<"El segundo lanzamiento da como resultado: "<<Lanzamiento2<<endl;
    cout<<"El resultado de la suma de los dados es: "<<Resultado1<<endl;

    if (Resultado1 == 7 || Resultado1 == 11){
        cout<<"Felicitaciones ¡Has ganado!"<<endl;
    }else if (Resultado1 == 2 || Resultado1 == 3 || Resultado1 == 12){
        cout<<"Oh noooo has perdido :("<<endl;
    }else {
        cout<<"El jugador pasa a tiros secundarios"<<endl;

        Lanzamiento3 = Dado3;
        Lanzamiento4 = Dado4;

        Resultado2 = Lanzamiento3 + Lanzamiento4;

        cout<<"El primer lanzamiento da como resultado: "<<Lanzamiento3<<endl;
        cout<<"El segundo lanzamiento da como resultado: "<<Lanzamiento4<<endl;
        cout<<"El resultado de la suma de los dados es: "<<Resultado2<<endl;

        if (Resultado2 == Resultado1){
            cout<<"Felicitaciones ¡Has ganado!"<<endl;
        }else if (Resultado2 == 7){
            cout<<"Oh noooo has perdido :("<<endl;
        }else {
            cout<<"Game over :("<<endl;
        }

    }


    return 0;
}