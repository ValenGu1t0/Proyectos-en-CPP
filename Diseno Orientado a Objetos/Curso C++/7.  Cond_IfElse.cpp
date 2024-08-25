#include <iostream>

using namespace std;

int main () {

int numero;

    cout<<"Ingrese un numero: "; cin>>numero;

    if (numero%2 == 0) {            // Modulo de division, devuelve el resto

        cout<<"Su numero es par!!";

    } else {

        cout<<"Su numero es impar!!";
    }

    return 0;
}