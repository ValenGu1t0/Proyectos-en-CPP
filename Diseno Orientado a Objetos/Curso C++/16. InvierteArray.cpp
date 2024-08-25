#include <iostream>

using namespace std;

int main () {

int array[100];

int n;

cout<<"Ingrese el numero de valores que quiere tener en su array: "; cin>>n;

for (int i=0; i<n; i++) {

    cout<<"Digite un numero: "; cin>>array[i];

}

for (int i=0; i<n; i++) {

    cout<<i<<" --> "<<array[i]<<endl;

}

// Proceso de inversion, la posicion arranca en n-1 por las pos de array, i llega hasta 0 y i decrementa

cout<<"Ahora su array invertido: "<<endl;

for (int i=(n-1); i>-1; i--) {

cout<<i<<" --> "<<array[i]<<endl;

}

}