#include <iostream>
using namespace std;

int main(){
    
    string ContraseñaAlmacenada = "hola12";
    string UsuarioAlmacenado = "Paulagonzalez";
    
    string ContraseñaIngresada;
    string UsuarioIngresado;

    bool InicioCorrecto = true;

    while (InicioCorrecto) {
        
        cout<<"Ingrese su contraseña: "<<endl;
        cin >> ContraseñaIngresada;
        
        cout<<"Ingrese su usuario: "<<endl;
        cin >> UsuarioIngresado;

        if (ContraseñaIngresada == ContraseñaAlmacenada && UsuarioIngresado == UsuarioAlmacenado){
            cout << "¡Tienes una memoria muy buena! Accediste correctamente" << endl;
            InicioCorrecto = false;
        } else {
            cout <<"Oh parece que se te olvidaron tus datos de inicio de sesión :( Try again" << endl;
        }
    
    }

    return 0;
}
