#include <iostream>
using namespace std;

int main(){

    float ImpuestoPredial = 0;
    float Descuento;
    float Total = 0;

    cout<<"Secretaria de Hacienda"<<endl;

    cout<<"Ingrese el valor de su impuesto predial: "<<endl;
    cin>>ImpuestoPredial;

    if (ImpuestoPredial > 60000 && ImpuestoPredial <= 150000){
        Descuento = ImpuestoPredial*0.2;
        Total = ImpuestoPredial-Descuento;
        cout<<"Su valor a pagar con descuento es: "<<Total<<endl;
    }else if (ImpuestoPredial > 150000 && ImpuestoPredial <= 300000){
        Descuento = ImpuestoPredial*0.3;
        Total = ImpuestoPredial-Descuento;
        cout<<"Su valor a pagar con descuento es: "<<Total<<endl;
    }else if (ImpuestoPredial > 300000 && ImpuestoPredial <= 800000){
        Descuento = ImpuestoPredial*0.4;
        Total = ImpuestoPredial-Descuento;
        cout<<"Su valor a pagar con descuento es: "<<Total<<endl;
    }else if (ImpuestoPredial > 800000){
        Descuento = ImpuestoPredial*0.5;
        Total = ImpuestoPredial-Descuento;
        cout<<"Su valor a pagar con descuento es: "<<Total<<endl;
    }

    return 0;

}