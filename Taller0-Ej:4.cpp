#include <iostream>
using namespace std;

int main(){

    int horas_normales = 35;
    int salario_base_hora = 4000;
    int salario_extra_hora = 5000;
    int horas_trabajadas = 0;
    int salario_semanal = 0;
    int horas_extra = 0;

    cout<<"Ingrese las horas trabajadas: "<<endl;
    cin>>horas_trabajadas;

    if (horas_trabajadas <= horas_normales) {
        salario_semanal = salario_base_hora * horas_trabajadas;
    } else {
        horas_extra = horas_trabajadas - horas_normales;
        salario_semanal = (salario_base_hora * horas_normales) + (salario_extra_hora * horas_extra);
    }

    cout<<"El salario semanal del empleado es: "<<salario_semanal<<" pesos"<<endl;
    return 0;

}