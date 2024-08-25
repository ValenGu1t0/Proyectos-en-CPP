#include <iostream>

using namespace std;

int main () {

int array[10];                          // Reservamos un array para 10 enteros

int vector[] = {1, 2, 3, 4, 5};        // Declaramos un array de 5 enteros

char cadena[] = {'h', 'o', 'l', 'a'};   // Declaramos un string de char

int cont;

for (int i=0; i<5; i++) {

    cont += vector[i];

}

cout<<"La suma del arreglo es de: "; cout<<cont;


return 0;
}