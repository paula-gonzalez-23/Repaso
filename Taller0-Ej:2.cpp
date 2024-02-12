#include <iostream>
using namespace std;

int main(){

    int tipoplan = 0;
    float compra = 0;
    float Descuento = 0;
    float Total = 0;

    cout<<"Telefonia Celular"<<endl;
    cout<<"1. Prepago"<<endl;
    cout<<"2. Pospago"<<endl;

    cout<<"Seleccione el tipo de plan que desea adquirir: "<<endl;
    cin>>tipoplan;

    cout<<"Ingrese el valor de los equipos adquiridos: "<<endl;
    cin>>compra;

    switch(tipoplan){
    case 1: 
        if(compra > 100000 && compra <= 900000){
            Descuento = compra*0.1;
            Total = compra-Descuento;
            cout<<"Su valor neto es de: "<<Total<<endl;
        }else if (compra >= 1000000){
            Descuento = compra*0.2;
            Total = compra-Descuento;
            cout<<"Su valor neto es de: "<<Total<<endl;
        }

    break;

    case 2: 
        if (compra < 500000){
            Descuento = compra*0.15;
            Total = compra-Descuento;
            cout<<"Su valor neto es de: "<<Total<<endl;
        }else if (compra >= 500000 && compra <= 1000000 ){
            Descuento = compra*0.20;
            Total = compra-Descuento;
            cout<<"Su valor neto es de: "<<Total<<endl;
        }else if (compra > 1000000){
            Descuento = compra*0.25;
            Total = compra-Descuento;
            cout<<"Su valor neto es de: "<<Total<<endl;
        }
        break;
    }

    return 0;

}