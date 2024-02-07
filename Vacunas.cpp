#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int meses = 0;
    float peso = 0;
    float dosis = 0;

    cout<<"Dosis de la vacuna"<<endl;
    cout<<"Ingrese meses del bebe: "<<endl;
    cin>>meses;

    cout<<"Ingrese peso del bebe en kg: "<<endl;
    cin>>peso;

    dosis = (peso+10)/(meses*10)*8;

    cout<<"La dosis a aplicar es: "<<dosis<<" ml"<<endl;

    return 0;


}