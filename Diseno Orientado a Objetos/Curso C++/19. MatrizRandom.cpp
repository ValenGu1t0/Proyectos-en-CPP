#include <iostream>
#include <stdlib.h> // Generan nro aleatorio
#include <time.h>   // Generan nro aleatorio

#define n 4
#define m 4

using namespace std;

int main () {

int matriz[n][m];
int dato;

srand(time(NULL));  // Genera el nro random y cambia la semilla cada ejecucion

// Creamos la matriz aleatoriamente:

for (int i=0; i<n; i++) {

    for (int j=0; j<m; j++) {

        matriz[i][j] = 1 + rand() % (100);  // Limites en la generacion de random

    }
}

// Mostramos la matriz generada:

for (int i=0; i<n; i++) {

        for (int j=0; j<m; j++) {

            cout<<matriz[i][j]<<" ";

        }
        cout<<endl;
    }
    
return 0;

}