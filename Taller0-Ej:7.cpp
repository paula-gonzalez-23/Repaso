#include <iostream>
using namespace std;

int main(){

    int numero = 0;

    cout<<"Ingrese un número entero: "<<endl;
    cin>>numero;

    if (numero %2 == 0) {
        cout<<"Su número es par"<<endl;
    }else {
        cout<<"Su número es impar"<<endl;
    }

    return 0;
}