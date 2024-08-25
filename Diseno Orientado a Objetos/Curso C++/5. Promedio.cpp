#include <iostream>

using namespace std;

int main () {

    int teoria, practica, compor;    // Auxiliar
    float nota_final = 0;

    cout<<"Ingrese la nota de practica: ";  cin>>practica;
    cout<<"Ingrese la nota de teoria: ";    cin>>teoria;
    cout<<"Ingrese la nota de compor: ";    cin>>compor;

    practica = practica * 0.3; // Sacamos el 30%
    teoria *= 0.6;             // Equivalente a multiplicar la misma variable (+, -, *, /)
    compor *= 0.1;

    nota_final = practica + teoria + compor;

    cout<<"La nota final es de: "<<nota_final;

    return 0;
}