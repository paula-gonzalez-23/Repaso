#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int num1 = 0;
    int num2 = 0;
    int opcion = 0;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;
    int cuadrado1 = 0;
    int cuadrado2 = 0;
    double raiz1 = 0;
    double raiz2 = 0;
    string respuesta;

    cout<<"Bienvenido a la Calculadora: "<<endl;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicación"<<endl;
    cout<<"4. División"<<endl;
    cout<<"5. Cuadrado"<<endl;
    cout<<"6. Raiz Cuadrada"<<endl;

    do {

        cout<<"Ingrese la opción que desea realizar: "<<endl;
        cin>>opcion;

        cout<<"Ingrese el primer número: "<<endl;
        cin>>num1;

        cout<<"Ingrese el segundo número: "<<endl;
        cin>>num2;

        
        switch(opcion){
            case 1:
                suma = num1 + num2;
                cout<<"El resultado de su suma es: "<<suma<<endl;
                break;

            case 2:
                resta = num1 - num2;
                cout<<"El resultado de su resta es: "<<resta<<endl;
                break;

            case 3:
                multiplicacion = num1*num2;
                cout<<"El resultado de su multiplicación es: "<<multiplicacion<<endl;
                break;

            case 4:
                division = num1/num2;
                cout<<"El resultado de su división es: "<<division<<endl;
                break;
            
            case 5: 
                cuadrado1 = num1*num1;
                cuadrado2 = num2*num2;
                cout<<"El resultado del cuadrado del número uno es: "<<cuadrado1<<endl;
                cout<<"El resultado del cuadrado del número dos es: "<<cuadrado2<<endl;
                break;
            
            case 6:
                raiz1 = sqrt(num1);
                raiz2 = sqrt(num2);
                cout<<"El resultado de la raiz del número uno es: "<<raiz1<<endl;
                cout<<"El resultado de la raiz del número dos es: "<<raiz2<<endl;
                break;

            default:
                break;

        }

        cout<<"Desea realizar mas operaciones? (si/no): "<<endl;
        cin>>respuesta;

    } while (respuesta == "si" || respuesta == "SI");

    return 0;
}