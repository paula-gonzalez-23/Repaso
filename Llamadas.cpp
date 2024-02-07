#include <iostream>
using namespace std;

int main()
{
    int TipoLlamada;
    int DuracionLlamada;
    int CostoLlamada;

    cout<<"Opciones de llamada: "<<endl;
    cout<<"1. Llamada a Celular "<<endl;
    cout<<"2. Llamada a Fijo "<<endl;
    cout<<"3. Llamada Internacional "<<endl;
    
    cout<<"Ingrese el tipo de llamada: "<<endl;
    cin>>TipoLlamada;

   if (TipoLlamada>=1 && TipoLlamada<=3){
    cout<<"Ingrese la duracion de la llamada: "<<endl;
    cin>>DuracionLlamada;

    if (TipoLlamada == 1){
        CostoLlamada = DuracionLlamada*300;
    } else if (TipoLlamada == 2){
        CostoLlamada = DuracionLlamada*200;
    } else if (TipoLlamada == 3){
        CostoLlamada = DuracionLlamada*500;
    }

    cout<<"El costo de la llamda es: $"<<CostoLlamada<<endl;

   }else {
    cout<<"Error: Opcion de llamada no valida"<<endl;
   }

   return 0;

}