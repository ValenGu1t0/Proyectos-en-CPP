#include <iostream>     // Librerias - Input y Output

using namespace std;    // Estandar general para crear outputs

int main () {


    int h1, h2, suma=0, resta=0, multiplicacion=0;
    float division=0;    

    cout<<"Ingrese un entero: "; cin>>h1;

    cout<<"Ingrese otro entero: "; cin>>h2;


    suma = h1 + h2;
    resta = h1 - h2;
    multiplicacion = h1 * h2;
    division = h1 / h2;

    cout<<"El resultado de la suma es: "<<suma<<endl;
    cout<<"El resultado de la resta es: "<<resta<<endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
    cout<<"El resultado de la division es: "<<division<<endl;


    return 0;
}