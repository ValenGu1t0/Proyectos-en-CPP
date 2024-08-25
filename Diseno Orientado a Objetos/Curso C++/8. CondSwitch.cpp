#include <iostream>

using namespace std;

int main () {

int numero;

    cout<<"Ingrese un numero entre 1 y 5: "; cin>>numero;


    switch (numero) {   // Vos ingresas un numero y depende si coincide con el case lo ejecuta

    case 1:
            cout<<"Ud ingreso el numero 1!";        break;  // Con break salimos del case, y del switch

    case 2:
            cout<<"Ud ingreso el numero 2!";        break;

    case 3:
            cout<<"Ud ingreso el numero 3!";        break;

    case 4:
            cout<<"Ud ingreso el numero 4!";        break;

    case 5:
            cout<<"Ud ingreso el numero 5!";        break;

    default:
            cout<<"Ingresa lo que quieras papito";
    break;

    }


    return 0;
}