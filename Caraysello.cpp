#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    int aleatorio = 0;
    int SeleccionUsuario = 0;

    cout<<"Juego de Cara y Sello"<<endl;
    cout<<"1. Cara"<<endl;
    cout<<"2. Sello"<<endl;


    cout<<"Ingrese la opción con la quiere jugar: "<<endl;
    cin>>SeleccionUsuario;

    srand(time(NULL));
    aleatorio = 1+(rand()%(3-1));

    switch (aleatorio){
    case 1:
        if (SeleccionUsuario == 1) {
            cout << "El aleatorio es Cara" << endl;
            cout << "¡Felicitaciones! Ha ganado" << endl;
        } else {
            cout << "El aleatorio es Cara" << endl;
            cout << ":( Sigue Intentando, esta no fue tu mejor elección" << endl;
        }
        break;

    case 2:
        if (SeleccionUsuario == 2) {
            cout << "El aleatorio es Sello" << endl;
            cout << "¡Felicitaciones! Ha ganado" << endl;
        } else {
            cout << "El aleatorio es Sello" << endl;
            cout << ":( Sigue Intentando, esta no fue tu mejor elección" << endl;
        }
        break;
        
    default:
        break;
    }

    return 0;
}