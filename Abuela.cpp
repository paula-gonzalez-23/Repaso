#include <iostream>
#include <math.h>
using namespace std;

int main(){


    float Centigrados = 0;
    float Fahrenheit = 0;

    cout<<"Convertidor de Fahrenheit a Centigrados"<<endl;
    cout<<"Ingrese el valor de la temperatura que aparece en su receta: "<<endl;
    cin>>Fahrenheit;

    Centigrados = (Fahrenheit-32)/1.8;
    cout<<"Lo que tiene que colocar en su horno es: "<<Centigrados<<endl;
    cout<<"Si la respuesta sale con muchos números, colocar en el horno los números antes del punto"<<endl;

    return 0;
}