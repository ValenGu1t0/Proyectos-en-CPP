#include <iostream>

using namespace std;

int main () {

int nro1, nro2;

cout<<"Ingrese dos numeros: "; cin>>nro1>>nro2;     // Otra forma de input, ingresar con un espacio

if (nro1 == nro2) {

    cout<<"Los numeros son identicos..";

} else if (nro1 > nro2) {                       // Notese que podemos enlazar un else if

    cout<<"El numero mayor es: "<<nro1;

} else {

    cout<<"El numero mayor es: "<<nro2;

}

return 0;

}