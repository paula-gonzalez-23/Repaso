#include <iostream>
using namespace std;

int main()
{
    string NombreEspecie;
    int TotalAfectadas = 0;
    string respuesta;

    while (true){
        cout<<"Ingrese el nombre de la especie: "<<endl;
        cin>>NombreEspecie;

        TotalAfectadas += 1;

        cout<<"Especie " << NombreEspecie << " registrada con éxito"<<endl;

        cout<<"¿Desea registrar otra especie?(S/N): "<<endl;
        cin>>respuesta;

        if (!(respuesta=="S"||respuesta=="s")) {
            break;
        }
    }

    cout<<"Total de especies afectadas por los incendios: "<<TotalAfectadas<<endl;

    return 0;
}