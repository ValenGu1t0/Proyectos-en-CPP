#include <iostream>

using namespace std;

int main () {

int array[10];

int n, aux;

int mayor=0;

cout<<"Ingrese el numero de valores que quiere tener en su array: "; cin>>n;

for (int i=0; i<n; i++) {

    cout<<i+1<<". Digite un numero para guardar: "; cin>>array[i];

    if (array[i] > mayor) {

        mayor = array[i];

    }

}

return 0;

}