#include <iostream>

#define n 4

using namespace std;

int main () {

int matriz[n][n];

int i, j;


cout<<"Rellene su matriz, que es de 4 x 4: "<<endl; 


for (i=0; i<n; i++) {

    for (j=0; j<n; j++) {


        cout<<"Fila "<<i+1<<" - Ingrese un numero: ";     cin>>matriz[i][j];

    }

}

for (i=0; i<n; i++) {

    for (j=0; j<n; j++) {

        cout<<matriz[i][j]<<" ";

    }

    cout<<endl;

}

return 0;

}