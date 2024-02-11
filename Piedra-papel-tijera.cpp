#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    int SeleccionUsuario = 0;
    int SeleccionComputadora;
    int Partidasganadas = 0;
    int Partidasperdidas = 0;
    int Empate = 0;

    
    srand(time(NULL));
    

    for (int partida = 1; partida <= 5; ++partida){
        cout<<"Partida # "<<partida<<endl;

        cout<<"Juego Piedra Papel o Tijera"<<endl;
        cout<<"1. Piedra"<<endl;
        cout<<"2. Papel"<<endl;
        cout<<"3. Tijera"<<endl;

        cout<<"Ingrese la opción con la quiere jugar: "<<endl;
        cin>>SeleccionUsuario;

        SeleccionComputadora = 1+(rand()%(4-1));


        switch (SeleccionComputadora){
        case 1:
            if (SeleccionUsuario == 1){
                cout<<"Empate, ambos pensaron igual y sacaron Piedra :/ "<<endl;
                ++Empate;
            }else if (SeleccionUsuario == 2) {
                cout<<"La computadora eligio Piedra"<<endl;
                cout<<"Ganaste, fuiste más inteligente que la computadora :) "<<endl;
                ++Partidasganadas;
            }else if (SeleccionUsuario == 3){
                cout<<"La computadora eligio Piedra"<<endl;
                cout<<"Perdiste, analiza más y no seas tan apresurado :( "<<endl;
                ++Partidasperdidas;
            }
            break;
        
        case 2:
            if (SeleccionUsuario == 1){
                cout<<"La computadora eligio Papel"<<endl;
                cout<<"Perdiste, analiza más y no seas tan apresurado :( "<<endl;
                ++Partidasperdidas;
            }else if (SeleccionUsuario == 2) {
                cout<<"Empate, ambos pensaron igual y sacaron Papel :/ "<<endl;
                ++Empate;
            }else if (SeleccionUsuario == 3){
                cout<<"La computadora eligio Papel"<<endl;
                cout<<"Ganaste, fuiste más inteligente que la computadora :) "<<endl;
                ++Partidasganadas;
                
            }
            break;

        case 3:
            if (SeleccionUsuario == 1){
                cout<<"La computadora eligio Tijera"<<endl;
                cout<<"Ganaste, fuiste más inteligente que la computadora :)"<<endl;
                ++Partidasganadas;
            }else if (SeleccionUsuario == 2) {
                cout<<"La computadora eligio Tijera"<<endl;
                cout<<"Perdiste, analiza más y no seas tan apresurado :( "<<endl;
                ++Partidasperdidas;
            }else if (SeleccionUsuario == 3){
                cout<<"Empate, ambos pensaron igual y sacaron Papel :/ "<<endl;
                ++Empate;
            }
            break;

        default:
            break;
        }
    }

    cout<<"Juego terminado. Partidas ganadas: "<<Partidasganadas<<", Partidas perdidas: "<<Partidasperdidas<<", Empates: "<<Empate<<endl;

    return 0;

}