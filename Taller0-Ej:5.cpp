#include <iostream>
using namespace std;

int main() {
    
    int Distancia = 0;
    int Velocidad1 = 0;
    int Velocidad2 = 0; 
    int Tiempo = 0;

    cout<<"Ingrese la distancia entre las dos ciudades: ";
    cin>>Distancia;
    
    cout<<"Ingrese la velocidad del primer carro: ";
    cin>>Velocidad1;

    cout<<"Ingrese la velocidad del segundo carro: ";
    cin>>Velocidad2;

    Tiempo = Distancia / (Velocidad1 + Velocidad2);
    
    cout<<"El tiempo en el que los automoviles se encuentran es: "<<Tiempo<<" horas"<<endl;

    return 0;
}