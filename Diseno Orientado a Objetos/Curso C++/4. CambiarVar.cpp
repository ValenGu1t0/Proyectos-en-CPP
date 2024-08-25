#include <iostream>    

using namespace std;    

int main () {

    int x, y, pivot;    // Auxiliar

    cout<<"Ingrese el valor de x: "; cin>>x;
    cout<<"Ingrese el valor de y: "; cin>>y;

    pivot = x;       // Se asigna lo de la derecha en lo de la izquierda
    x = y; 
    y = pivot;

    cout<<"Ahora el valor de X es: "<<x;
    cout<<"\n";
    cout<<"Ahora el valor de Y es: "<<y;


    return 0;
}