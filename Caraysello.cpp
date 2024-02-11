#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    int aleatorio = 0;
    int SeleccionUsuario = 0;
    int Partidasganadas = 0;
    int Partidasperdidas = 0;

    srand(time(NULL));

    for (int partida = 1; partida <= 5; ++partida){
        cout<<"Partida # "<<partida<<endl;

        cout<<"Juego de Cara y Sello"<<endl;
        cout<<"1. Cara"<<endl;
        cout<<"2. Sello"<<endl;


        cout<<"Ingrese la opción con la quiere jugar: "<<endl;
        cin>>SeleccionUsuario;

        
        aleatorio = 1+(rand()%(3-1));

        switch (aleatorio){
        case 1:
            if (SeleccionUsuario == 1) {
                cout << "El aleatorio es Cara" << endl;
                cout << "¡Felicitaciones! Ha ganado" << endl;
                ++Partidasganadas;
            } else {
                cout << "El aleatorio es Cara" << endl;
                cout << ":( Sigue Intentando, esta no fue tu mejor elección" << endl;
                ++Partidasperdidas;
            }
            break;

        case 2:
            if (SeleccionUsuario == 2) {
                cout << "El aleatorio es Sello" << endl;
                cout << "¡Felicitaciones! Ha ganado" << endl;
                ++Partidasganadas;
            } else {
                cout << "El aleatorio es Sello" << endl;
                cout << ":( Sigue Intentando, esta no fue tu mejor elección" << endl;
                ++Partidasperdidas;
            }
            break;
            
        default:
            break;
        }
    }

    cout<<"Juego terminado. Partidas ganadas: "<<Partidasganadas<<", Partidas perdidas: "<<Partidasperdidas<<endl;

    return 0;
}