#include <iostream>

#include <conio.h>  // Libreria que incluye a getch(), que ayuda a que los programas no se autocierren

#include <stdlib.h> // Libreria que incluye la funcion  -->   system(pause);  -> Igual que getch

using namespace std;

int main () {


//  WHILE

int i = 1;

while (i<=10) {

    cout<<i<<endl;  // 1, 2, 3, 4, 5, 6, 7, 8, 9, 1O
    i++;

}

// FOR 

for (int j=10; j>=1; j--) {     // Podemos declarar variable dentro del for

    cout<<j<<endl;

}


getch();            // Pulsar si o si algo para salir del programa

// system(pause);   // Pulsar algo para salir del programa

return 0;

}