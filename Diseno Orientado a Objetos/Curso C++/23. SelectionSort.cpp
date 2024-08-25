#include <iostream>
#include <string.h>

// SELECTION SORT //

using namespace std;

int main () {

int numeros[] = {3, 2, 1, 5, 4};

int i, j, aux, min;

cout<<"El array sin ordenar: "<<endl;

for (i=0; i<5; i++) {

    cout<<numeros[i]<<" ";

}

for (i=0; i<5; i++) {

    min = i;        // Necesitamos encontrar el minimo, supongamos que es i

    for (j=i+1; j<5; j++) {         // Una posicion adelante pues suponemos que min es el primer elemento

        if (numeros[j] < numeros[min]) {    // Si la posicion normal en arreglo es menor al min (1er elemento)

            min = j;        // Los cambiamos de posicion: ahora el minimo se convierte en j (el menor actual)

        }
    }
    aux = numeros[i];
    numeros[i] = numeros[min];
    numeros[min] = aux;
}

cout<<endl;
cout<<"El array ordenado: "<<endl;

for (i=0; i<5; i++) {

    cout<<numeros[i]<<" ";

}

return 0;

}