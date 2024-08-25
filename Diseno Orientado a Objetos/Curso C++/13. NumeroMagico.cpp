#include <iostream>
#include <stdlib.h> // Generan nro aleatorio
#include <time.h>   // Generan nro aleatorio

using namespace std;

int main () {

int numero, dato, contador = 0;

    // Generamos un numero aleatorio:

    srand(time(NULL));  // Genera el nro random y cambia la semilla cada ejecucion

    // Limit izq    nro rand   limit der
       dato = 1  +  rand()%    (100);
    // Va a generar un nro random entre 1 y 100. Lo almacenamos en "dato"

    do {

        cout<<"Ingrese un numero: "; cin>>numero;

        if (numero > dato) {

            cout<<"\nDigite un numero menor!: \n";

        }

        if (numero < dato) {

            cout<<"\nDigite un numero mayor!: \n";

        }

        contador++;         // Cuenta la cantidad de intentos antes de adivinarlo

    } while (numero != dato);

    cout<<"Felicidades! Adivinaste el numero!!\n";
    cout<<"Numero de intentos: "<<contador<<endl;

return 0;

}