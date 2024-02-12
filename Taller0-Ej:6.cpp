#include <iostream>
using namespace std;

int main(){

    int numero = 1;
    int suma = 0;

    while (numero <= 100){
        suma += numero;
        numero++;
    }

    cout<<"La suma de los numeros del 1 al 100 es: "<<suma<<endl;

    return 0;
}