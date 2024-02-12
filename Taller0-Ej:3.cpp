#include <iostream>
using namespace std;

int main()
{

    float sueldo = 0;
    float Aumento = 0;
    float Nuevosueldo = 0;


    cout<<"Ingrese el valor de su sueldo actual: "<<endl;
    cin>>sueldo;

    if (sueldo < 1000000){
        Aumento = sueldo*0.15;
        Nuevosueldo = sueldo + Aumento;
        cout<<"Su nuevo sueldo es: "<<Nuevosueldo<<endl;
        
    }else {
        cout<<"Su sueldo es mayor a 1000000, no tiene aumento :("<<endl;
    }

    return 0;
}